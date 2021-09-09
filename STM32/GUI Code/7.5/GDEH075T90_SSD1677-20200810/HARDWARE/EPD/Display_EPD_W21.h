#ifndef _DISPLAY_EPD_W21_H_
#define _DISPLAY_EPD_W21_H_


#define EPD_WIDTH   880
#define EPD_HEIGHT  528

#define ALLSCREEN_GRAGHBYTES  58080
//EPD
void EPD_W21_Init(void);
void EPD_init(void);
void EPD_init_GUI(void);
void PIC_display(const unsigned char *BW_datas);
void EPD_sleep(void);
void Epaper_READBUSY(void);
void PIC_display_Clear(void);
//Display canvas function
void EPD_Display(unsigned char *BW_Image);

#endif
/***********************************************************
						end file
***********************************************************/


