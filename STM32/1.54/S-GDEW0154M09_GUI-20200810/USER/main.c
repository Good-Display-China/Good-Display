#include "stm32f10x.h"
#include "delay.h"
#include "sys.h"
//EPD
#include "Display_EPD_W21_spi.h"
#include "Display_EPD_W21.h"
#include "Ap_29demo.h"	
//GUI
#include "GUI_Paint.h"
#include "fonts.h"

unsigned char BlackImage[5000];//Define canvas space  

//Tips//
/*
1.When the e-paper is refreshed in full screen, the picture flicker is a normal phenomenon, and the main function is to clear the display afterimage in the previous picture.
2.When the partial refresh is performed, the screen does not flash.
3.After the e-paper is refreshed, you need to put it into sleep mode, please do not delete the sleep command.
4.Please do not take out the electronic paper when power is on.
5.Wake up from sleep, need to re-initialize the e-paper.
6.When you need to transplant the driver, you only need to change the corresponding IO. The BUSY pin is the input mode and the others are the output mode.
*/
int	main(void)
{
		delay_init();	    	     //Delay function initialization
		NVIC_Configuration(); 	//Set NVIC interrupt grouping 2
    EPD_GPIO_Init();       //EPD GPIO  initialization
	while(1)
	{
  ///////////////////////////Normal picture display/////////////////////////////////////////////////////////////////

		 	/******Clear screen after power on*****/
	//Clear
	EPD_init(); //EPD init
	EPD_full_display_Clear();//EPD Clear
	EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
	delay_s(2); //2s	
		
	EPD_init(); //EPD init
	EPD_full_display(gImage_1,gImage_1,0);//EPD_picture1
	EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
	delay_s(2); //2s	
	
	EPD_init(); //EPD init
	EPD_full_display(gImage_2,gImage_2,1);//EPD_picture1
	EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
	delay_s(2); //2s	

	EPD_init(); //EPD init
	EPD_full_display(gImage_3,gImage_3,1);//EPD_picture1
	EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
	delay_s(2); //2s	

	EPD_init(); //EPD init
	EPD_full_display(gImage_3,gImage_3,2);//End screen clearing
	EPD_full_display(gImage_3,gImage_3,3);//End screen clearing
	

	
//(Perform a full-screen refresh operation after 5 partial refreshes, otherwise the residual image may not be removed.)	
//////////////////////////partial display 0~9////////////////////////////////////////////	
	EPD_init(); //EPD init
	EPD_partial_display(0,32,0,64, gImage_num1,gImage_num1,0); //partial display 0 1                             
	EPD_partial_display(0,32,0,64, gImage_num1,gImage_num2,1); //partial display 1 2                         //////////////��x,y��   ----Y----
	EPD_partial_display(0,32,0,64, gImage_num2,gImage_num3,1); //partial display 1 2                         //////////////��x,y��   ----Y----
	EPD_partial_display(0,32,0,64, gImage_num3,gImage_num4,1); //partial display 1 2                         //////////////��x,y��   ----Y----
	EPD_partial_display(0,32,0,64, gImage_num4,gImage_num5,1); //partial display 1 2                         //////////////��x,y��   ----Y----

/*After the partial refresh, you need to use OTP to clean the screen, otherwise the screen of the electronic paper may not be removed.*/
	/******Clear screen after Partial refresh*****/
	EPD_init(); //EPD init
	EPD_full_display_Clear();//EPD Clear
	EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
	delay_s(2); //2s	
	
	/*After the display is completed, wait for about 10 seconds before turning off the power, 
	  otherwise the electronic paper may display abnormally */
		
		
		
		
		
  ///////////////////////////GUI///////////////////////////////////////////////////////////////////////////////////
   //Data initialization settings
    Paint_NewImage(BlackImage, EPD_WIDTH, EPD_HEIGHT, 270, WHITE); //Set screen size and display orientation
    Paint_SelectImage(BlackImage);//Set the virtual canvas data storage location

    /**************Drawing**********************/
		EPD_init(); //EPD init
		Paint_Clear(WHITE);
		//Point   
    Paint_DrawPoint(5, 10, BLACK, DOT_PIXEL_1X1, DOT_STYLE_DFT);
    Paint_DrawPoint(5, 25, BLACK, DOT_PIXEL_2X2, DOT_STYLE_DFT);
    Paint_DrawPoint(5, 40, BLACK, DOT_PIXEL_3X3, DOT_STYLE_DFT);
    Paint_DrawPoint(5, 55, BLACK, DOT_PIXEL_4X4, DOT_STYLE_DFT);
		//Line
    Paint_DrawLine(20, 10, 70, 60, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_1X1);
    Paint_DrawLine(70, 10, 20, 60, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_1X1);
		//Rectangle
    Paint_DrawRectangle(20, 10, 70, 60, BLACK, DRAW_FILL_EMPTY, DOT_PIXEL_1X1);
    Paint_DrawRectangle(85, 10, 130, 60, BLACK, DRAW_FILL_FULL, DOT_PIXEL_1X1);
    //Circle
		Paint_DrawCircle(30, 120, 25, BLACK, DRAW_FILL_EMPTY, DOT_PIXEL_1X1);
    Paint_DrawCircle(100, 120, 25, BLACK, DRAW_FILL_FULL, DOT_PIXEL_1X1);
		EPD_full_display(BlackImage,BlackImage,0); 
		EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
    delay_s(2); //2s		
		
    /***********String***************************/ 
		EPD_init(); //EPD init
		Paint_Clear(WHITE);
    Paint_DrawString_EN(0, 0, "Good Display", &Font8, WHITE, BLACK);  //5*8
		Paint_DrawString_EN(0, 10, "Good Display", &Font12, WHITE, BLACK); //7*12
		Paint_DrawString_EN(0, 25, "Good Display", &Font16, WHITE, BLACK); //11*16
		Paint_DrawString_EN(0, 45, "Good Display", &Font20, WHITE, BLACK); //14*20
		Paint_DrawString_EN(0, 80, "Good Display", &Font24, WHITE, BLACK); //17*24
    EPD_Display(BlackImage); //display image
		EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
    delay_s(2); //2s		
		/*************Number************************/
		EPD_init(); //EPD init
		Paint_Clear(WHITE);
    Paint_DrawNum(0, 0, 123456789, &Font8, WHITE, BLACK);  //5*8
		Paint_DrawNum(0, 10, 123456789, &Font12, WHITE, BLACK); //7*12
		Paint_DrawNum(0, 25, 123456789, &Font16, WHITE, BLACK); //11*16
		Paint_DrawNum(0, 45, 123456789, &Font20, WHITE, BLACK); //14*20
		Paint_DrawNum(0, 70, 123456789, &Font24, WHITE, BLACK); //17*24
    EPD_full_display(BlackImage,BlackImage,0); 
		EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
    delay_s(2); //2s	



		/******Clear screen after Partial refresh*****/
		EPD_init(); //EPD init
		EPD_full_display_Clear();//EPD Clear
		EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
		delay_s(2); //2s	
	  while(1);
	}
}	


