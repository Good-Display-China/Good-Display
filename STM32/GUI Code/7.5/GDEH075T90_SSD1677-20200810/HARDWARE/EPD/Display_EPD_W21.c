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

void EPD_Display(unsigned char *BW_Image)
{
    unsigned int Width, Height,i,j;
    Width = (EPD_WIDTH % 8 == 0)? (EPD_WIDTH / 8 ): (EPD_WIDTH / 8 + 1);
    Height = EPD_HEIGHT;

    EPD_W21_WriteCMD(0x24);
    for (j = 0; j < Height; j++) {
        for ( i = 0; i < Width; i++) {
           EPD_W21_WriteDATA(BW_Image[i + j * Width]);
        }
    }

		 //update
		EPD_W21_WriteCMD(0x22); //Display Update Control
		EPD_W21_WriteDATA(0xC7);   
		EPD_W21_WriteCMD(0x20);  //Activate Display Update Sequence
		Epaper_READBUSY(); 
}
//SSD1677
void EPD_init(void)
{	
	  EPD_W21_Init();
	
		EPD_W21_WriteCMD(0x12); 		  //SWRESET
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal
		
	  EPD_W21_WriteCMD(0x46);  // Auto Write RAM
		EPD_W21_WriteDATA(0xF7);
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal

		EPD_W21_WriteCMD(0x47);  // Auto Write RAM
		EPD_W21_WriteDATA(0xF7);
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal

		EPD_W21_WriteCMD(0x0C);  // Soft start setting
		EPD_W21_WriteDATA(0xAE);
		EPD_W21_WriteDATA(0xC7);
		EPD_W21_WriteDATA(0xC3);
		EPD_W21_WriteDATA(0xC0);
		EPD_W21_WriteDATA(0x40);   

		EPD_W21_WriteCMD(0x01);  // Set MUX as 527
		EPD_W21_WriteDATA(0x0F);
		EPD_W21_WriteDATA(0x02);
		EPD_W21_WriteDATA(0x00);

		EPD_W21_WriteCMD(0x11);  // Data entry mode
		EPD_W21_WriteDATA(0x01);
		
		EPD_W21_WriteCMD(0x44);
		EPD_W21_WriteDATA(0x00); // RAM x address start at 0
		EPD_W21_WriteDATA(0x00);
		EPD_W21_WriteDATA(0x6F); // RAM x address end at 36Fh -> 879
		EPD_W21_WriteDATA(0x03);
		EPD_W21_WriteCMD(0x45);
		EPD_W21_WriteDATA(0x0F); // RAM y address start at 20Fh;
		EPD_W21_WriteDATA(0x02);
		EPD_W21_WriteDATA(0x00); // RAM y address end at 00h;
		EPD_W21_WriteDATA(0x00);

		EPD_W21_WriteCMD(0x3C); // VBD
		EPD_W21_WriteDATA(0x01); // LUT1, for white

		EPD_W21_WriteCMD(0x18);
		EPD_W21_WriteDATA(0X80);
		EPD_W21_WriteCMD(0x22);
		EPD_W21_WriteDATA(0XB1);	//Load Temperature and waveform setting.
		EPD_W21_WriteCMD(0x20);
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal

		EPD_W21_WriteCMD(0x4E); 
		EPD_W21_WriteDATA(0x00);
		EPD_W21_WriteDATA(0x00);
		EPD_W21_WriteCMD(0x4F); 
		EPD_W21_WriteDATA(0x0F);
		EPD_W21_WriteDATA(0x02);
}
void EPD_init_GUI(void)
{	
	  EPD_W21_Init();
	
		EPD_W21_WriteCMD(0x12); 		  //SWRESET
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal
		
	  EPD_W21_WriteCMD(0x46);  // Auto Write RAM
		EPD_W21_WriteDATA(0xF7);
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal

		EPD_W21_WriteCMD(0x47);  // Auto Write RAM
		EPD_W21_WriteDATA(0xF7);
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal

		EPD_W21_WriteCMD(0x0C);  // Soft start setting
		EPD_W21_WriteDATA(0xAE);
		EPD_W21_WriteDATA(0xC7);
		EPD_W21_WriteDATA(0xC3);
		EPD_W21_WriteDATA(0xC0);
		EPD_W21_WriteDATA(0x40);   

		EPD_W21_WriteCMD(0x01);  // Set MUX as 679
		EPD_W21_WriteDATA(0xA7);
		EPD_W21_WriteDATA(0x02);
		EPD_W21_WriteDATA(0x01); //Show mirror

		EPD_W21_WriteCMD(0x11);  // Data entry mode
		EPD_W21_WriteDATA(0x01);
		
		EPD_W21_WriteCMD(0x44);
		EPD_W21_WriteDATA(0x00); // RAM x address start at 0
		EPD_W21_WriteDATA(0x00);
		EPD_W21_WriteDATA(0x6F); // RAM x address end at 36Fh -> 879
		EPD_W21_WriteDATA(0x03);
		EPD_W21_WriteCMD(0x45);
		EPD_W21_WriteDATA(0xA7); // RAM y address start at 20Fh;
		EPD_W21_WriteDATA(0x02);
		EPD_W21_WriteDATA(0x00); // RAM y address end at 00h;
		EPD_W21_WriteDATA(0x00);

		EPD_W21_WriteCMD(0x3C); // VBD
		EPD_W21_WriteDATA(0x01); // LUT1, for white

		EPD_W21_WriteCMD(0x18);
		EPD_W21_WriteDATA(0X80);
		EPD_W21_WriteCMD(0x22);
		EPD_W21_WriteDATA(0XB1);	//Load Temperature and waveform setting.
		EPD_W21_WriteCMD(0x20);
		Epaper_READBUSY();        //waiting for the electronic paper IC to release the idle signal

		EPD_W21_WriteCMD(0x4E); 
		EPD_W21_WriteDATA(0x00);
		EPD_W21_WriteDATA(0x00);
		EPD_W21_WriteCMD(0x4F); 
		EPD_W21_WriteDATA(0xA7);
		EPD_W21_WriteDATA(0x02);
}	
void EPD_sleep(void)
{
  EPD_W21_WriteCMD(0x10); //enter deep sleep
  EPD_W21_WriteDATA(0x01); 
  delay_xms(100);
}

void PIC_display(const unsigned char *BW_datas)
{
   unsigned int i;	
  EPD_W21_WriteCMD(0x24);   //write RAM for black(0)/white (1)
   for(i=0;i<ALLSCREEN_GRAGHBYTES;i++)
   {               
     EPD_W21_WriteDATA(*BW_datas);
			BW_datas++;
   }
	 //update
  EPD_W21_WriteCMD(0x22); //Display Update Control
  EPD_W21_WriteDATA(0xC7);   
  EPD_W21_WriteCMD(0x20);  //Activate Display Update Sequence
  Epaper_READBUSY(); 	 
}
void PIC_display_Clear(void)
{
   unsigned int i;	
  EPD_W21_WriteCMD(0x24);   //write RAM for black(0)/white (1)
   for(i=0;i<ALLSCREEN_GRAGHBYTES;i++)
   {               
     EPD_W21_WriteDATA(0xff);
   }
	 //update
  EPD_W21_WriteCMD(0x22); //Display Update Control
  EPD_W21_WriteDATA(0xC7);   
  EPD_W21_WriteCMD(0x20);  //Activate Display Update Sequence
  Epaper_READBUSY(); 	 
}

void Epaper_READBUSY(void)
{ 
  while(1)
  {	 //=1 BUSY
     if(isEPD_W21_BUSY==0) break;;
  }  
}














/***********************************************************
						end file
***********************************************************/

