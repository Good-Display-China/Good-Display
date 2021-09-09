#include <SPI.h>
#include "epd.h"
#include "imagedata.h"
#include "epdpaint.h"
#include <stdio.h>

Epd epd;
unsigned char image[5000];
Paint paint(image, 200, 200);

unsigned long time_start_ms;
unsigned long time_now_s;
#define COLORED     0
#define UNCOLORED   1


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

void setup()
{
   pinMode(LED_BUILTIN, OUTPUT); //ESP8266 Status light 
   ESP.wdtDisable();//Turn off the software watchdog
}

void loop()
{
  //GUI
  epd.LDirInit();
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 4, "www.good-display.cn", &Font12, COLORED);
   //Line
   paint.DrawLine(20, 20, 70, 60,  COLORED);
   paint.DrawLine(70, 20, 20, 60,   COLORED);
//Rectangle
   paint.DrawRectangle(20, 20, 70, 60,   COLORED);
   paint.DrawRectangle(85, 20, 130, 60,  COLORED);
//Circle
   paint.DrawCircle(50, 120, 30,  COLORED);
   paint.DrawCircle(100, 120, 30,  COLORED);
   epd.SetFrameMemory(paint.GetImage(),0, 0, paint.GetWidth(), paint.GetHeight());
   epd.DisplayFrame();
   epd.Sleep();
   delay(2000);  

  epd.Init();
  epd.Clear();
  //Part display
  epd.Init();
  epd.DisplayPartBaseWhiteImage();
  epd.EPD_Dis_Part(0,32, Num[0],32,64);//display num0
  epd.EPD_Dis_Part(0,32, Num[1],32,64);//display num1
  epd.EPD_Dis_Part(0,32, Num[2],32,64);//display num2
  epd.Sleep();
  delay(2000); 
  
  epd.Init();
  epd.Clear();
  epd.Sleep();
    while(1) 
  {
   Sys_run();//System run
   LED_run();//Breathing lamp
  }
}
