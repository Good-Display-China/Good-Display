#include"Ap_29demo.h"
//IO settings
int BUSY_Pin = D0; 
int RES_Pin = D1; 
int DC_Pin = D2; 
int CS_Pin = D5; 
int SCK_Pin = D6; 
int SDI_Pin = D7; 

#define EPD_W21_MOSI_0  digitalWrite(SDI_Pin,LOW)
#define EPD_W21_MOSI_1  digitalWrite(SDI_Pin,HIGH) 

#define EPD_W21_CLK_0 digitalWrite(SCK_Pin,LOW)
#define EPD_W21_CLK_1 digitalWrite(SCK_Pin,HIGH)

#define EPD_W21_CS_0 digitalWrite(CS_Pin,LOW)
#define EPD_W21_CS_1 digitalWrite(CS_Pin,HIGH)

#define EPD_W21_DC_0  digitalWrite(DC_Pin,LOW)
#define EPD_W21_DC_1  digitalWrite(DC_Pin,HIGH)
#define EPD_W21_RST_0 digitalWrite(RES_Pin,LOW)
#define EPD_W21_RST_1 digitalWrite(RES_Pin,HIGH)
#define isEPD_W21_BUSY digitalRead(BUSY_Pin)
////////FUNCTION//////
void driver_delay_us(unsigned int xus);
void driver_delay_xms(unsigned long xms);
void DELAY_S(unsigned int delaytime);     
void SPI_Delay(unsigned char xrate);
void SPI_Write(unsigned char value);
void EPD_W21_WriteDATA(unsigned char command);
void EPD_W21_WriteCMD(unsigned char command);
//EPD
void EPD_W21_Init(void);
void EPD_init(void);
void PIC_display1(void);
void EPD_sleep(void);
void EPD_refresh(void);
void lcd_chkstatus(void);
void PIC_display_Clean(void);
unsigned char HRES_byte1,HRES_byte2,VRES_byte1,VRES_byte2;

void Sys_run(void)
{
   ESP.wdtFeed(); //Feed dog to prevent system reset
  }

void LED_run(void)
{
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on (Note that LOW is the voltage level
  delay(500);
  }
void setup() {
  
   pinMode(BUSY_Pin, INPUT); 
   pinMode(RES_Pin, OUTPUT);  
   pinMode(DC_Pin, OUTPUT);    
   pinMode(CS_Pin, OUTPUT);    
   pinMode(SCK_Pin, OUTPUT);    
   pinMode(SDI_Pin, OUTPUT);    

   pinMode(LED_BUILTIN, OUTPUT); //ESP8266 Status light 
   ESP.wdtDisable();//Turn off the software watchdog
}

/*When the electronic paper is refreshed in full screen, the picture flicker is a normal phenomenon, and the main function is to clear the display afterimage in the previous picture.
  When the local refresh is performed, the screen does not flash.*/
/*When you need to transplant the driver, you only need to change the corresponding IO. The BUSY pin is the input mode and the others are the output mode. */



void loop() {
    //PICTURE1
    EPD_init(); //EPD init
    PIC_display1();
    EPD_refresh();//EPD_refresh   
    EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
   delay(3000);
    
    //PICTURE Clean
     EPD_init(); //EPD init
    PIC_display_Clean();
    EPD_refresh();//EPD_refresh   
    EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
 while(1) 
  {
     Sys_run();//System run
     LED_run();//Breathing lamp
  }
    


  
}




///////////////////EXTERNAL FUNCTION////////////////////////////////////////////////////////////////////////
/////////////////////delay//////////////////////////////////////
void driver_delay_us(unsigned int xus)  //1us
{
  for(;xus>1;xus--);
}
void driver_delay_xms(unsigned long xms) //1ms
{  
    unsigned long i = 0 , j=0;

    for(j=0;j<xms;j++)
  {
        for(i=0; i<256; i++);
    }
}
void DELAY_S(unsigned int delaytime)     
{
  int i,j,k;
  for(i=0;i<delaytime;i++)
  {
    for(j=0;j<4000;j++)           
    {
      for(k=0;k<222;k++);
                
    }
  }
}
//////////////////////SPI///////////////////////////////////
void SPI_Delay(unsigned char xrate)
{
  unsigned char i;
  while(xrate)
  {
    for(i=0;i<2;i++);
    xrate--;
  }
}


void SPI_Write(unsigned char value)                                    
{                                                           
    unsigned char i;  
   //SPI_Delay(1);
    for(i=0; i<8; i++)   
    {
        EPD_W21_CLK_0;
      // SPI_Delay(1);
       if(value & 0x80)
          EPD_W21_MOSI_1;
        else
          EPD_W21_MOSI_0;   
        value = (value << 1); 
      // SPI_Delay(1);
      // driver_delay_us(1);
        EPD_W21_CLK_1; 
       // SPI_Delay(1);
    }
}

void EPD_W21_WriteCMD(unsigned char command)
{
 // SPI_Delay(1);
  EPD_W21_CS_0;                   
  EPD_W21_DC_0;   // command write
  SPI_Write(command);
  EPD_W21_CS_1;
}
void EPD_W21_WriteDATA(unsigned char command)
{
 // SPI_Delay(1);
  EPD_W21_CS_0;                   
  EPD_W21_DC_1;   // command write
  SPI_Write(command);
  EPD_W21_CS_1;
}



/////////////////EPD settings Functions/////////////////////
void EPD_W21_Init(void)
{
  EPD_W21_RST_0;    // Module reset
  delay(100); //At least 10ms
  EPD_W21_RST_1;
  delay(100);  
}
void EPD_init(void)
{
    HRES_byte1=0x02;      //640
    HRES_byte2=0x80;
    VRES_byte1=0x01;      //384
    VRES_byte2=0x80;
  
    EPD_W21_Init();    //Electronic paper IC reset
    EPD_W21_WriteCMD(0x01); 
    EPD_W21_WriteDATA (0x37);     //POWER SETTING
    EPD_W21_WriteDATA (0x00);

    EPD_W21_WriteCMD(0X00);     //PANNEL SETTING
    EPD_W21_WriteDATA(0xCF);
    EPD_W21_WriteDATA(0x08);

    EPD_W21_WriteCMD(0x30);     //PLL setting
    EPD_W21_WriteDATA (0x3a);   //PLL:    0-15¡æ:0x3C, 15+:0x3A   
    
    EPD_W21_WriteCMD(0X82);     //VCOM VOLTAGE SETTING
    EPD_W21_WriteDATA(0x28);    //all temperature  range
    
    EPD_W21_WriteCMD(0x06);         //boostÉè¶¨
    EPD_W21_WriteDATA (0xc7);     
    EPD_W21_WriteDATA (0xcc);
    EPD_W21_WriteDATA (0x15);

    EPD_W21_WriteCMD(0X50);     //VCOM AND DATA INTERVAL SETTING
    EPD_W21_WriteDATA(0x77);

    EPD_W21_WriteCMD(0X60);     //TCON SETTING
    EPD_W21_WriteDATA(0x22);

    EPD_W21_WriteCMD(0X65);     //FLASH CONTROL
    EPD_W21_WriteDATA(0x00);

    EPD_W21_WriteCMD(0x61);         //tres      
    EPD_W21_WriteDATA (HRES_byte1);   //source 600
    EPD_W21_WriteDATA (HRES_byte2);
    EPD_W21_WriteDATA (VRES_byte1);   //gate 448
    EPD_W21_WriteDATA (VRES_byte2);

    EPD_W21_WriteCMD(0xe5);     //FLASH MODE        
    EPD_W21_WriteDATA(0x03);  
    
    EPD_W21_WriteCMD(0x04);  //Power on
    lcd_chkstatus();        //waiting for the electronic paper IC to release the idle signal
}
void EPD_refresh(void)
{
    EPD_W21_WriteCMD(0x12);     //DISPLAY REFRESH   
    driver_delay_xms(100);          //!!!The delay here is necessary, 200uS at least!!!     
    lcd_chkstatus();
} 
void EPD_sleep(void)
{
    EPD_W21_WriteCMD(0X50);  //VCOM AND DATA INTERVAL SETTING  
    EPD_W21_WriteDATA(0xf7);
       
    EPD_W21_WriteCMD(0X02);   //power off
    lcd_chkstatus();
    EPD_W21_WriteCMD(0X07);   //deep sleep
    EPD_W21_WriteDATA(0xA5);
}

void PIC_display1(void)
{
  u32 i;
  u8 j,temp1,temp2,temp3;
    EPD_W21_WriteCMD(0x10);      //start to transport picture
   for(i=0;i<61440;i++)       //2bit for a pixels(old is 4bit for a pixels)   
    { 
       if(i==30720)
       ESP.wdtFeed(); //Feed dog to prevent system reset 
     temp1 = pgm_read_byte(&gImage_1[i]);
      for(j=0;j<2;j++)         //2bit to 4bit
      {
        temp2 = temp1&0xc0 ;   //Analysis the first 2bit
        if(temp2 == 0xc0)
          temp3 = 0x00;        //black(2bit to 4bit)
        else if(temp2 == 0x00)
          temp3 = 0x03;        //white(2bit to 4bit)
        else
          temp3 = 0x04;        //red(2bit to 4bit)
          
        temp3 <<=4;            //move to the Hight 4bit
        temp1 <<=2;            //move 2bit  
        temp2 = temp1&0xc0 ;   //Analysis the second 2bit
        if(temp2 == 0xc0)
          temp3 |= 0x00;       //black(2bit to 4bit),Data consolidation
        else if(temp2 == 0x00)
          temp3 |= 0x03;       //white(2bit to 4bit),Data consolidation
        else
          temp3 |= 0x04;       //red(2bit to 4bit),Data consolidation
        
        temp1 <<=2;            //move 2bit£¬turn the next 2bit
        
        EPD_W21_WriteDATA(temp3); //write a byte,Contains two 4bit pixels 
      }
    }     
}

void PIC_display_Clean(void)
{
    unsigned int i;
    EPD_W21_WriteCMD(0x10);        
    for(i=0;i<61440*2;i++)       
  {
    if(i==30720)
    ESP.wdtFeed(); //Feed dog to prevent system reset 
    EPD_W21_WriteDATA(0x33); //white
  }
}
void lcd_chkstatus(void)
{
    EPD_W21_WriteCMD(0x71);
  while(!isEPD_W21_BUSY)//0 is busy
  {
    ESP.wdtFeed(); //Feed dog to prevent system reset
    }                      
}
/////////////////////////END////////////////////
