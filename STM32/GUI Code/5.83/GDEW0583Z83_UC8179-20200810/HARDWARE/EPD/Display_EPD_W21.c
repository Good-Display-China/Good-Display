#include "Display_EPD_W21_spi.h"
#include "Display_EPD_W21.h"

void delay_xms(unsigned int xms)
{
	unsigned int i;
	while(xms--)
	{
		i=12000;
		while(i--);
	}
}

void EPD_W21_Init(void)
{
	EPD_W21_RST_0;		// Module reset
	delay_xms(10);//At least 10ms delay 
	EPD_W21_RST_1;
	delay_xms(10);//At least 10ms delay 
	
}


void EPD_Display_BW(unsigned char *BW_Image)
{
    unsigned int Width, Height,i,j;
    Width = (EPD_WIDTH % 8 == 0)? (EPD_WIDTH / 8 ): (EPD_WIDTH / 8 + 1);
    Height = EPD_HEIGHT;

    EPD_W21_WriteCMD(0x10);
    for (j = 0; j < Height; j++) {
        for ( i = 0; i < Width; i++) {
           EPD_W21_WriteDATA(BW_Image[i + j * Width]);
        }
    }
}
void EPD_Display_R(unsigned char *R_Image)
{
    unsigned int Width, Height,i,j;
    Width = (EPD_WIDTH % 8 == 0)? (EPD_WIDTH / 8 ): (EPD_WIDTH / 8 + 1);
    Height = EPD_HEIGHT;

    EPD_W21_WriteCMD(0x13);
    for ( j = 0; j < Height; j++) {
        for ( i = 0; i < Width; i++) {
           EPD_W21_WriteDATA(~R_Image[i + j * Width]);
        }
    }
		EPD_W21_WriteCMD(0x12);			//DISPLAY REFRESH 	
		delay_xms(1);	    //!!!The delay here is necessary, 200uS at least!!!     
		lcd_chkstatus();
}
//UC8179C
void EPD_init(void)
{	
		EPD_W21_Init();		//Electronic paper IC reset	

		EPD_W21_WriteCMD(0x01);			//POWER SETTING
		EPD_W21_WriteDATA (0x07);
		EPD_W21_WriteDATA (0x07);    //VGH=20V,VGL=-20V
		EPD_W21_WriteDATA (0x3f);		//VDH=15V
		EPD_W21_WriteDATA (0x3f);		//VDL=-15V

		EPD_W21_WriteCMD(0x04); //POWER ON 
		lcd_chkstatus();        //waiting for the electronic paper IC to release the idle signal
	
		EPD_W21_WriteCMD(0X00);			//PANNEL SETTING
		EPD_W21_WriteDATA(0x0F);   //KW-3f   KWR-2F	BWROTP 0f	BWOTP 1f

		EPD_W21_WriteCMD(0x61);        	//tres			
		EPD_W21_WriteDATA (0x03);		//source 800
		EPD_W21_WriteDATA (0x20);
		EPD_W21_WriteDATA (0x01);		//gate 480
		EPD_W21_WriteDATA (0xE0);
	
		EPD_W21_WriteCMD(0X15);		
		EPD_W21_WriteDATA(0x00);		

		EPD_W21_WriteCMD(0X50);			//VCOM AND DATA INTERVAL SETTING
		EPD_W21_WriteDATA(0x11);
		EPD_W21_WriteDATA(0x07);

		EPD_W21_WriteCMD(0X60);			//TCON SETTING
		EPD_W21_WriteDATA(0x22);}
	
void EPD_sleep(void)
{
		EPD_W21_WriteCMD(0X50);  //VCOM AND DATA INTERVAL SETTING			
		EPD_W21_WriteDATA(0xf7); //WBmode:VBDF 17|D7 VBDW 97 VBDB 57		WBRmode:VBDF F7 VBDW 77 VBDB 37  VBDR B7	

		EPD_W21_WriteCMD(0X02);  	//power off
	  lcd_chkstatus();          //waiting for the electronic paper IC to release the idle signal
		EPD_W21_WriteCMD(0X07);  	//deep sleep
		EPD_W21_WriteDATA(0xA5);
}



void PIC_display(const unsigned char* picData_old,const unsigned char* picData_new)
{
    unsigned int i;
	  //Write Data
		EPD_W21_WriteCMD(0x10);	       //Transfer old data
	  for(i=0;i<48000;i++)	  
	  {
	   EPD_W21_WriteDATA(~(*picData_old));  
	   picData_old++;
  	}
		EPD_W21_WriteCMD(0x13);		     //Transfer new data
	  for(i=0;i<48000;i++)	     
	  {
	   EPD_W21_WriteDATA(*picData_new);
	   picData_new++;
	  }
	 //Refresh
	  EPD_W21_WriteCMD(0x12);		//DISPLAY REFRESH 	
		delay_xms(1);	  //!!!The delay here is necessary, 200uS at least!!!     
		lcd_chkstatus();          //waiting for the electronic paper IC to release the idle signal


}
void PIC_display_Clear(void)
{
    unsigned int i;
	  //Write Data
		EPD_W21_WriteCMD(0x10);	       //Transfer old data
	  for(i=0;i<48000;i++)	  
    {	
	  EPD_W21_WriteDATA(0xFF); 
    }
		EPD_W21_WriteCMD(0x13);		     //Transfer new data
	  for(i=0;i<48000;i++)	     
	  {
	  EPD_W21_WriteDATA(0xFF);  //Transfer the actual displayed data
	  }
		//Refresh
  	EPD_W21_WriteCMD(0x12);		//DISPLAY REFRESH 	
		delay_xms(1);	             //!!!The delay here is necessary, 200uS at least!!!     
		lcd_chkstatus();          //waiting for the electronic paper IC to release the idle signal

}

void lcd_chkstatus(void)
{
	unsigned char busy;
	do
	{
		EPD_W21_WriteCMD(0x71); 
		busy = isEPD_W21_BUSY;
		busy =!(busy & 0x01);        
	}
	while(busy);   
	delay_xms(200);                       
}














/***********************************************************
						end file
***********************************************************/

