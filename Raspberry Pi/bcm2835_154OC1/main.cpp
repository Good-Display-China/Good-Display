#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "epd1in54.h"
#include "epdpaint.h"
#include "imagedata.h"

#define COLORED      0
#define UNCOLORED    1

//Tips//
/*When the electronic paper is refreshed in full screen, the picture flicker is a normal phenomenon, and the main function is to clear the display afterimage in the previous picture.
  When the local refresh is performed, the screen does not flash.*/
/*When you need to transplant the driver, you only need to change the corresponding IO. The BUSY pin is the input mode and the others are the output mode. */

int main(void)
{
    time_t now;
    struct tm* timenow;
    Epd epd;
    if (epd.Init(lut_full_update) != 0) {
        printf("e-Paper init failed\n");
        return -1;
    }
    //all white
    epd.ClearFrameMemory(0xFF);
    epd.DisplayFrame();
    epd.ClearFrameMemory(0xFF);
    epd.DisplayFrame();

    unsigned char* frame_buffer = (unsigned char*)malloc(epd.width / 8 * epd.height);

    Paint paint(frame_buffer, epd.width, epd.height);
    paint.Clear(UNCOLORED);
    paint.SetRotate(ROTATE_270);

    /* For simplicity, the arguments are explicit numerical coordinates */
    /* Write strings to the buffer */
    paint.DrawFilledRectangle(0, 0, 200, 24, COLORED);//x1,y1,x2,y2,Diagonal point
    paint.DrawStringAt(15, 04, "--Good display--", &Font16, UNCOLORED);//x,y
    paint.DrawStringAt(38, 24, "e-Paper Demo", &Font16, COLORED);//x,y

    /* Draw something to the frame_buffer */
    paint.DrawRectangle(16, 60, 56, 110, COLORED);//x1,y1,x2,y2,Diagonal point
    paint.DrawLine(16, 60, 56, 110, COLORED);//x1,y1,x2,y2
    paint.DrawLine(56, 60, 16, 110, COLORED);//x1,y1,x2,y2
    paint.DrawCircle(150, 85, 30, COLORED);//x,y,r
    paint.DrawFilledRectangle(16, 130, 56, 180, COLORED);//x1,y1,x2,y2,Diagonal point
    paint.DrawFilledCircle(150, 155, 30, COLORED);//x,y,r

    /* Display the frame_buffer */
    epd.SetFrameMemory(paint.GetImage(), 0, 0, paint.GetWidth(), paint.GetHeight());
    epd.DisplayFrame();
    epd.DelayMs(3000);
     
    //all  refresh
    epd.SetFrameMemory1(IMAGE_DATA, 0, 0, epd.width, epd.height);
    epd.DisplayFrame();
    epd.DelayMs(2000);
    //all white
    epd.ClearFrameMemory(0xFF);
    epd.DisplayFrame();
    epd.ClearFrameMemory(0xFF);
    epd.DisplayFrame();
    epd.DelayMs(100);    


    if (epd.Init(lut_partial_update) != 0) {
        printf("e-Paper init failed\n");
        return -1;
    }

  /**
   *  there are 2 memory areas embedded in the e-paper display
   *  and once the display is refreshed, the memory area will be auto-toggled,
   *  i.e. the next action of SetFrameMemory will set the other memory area
   *  therefore you have to set the frame memory and refresh the display twice.
   */

    //all white
    epd.ClearFrameMemory(0xFF);
    epd.DisplayFrame();
    epd.ClearFrameMemory(0xFF);
    epd.DisplayFrame();
    epd.Sleep(); //EPD_sleep,Sleep instruction is necessary, please do not delete!!!

    return 0;
}

