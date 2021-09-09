#include <avr/pgmspace.h>
////////////////array/////////////////////////////////////////////////////////////////////////////////////

//////////////////////Partial refresh number/////////////////////
//Digital presentation
const unsigned char gImage_num1[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xF7,
0xFF,0xDF,0xFF,0xF7,0xFF,0xDF,0xFF,0xF7,0xFF,0xDF,0xFF,0xE7,0xFF,0x80,0x00,0x07,
0xFF,0x00,0x00,0x07,0xFF,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xF7,
0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};

const unsigned char gImage_num2[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xC7,0xFF,0xC1,0xFF,0x87,
0xFF,0x99,0xFF,0x27,0xFF,0x3F,0xFE,0x67,0xFF,0x7F,0xFC,0xE7,0xFF,0x7F,0xF9,0xE7,
0xFF,0x7F,0xF3,0xE7,0xFF,0x7F,0xE7,0xE7,0xFF,0x3F,0xCF,0xE7,0xFF,0x1F,0x1F,0xE7,
0xFF,0x80,0x3F,0xC7,0xFF,0x80,0x7E,0x07,0xFF,0xE0,0xFE,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const unsigned char gImage_num3[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFE,0x1F,0xFF,0x83,0xFE,0x0F,
0xFF,0x83,0xFE,0x0F,0xFF,0x3F,0xFF,0xE7,0xFF,0x7F,0xBF,0xF7,0xFF,0x7F,0xBF,0xF7,
0xFF,0x7F,0xBF,0xF7,0xFF,0x3F,0x1F,0xF7,0xFF,0x1E,0x1F,0xE7,0xFF,0x80,0x4F,0xCF,
0xFF,0x80,0xC0,0x0F,0xFF,0xE1,0xE0,0x1F,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const unsigned char gImage_num4[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xE1,0xFF,
0xFF,0xFF,0x8D,0xFF,0xFF,0xFE,0x1D,0xFF,0xFF,0xFC,0x7D,0xFB,0xFF,0xF0,0xFD,0xFB,
0xFF,0xE3,0xFD,0xFB,0xFF,0x80,0x00,0x03,0xFF,0x00,0x00,0x03,0xFF,0x00,0x00,0x03,
0xFF,0x00,0x00,0x03,0xFF,0xFF,0xFD,0xFB,0xFF,0xFF,0xFD,0xFB,0xFF,0xFF,0xFD,0xFB,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};

const unsigned char gImage_num5[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFF,0xF8,0x1E,0x0F,
0xFF,0x00,0x1E,0x67,0xFF,0x07,0x3F,0xF7,0xFF,0x3E,0x7F,0xF7,0xFF,0x3E,0xFF,0xF7,
0xFF,0x3E,0xFF,0xF7,0xFF,0x3E,0xFF,0xF7,0xFF,0x3E,0x7F,0xE7,0xFF,0x3E,0x3F,0x8F,
0xFF,0x3F,0x00,0x0F,0xFF,0x3F,0x80,0x1F,0xFF,0x3F,0xE0,0x7F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const unsigned char gImage_num6[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0xFF,0xFF,0xF0,0x00,0x3F,
0xFF,0xE0,0x00,0x1F,0xFF,0xC3,0x8F,0x0F,0xFF,0x9F,0x9F,0xC7,0xFF,0x3F,0x3F,0xE7,
0xFF,0x3F,0x7F,0xF7,0xFF,0x7F,0x7F,0xF7,0xFF,0x7F,0x7F,0xF7,0xFF,0x7F,0x3F,0xE7,
0xFF,0x0F,0x1F,0xCF,0xFF,0x8F,0x80,0x0F,0xFF,0xCF,0xC0,0x1F,0xFF,0xFF,0xE0,0x7F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const unsigned char gImage_num7[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,
0xFF,0x0F,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x3F,0xFE,0x07,0xFF,0x3F,0xF0,0x07,
0xFF,0x3F,0x80,0x07,0xFF,0x3E,0x0F,0xFF,0xFF,0x38,0x7F,0xFF,0xFF,0x21,0xFF,0xFF,
0xFF,0x07,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const unsigned char gImage_num8[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x3F,0xFF,0xE1,0xF0,0x1F,0xFF,0xC0,0xE0,0x0F,
0xFF,0x80,0x47,0xCF,0xFF,0x1C,0x0F,0xE7,0xFF,0x3E,0x1F,0xF7,0xFF,0x7F,0x1F,0xF7,
0xFF,0x7F,0x9F,0xF7,0xFF,0x7F,0x8F,0xF7,0xFF,0x3F,0x87,0xE7,0xFF,0x1E,0x03,0xCF,
0xFF,0x80,0x60,0x0F,0xFF,0xC0,0xF0,0x1F,0xFF,0xE1,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const unsigned char gImage_num9[128]PROGMEM = { /* 0X02,0X01,0X20,0X00,0X20,0X00, */
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xC0,0x1F,0x8F,0xFF,0x80,0x0F,0x8F,
0xFF,0x8F,0xC7,0x87,0xFF,0x3F,0xE7,0xF7,0xFF,0x7F,0xF7,0xF7,0xFF,0x7F,0xF7,0xF7,
0xFF,0x7F,0xF7,0xE7,0xFF,0x7F,0xE7,0xC7,0xFF,0x3F,0xCF,0x8F,0xFF,0x8F,0x8C,0x1F,
0xFF,0xC0,0x00,0x3F,0xFF,0xE0,0x00,0x7F,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
//////////////////////////////////////////////////
const unsigned char gImage_basemap[4000] PROGMEM = { /* 0X01,0X01,0XFA,0X00,0X7A,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X03,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X1F,0XFF,0XFF,
0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,
0X07,0XFF,0XFF,0XFF,0XE0,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,
0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XC0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0X80,0X00,0X7F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X0F,0XFF,0XC0,0X7F,0XFF,0X80,0X00,0X7F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFF,0XFC,0X0F,0XFF,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X07,0XFF,0XFF,
0XFF,0X83,0XFF,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
0X1F,0XFF,0XF8,0X00,0XE0,0XFF,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0X3F,0XFF,0XE0,0X00,0X3C,0X7F,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XFF,0XC0,0X00,0X06,0X1F,0X00,0X00,0X07,0XFF,
0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0X00,0X03,0XFF,0XFF,0X00,0X00,0X03,0X8F,0X00,
0X00,0X03,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,0X80,0X07,0XFF,0XFE,0X00,0X00,
0X01,0XC7,0X80,0X00,0X01,0XFF,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0XFF,0X80,0X1F,0XFF,
0XFC,0X00,0X00,0X00,0XE3,0X80,0X00,0X01,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,
0XC0,0X1F,0XFF,0XF8,0X00,0X00,0X00,0X71,0X80,0X00,0X00,0XFF,0XFF,0XE0,0X1F,0XFF,
0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XF0,0X00,0X00,0X00,0X38,0X80,0X00,0X00,0X7F,0XFF,
0XC0,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X3C,0X00,0X00,
0X00,0X7F,0XFF,0XC0,0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,0XE0,0X00,0X00,0X00,
0X1E,0X00,0X00,0X00,0X7C,0X03,0X80,0X1F,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XE0,
0X00,0X00,0X00,0X1F,0X00,0X00,0X00,0X00,0X00,0X80,0X1F,0XFF,0XFF,0XFF,0XFF,0XE1,
0XFF,0XFF,0XC0,0X00,0X00,0X00,0X0F,0X80,0X00,0X00,0X03,0XF8,0X00,0X1F,0XFF,0XFF,
0XFF,0XFF,0XE7,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X0F,0X80,0X00,0X00,0X7F,0XFF,0X80,
0X1F,0XFF,0XFF,0XFF,0XFF,0XC7,0XFF,0XFF,0X80,0X01,0XFC,0X00,0X0F,0XC0,0X00,0X01,
0XFF,0XFF,0XC0,0X1F,0XFF,0XFF,0XFF,0XFF,0XCF,0XFF,0XFF,0X80,0X03,0XFE,0X00,0X0F,
0XE0,0X00,0X0F,0XFF,0XFF,0XC0,0X1F,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,0X80,0X07,
0XFF,0X00,0X0F,0XF0,0X00,0X3F,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,
0XFF,0X80,0X07,0XFF,0X00,0X0F,0XF0,0X00,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,
0XFF,0X1F,0XFF,0XFF,0X80,0X0F,0XFF,0X00,0X0F,0XF8,0X03,0XFF,0XFF,0XFF,0XFC,0X3F,
0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0X80,0X0F,0X8F,0X80,0X0F,0XF8,0X1F,0XFF,0XFF,
0XFF,0XFC,0X3F,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0X80,0X0F,0X07,0X80,0X0F,0XF8,
0XFF,0XFF,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0X80,0X0F,0X07,
0X80,0X0F,0XF8,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,
0XC0,0X0F,0X8F,0X80,0X0F,0XFC,0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFC,
0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0X80,0X0F,0XFC,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,
0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0X00,0X0F,0XFC,0X7F,0XFF,0XFF,0XFF,
0XFF,0X3F,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XE0,0X03,0XFE,0X00,0X1F,0XFE,0X7F,
0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XE0,0X01,0XFE,0X00,
0X1F,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X3F,0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0XF9,0XFF,
0XFF,0XFF,0XF0,0X00,0X00,0X00,0X3F,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,
0XFF,0XF9,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X7F,0XFF,0X00,0X7F,0XFF,0XFF,0XFF,
0X9F,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0XFF,0XFF,0X1C,0X1F,
0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X01,0XFF,
0XFF,0X3F,0X0F,0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,0XFF,0XFF,0X00,
0X00,0X03,0XFF,0XFF,0X3F,0X8F,0XFE,0X01,0XFF,0X9F,0XFF,0XFF,0XFF,0XF9,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X07,0XFF,0XFF,0X3F,0XCF,0XFE,0XFD,0XFF,0X9F,0XFF,0XFF,0XFF,
0XF1,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X1F,0XFF,0XFF,0X3F,0XCF,0XFE,0XFD,0XFF,0X9F,
0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X7F,0XFF,0XFF,0X3F,0XCE,0X1E,
0XFD,0XFF,0X9F,0XFF,0XFF,0XFF,0XE1,0XFF,0XFF,0XF0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0X3F,0X8D,0XEF,0X7B,0XFF,0X9F,0XFF,0XFF,0XFF,0X81,0XFF,0XFF,0XC0,0X00,0X00,0X7F,
0XFF,0XFF,0XFF,0X3F,0X9B,0XF7,0X87,0XFF,0X9F,0XFF,0XFF,0XFF,0X01,0XFF,0XFF,0X80,
0X00,0X00,0X3F,0X03,0XFF,0XFF,0X07,0X1B,0XF7,0XFF,0XFF,0X9F,0XFF,0XFF,0XFC,0X01,
0XFF,0XFF,0X00,0X00,0X00,0X3F,0X01,0XFF,0XFF,0X06,0X3B,0XB6,0X81,0XFF,0X9F,0XFF,
0XFF,0XFC,0X01,0XFF,0XFE,0X00,0X00,0X00,0X1E,0X41,0XFF,0XFE,0X02,0X7D,0XAF,0XFF,
0XFF,0X9F,0XFF,0XFF,0XF8,0X01,0XFF,0XFE,0X00,0X00,0X00,0X0E,0XC0,0XFF,0XFE,0X30,
0X7E,0X9F,0XDB,0XFF,0X9F,0XFF,0XFF,0XF0,0X01,0XFF,0XFC,0X00,0X00,0X00,0X06,0X40,
0XFF,0XFE,0X38,0XFF,0XFF,0XAD,0XFF,0X9F,0XFF,0XFF,0XF0,0X00,0XFF,0XFC,0X00,0X00,
0X00,0X06,0X01,0XFF,0XFE,0X7C,0XFF,0X0F,0XAD,0XFF,0X9F,0XFF,0XFF,0XE0,0X00,0XFF,
0XF8,0X00,0X00,0X00,0X03,0X01,0XFF,0XFE,0X7C,0XFE,0XF7,0XB5,0XFF,0X9F,0XFF,0XFF,
0XE0,0X00,0XFF,0XF8,0X00,0X0F,0XE0,0X03,0X01,0X8F,0XFC,0X7C,0XFE,0XF7,0XDB,0XFF,
0X9F,0XFF,0XFF,0XC0,0X00,0XFF,0XF0,0X00,0X1F,0XF8,0X01,0XCF,0X8F,0XFC,0XFC,0XFE,
0XF7,0XFF,0XFF,0X9F,0XFF,0XFF,0XC0,0X00,0X7F,0XF0,0X00,0X3F,0XF8,0X01,0XFF,0XFF,
0XFC,0XF8,0XFF,0X0F,0X80,0X7F,0X9F,0XFF,0XFF,0XC0,0X00,0X7F,0XF0,0X00,0X7F,0XFC,
0X01,0XFF,0XFF,0XF8,0X79,0XFF,0XFF,0XDB,0XFF,0X9F,0XFF,0XFF,0X80,0X00,0X3F,0XF0,
0X00,0X7C,0X7C,0X01,0XFF,0XFF,0XF8,0X01,0XFF,0X0F,0XBD,0XFF,0X9F,0XFF,0XFF,0X80,
0X00,0X3F,0XF0,0X00,0X78,0X3C,0X01,0XFF,0XFF,0XF1,0X01,0XFE,0XF7,0XBD,0XFF,0X9F,
0XFF,0XFF,0X80,0X00,0X3F,0XF0,0X00,0X78,0X3C,0X01,0XFF,0XFF,0XF1,0XF8,0XFE,0XF7,
0XC3,0XFF,0X9F,0XFF,0XFF,0X80,0X00,0X1F,0XF0,0X00,0X7C,0X7C,0X01,0XFF,0XFF,0XF1,
0XF8,0XFE,0XF7,0XFF,0XFF,0X9F,0XFF,0XFF,0X80,0X00,0X0F,0XF0,0X00,0X7F,0XFC,0X01,
0XFF,0XFF,0XE7,0XFC,0XFF,0X0E,0X01,0XFF,0X9F,0XFF,0XFF,0X80,0X00,0X0F,0XF0,0X00,
0X7F,0XFC,0X01,0XFF,0XFF,0XC7,0XFC,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFF,0XC0,0X00,
0X07,0XF8,0X00,0X3F,0XF8,0X01,0XFF,0XFF,0XC7,0XFC,0XFF,0X0F,0XD3,0XFF,0X3F,0XFF,
0XFF,0XC0,0X00,0X03,0XF0,0X00,0X1F,0XF0,0X01,0XFF,0XFF,0X8F,0XFC,0XFE,0XF7,0XAD,
0XFF,0X3F,0XFF,0XFF,0XC0,0X00,0X03,0XF8,0X00,0X07,0XE0,0X03,0XFF,0XFF,0X07,0XF8,
0XFE,0XF7,0XAD,0XFF,0X3F,0XFF,0XFF,0XE0,0X00,0X01,0XF8,0X00,0X00,0X00,0X03,0XFF,
0XFF,0X03,0XF1,0XFF,0X6F,0XAB,0XFF,0X3F,0XFF,0XFF,0XE0,0X00,0X00,0XFC,0X00,0X00,
0X00,0X07,0XFF,0XFE,0X60,0X41,0XF8,0X07,0XC1,0XFF,0X3F,0XFF,0XFF,0XE0,0X00,0X00,
0X7E,0X00,0X00,0X00,0X0F,0XFF,0XFC,0X70,0X03,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,
0XF0,0X00,0X00,0X7E,0X00,0X00,0X00,0X0F,0XFF,0XF8,0XFE,0X1F,0XFF,0XFF,0X9F,0XFF,
0X3F,0XFF,0XFF,0XF8,0X00,0X00,0X1F,0X00,0X00,0X00,0X1F,0XFF,0XF1,0XFF,0XFF,0XFF,
0XFF,0XE7,0X7F,0X3F,0XFF,0XFF,0XF8,0X00,0X00,0X0F,0X80,0X00,0X00,0X3F,0XFF,0XC0,
0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0X3F,0XFF,0XFF,0XFC,0X00,0X00,0X07,0X80,0X00,0X00,
0X3F,0XFF,0XC0,0XFF,0XFF,0XFF,0XFF,0XE7,0XFF,0X3F,0XFF,0XFF,0XFE,0X00,0X00,0X03,
0XE0,0X00,0X00,0XFF,0XFF,0X00,0X7F,0XFF,0XFF,0XFF,0X9F,0XFE,0X1F,0XFF,0XFF,0XFF,
0X80,0X00,0X00,0XF0,0X00,0X01,0XFF,0XFE,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFE,0X1F,
0XFF,0XFF,0XFF,0XC0,0X00,0X0C,0X3C,0X00,0X03,0XFF,0XF8,0X00,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFE,0X1F,0XFF,0XFF,0XFF,0XF0,0X00,0X3E,0X0F,0X80,0X1F,0XFF,0XF1,0X00,0X0F,
0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFF,0X01,0XFF,0X83,0XFF,0XFF,0XFF,
0X83,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
0X7F,0XFF,0XFF,0X06,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X0F,0XFF,0XF8,0X3E,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFC,0X0F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XF8,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X03,0XFE,0X00,0X00,0X7F,
0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XE0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XC0,0X07,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0XFF,0XFF,0XFF,0X80,
0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X1F,
0XFF,0XFF,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X03,0X07,0XFF,0XFC,0X20,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X07,0XC0,0X7F,0XF0,0X60,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X07,0XF0,0X00,0X01,0XF0,0X07,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X0F,0XFF,0X80,0X07,0XF0,0X07,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X1F,0XFF,0XFF,
0XFF,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XF8,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFE,0X07,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
0XFF,0X87,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X07,0XFF,
0XFF,0XFF,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X8F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};
const unsigned char gImage_1[2888] PROGMEM = { /* 0X01,0X01,0X98,0X00,0X98,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0XFF,0XE0,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0XFF,0X9F,0XE7,
0XFF,0XF0,0X07,0XFF,0X00,0XFF,0XE0,0X3F,0XF8,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,
0X7F,0X80,0X07,0XFF,0XF0,0X07,0XFF,0X00,0XCC,0X60,0X3F,0XF8,0X00,0XFF,0XFF,0XFF,
0XFF,0XFF,0X00,0X3F,0X80,0X07,0XFF,0XF0,0X00,0X00,0X00,0XCC,0X60,0X3F,0XFF,0XFE,
0XFF,0XFF,0XBF,0XFF,0XFE,0X1E,0X1F,0X80,0X07,0XFF,0XF0,0X00,0X00,0X00,0XCC,0X60,
0X3F,0XFF,0XFE,0XFF,0XFF,0XBF,0XFF,0XFE,0X3F,0X1F,0X9F,0XE7,0XFF,0XF0,0X00,0X00,
0X00,0XEC,0X60,0X3F,0XFF,0XFE,0XFF,0XFF,0XBF,0XFF,0XFE,0X7F,0X9F,0X9F,0XE7,0XFF,
0XF0,0X00,0X00,0X00,0XE0,0XE0,0X3F,0XFF,0XFE,0XFF,0XFF,0XBF,0XFF,0XFE,0X7F,0X9F,
0X9F,0XE7,0XFF,0XF0,0X00,0X00,0X00,0X00,0XC0,0X3F,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFE,0X7F,0X9F,0X8F,0XC7,0XFF,0XF0,0X00,0X07,0X00,0X00,0X00,0X3F,0XFF,0XFE,0XFF,
0XF7,0XF7,0XFF,0XFE,0X30,0X1F,0X87,0X87,0XFF,0XF0,0X00,0X07,0X00,0X03,0X00,0X3F,
0XFF,0XFF,0XFF,0XE7,0XE7,0XFF,0XFE,0X10,0X1F,0XC0,0X0F,0XFF,0XF0,0X00,0X07,0X00,
0X03,0X00,0X3F,0XFF,0X81,0XFF,0XEF,0XC7,0XFF,0XFE,0X10,0X3F,0XE0,0X1F,0XFF,0XF0,
0X00,0X00,0X00,0X03,0X00,0X3F,0XFF,0X00,0XFF,0XEF,0X97,0XFF,0XFF,0XFF,0XFF,0XF0,
0X3F,0XFF,0XF0,0X00,0X00,0X00,0X03,0X00,0X3F,0XFF,0X7E,0XFF,0XEF,0X37,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0XC7,0X00,0X00,0X00,0X3F,0XFF,0X7E,0XFF,0XE0,
0X77,0XFF,0XFF,0XF0,0X7F,0XFF,0XFF,0XFF,0XF0,0X03,0XC7,0X00,0X00,0X00,0X3F,0XFF,
0X7E,0XFF,0XF0,0XF7,0XFF,0XFF,0XE0,0X3F,0X10,0X07,0XFF,0XF0,0X07,0XC3,0X00,0X00,
0X00,0X3F,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X1F,0X10,0X07,0XFF,0XF0,0X06,
0XE3,0X00,0XFF,0XE0,0X3F,0XFF,0X81,0XFF,0XFC,0X6F,0XFF,0XFF,0XCF,0X1F,0X10,0X07,
0XFF,0XF0,0X06,0XF7,0X00,0XFF,0XE0,0X3F,0XFF,0XFF,0XFF,0XE0,0X67,0XFF,0XFF,0XC7,
0X9F,0XFF,0XFF,0XFF,0XF0,0X06,0X7E,0X00,0XC6,0X00,0X3F,0XFF,0X3F,0XFF,0XE2,0XF7,
0XFF,0XFF,0XC0,0X1F,0XFF,0XFF,0XFF,0XF0,0X06,0X3C,0X00,0XEE,0X00,0X3F,0XFF,0X03,
0XFF,0XEE,0XF7,0XFF,0XFF,0XE0,0X3F,0XF8,0X47,0XFF,0XF0,0X00,0X00,0X00,0XFE,0X00,
0X3F,0XFF,0XC0,0XFF,0XEE,0XF7,0XFF,0XFF,0XF0,0X7F,0XF0,0X47,0XFF,0XF0,0X00,0X38,
0X00,0X7C,0X00,0X3F,0XFF,0XF0,0XFF,0XEE,0X07,0XFF,0XFF,0XFF,0XFF,0XF2,0X27,0XFF,
0XF0,0X00,0X78,0X00,0X00,0X00,0X3F,0XFF,0X83,0XFF,0XEF,0X0F,0XFF,0XFF,0XF0,0X7F,
0XF2,0X27,0XFF,0XF0,0X00,0XF8,0X00,0X00,0X00,0X3F,0XFF,0X0F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE0,0X3F,0XF3,0X07,0XFF,0XF0,0X01,0XD8,0X00,0X00,0X00,0X3F,0XFF,0X0F,0XFF,
0XFF,0X7F,0XFF,0XFF,0XC0,0X1F,0XFF,0X0F,0XFF,0XF0,0X03,0X98,0X00,0X1D,0XE0,0X3F,
0XFF,0X83,0XFF,0XFE,0X7F,0XFF,0XFF,0XCF,0X1F,0XFF,0XFF,0XFF,0XF0,0X07,0XFF,0X00,
0X19,0X60,0X3F,0XFF,0XF0,0XFF,0XFE,0XFF,0XFF,0XFF,0XC7,0X9F,0XFF,0XFF,0XFF,0XF0,
0X07,0XFF,0X00,0X1B,0X60,0X3F,0XFF,0XC0,0XFF,0XFE,0X7F,0XFF,0XFF,0XC0,0X1F,0XF0,
0X00,0X7F,0XF0,0X00,0X18,0X00,0X1F,0XE0,0X3F,0XFF,0X03,0XFF,0XFE,0X7F,0XFF,0XFF,
0XE0,0X3F,0XF0,0X00,0X7F,0XF0,0X00,0X00,0X00,0X1F,0XE0,0X3F,0XFF,0X3F,0XFF,0XFF,
0X7F,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X7F,0XF0,0X00,0X00,0X00,0X00,0X60,0X3F,0XFF,
0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XF1,0XE7,0XFF,0XF0,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XF0,0X7F,0XF1,0XE7,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X1F,0XF0,0X07,
0XFF,0XF0,0X00,0X00,0X00,0X1F,0XFC,0X3F,0XFF,0XFF,0XFF,0XFC,0X6F,0XFF,0XFF,0XC0,
0X1F,0XF0,0X0F,0XFF,0XF0,0X00,0X00,0X00,0X1F,0XFC,0X3F,0XFF,0XFF,0XFF,0XE0,0X67,
0XFF,0XFF,0XC7,0X1F,0XF8,0X1F,0XFF,0XF0,0X00,0X00,0X00,0X1C,0X60,0X3F,0XFB,0XFF,
0XFF,0XE2,0XF7,0XFF,0XFF,0XCF,0X9F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X18,0X60,
0X3F,0XFB,0XFF,0XFF,0XEE,0XF7,0XFF,0XFC,0X00,0X1F,0XFF,0XFF,0XFF,0XF0,0X0E,0XFF,
0X00,0X1C,0XE0,0X3F,0XFB,0XFF,0XFF,0XEE,0XF7,0XFF,0XFC,0X00,0X1F,0X00,0X07,0XFF,
0XF0,0X0E,0XFF,0X00,0X1F,0XC0,0X3F,0XFB,0XFF,0XFF,0XEE,0X07,0XFF,0XFC,0X00,0X1F,
0X00,0X07,0XFF,0XF0,0X00,0X00,0X00,0X0F,0X80,0X3F,0XF8,0X00,0XFF,0XEF,0X0F,0XFF,
0XFF,0XFF,0XFF,0X00,0X07,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XF8,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XFF,0X00,0X00,0X00,0X3F,
0XFB,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XFF,0X00,
0X0F,0XC0,0X3F,0XFB,0XFF,0XFF,0XE0,0X07,0XFF,0XFF,0XFF,0XFF,0XF8,0X87,0XFF,0XF0,
0X00,0XE0,0X00,0X1F,0XE0,0X3F,0XFB,0XFF,0XFF,0XEF,0XF7,0XFF,0XFF,0XFF,0XFF,0XF1,
0X07,0XFF,0XF0,0X00,0XC0,0X00,0X1A,0XE0,0X3F,0XFB,0XFF,0XFF,0XEF,0XF7,0XFF,0XFF,
0XFF,0XFF,0XF3,0X27,0XFF,0XF0,0X00,0XFF,0X00,0X1A,0X60,0X3F,0XFF,0XFF,0XFF,0XEF,
0XF7,0XFF,0XFF,0XFF,0XFF,0XF3,0X27,0XFF,0XF0,0X00,0X7F,0X00,0X1E,0XE0,0X3F,0XFF,
0X81,0XFF,0XE0,0X07,0XFF,0XFF,0XFF,0XFF,0XF0,0X07,0XFF,0XF0,0X00,0X00,0X00,0X0E,
0XC0,0X3F,0XFF,0X00,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFF,0XF0,0X07,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X3F,0XFF,0X6E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X07,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X6E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE7,0XFF,0XF0,0X00,0X7E,0X00,0X1F,0XE0,0X3F,0XFF,0X6E,0XFF,0XEF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XFF,0X00,0X0F,0XE0,0X3F,0XFF,0X0C,
0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFC,0X7F,0XF0,0X00,0XE7,0X00,0X1C,0X00,
0X3F,0XFF,0X8D,0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7C,0X7F,0XF0,0X00,0XC3,
0X00,0X18,0X00,0X3F,0XFF,0XFF,0XFF,0XE8,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X18,0X7F,
0XF0,0X00,0XE7,0X00,0X18,0X00,0X3F,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0XFF,0XF0,0X00,0X66,0X00,0X00,0X00,0X3F,0XFF,0X00,0XFF,0XE7,0XCF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X03,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X00,0XFF,
0XEF,0XEF,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,
0XFF,0X3F,0XFF,0XEF,0XEF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,0XF0,0X0F,0XFF,0X00,
0X00,0X00,0X3F,0XFF,0X7F,0XFF,0XE7,0XEF,0XFF,0XFF,0XFF,0XFF,0XF3,0XFF,0XFF,0XF0,
0X0F,0XFF,0X00,0X00,0X00,0X3F,0XFF,0X7F,0XFF,0XE3,0XCF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0XE0,0X00,0X00,0X00,0X3F,0XFF,0X00,0XFF,0XE3,0X9F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XC0,0X00,0X00,0X00,0X3F,0XFF,0X80,0XFF,0XFF,
0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XFF,0X00,0X00,0X00,0X3F,0XFF,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X7F,0X00,0X00,
0X00,0X3F,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X00,0X00,0X00,0X00,0X3F,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X80,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X00,0X00,0X3F,0XFF,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X3C,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X7E,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X30,0X80,0X00,0X00,0X3F,
0XFF,0X7E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X78,0XC0,
0X00,0X00,0X3F,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0XCC,0X60,0X00,0X00,0X3F,0XFF,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X01,0XFF,0XF0,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X01,0XFF,0XF0,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XC6,0X60,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0XE3,0XC0,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
0X61,0X80,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X00,0X03,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X00,0X03,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XF8,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0XFF,0XC0,0X00,
0X3F,0XF8,0X00,0XFF,0X00,0X03,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X7F,0XF0,0X00,0X07,
0XFF,0XF0,0X00,0X3F,0XFB,0XDF,0XFF,0X00,0X03,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X7F,
0XF0,0X00,0X0F,0XFF,0XF8,0X00,0X3F,0XFB,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,
0X00,0X00,0X7F,0XF0,0X00,0X1F,0XBC,0X7C,0X00,0X3F,0XFB,0XDF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X00,0X7F,0XF0,0X00,0X1E,0X78,0X1E,0X00,0X3F,0XFB,0XCF,0XFF,
0X00,0X03,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X7F,0XF0,0X00,0X3C,0X70,0X0E,0X00,0X3F,
0XFB,0XC3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X38,0X70,
0X0E,0X00,0X3F,0XFB,0XD1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,
0X00,0X38,0X70,0X0E,0X00,0X3F,0XF8,0X1C,0XFF,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF0,0X7F,0XF0,0X00,0X38,0X70,0X0E,0X00,0X3F,0XFC,0X3E,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X3C,0X78,0X1E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X3E,0X3C,0X3C,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X7F,0XF0,0X00,0X1F,0X3F,0XFC,
0X00,0X3F,0XFF,0XB9,0XFF,0X00,0X03,0XFF,0XFF,0X80,0X00,0X01,0XF0,0X7F,0XF0,0X00,
0X0F,0X1F,0XF8,0X00,0X3F,0XFF,0X30,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X01,0XF0,
0X7F,0XF0,0X00,0X07,0X07,0XE0,0X00,0X3F,0XFF,0X66,0XFF,0X00,0X03,0XFF,0XFF,0X80,
0X00,0X01,0XF0,0X7F,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X6E,0XFF,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X01,0XF0,0X7F,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X6C,
0XFF,0X00,0X03,0XFF,0XFF,0X80,0X00,0X01,0XF0,0X7F,0XF0,0X00,0X00,0X00,0X00,0X00,
0X3F,0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0XFF,0XC1,0XF0,0X7F,0XF0,0X00,0X00,
0X00,0X0E,0X00,0X3F,0XFF,0X80,0XFF,0X00,0X03,0XFF,0XFF,0X81,0XFF,0XC1,0XF0,0X7F,
0XF0,0X00,0X00,0X00,0X0E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0XFF,
0XC1,0XF0,0X7F,0XF0,0X00,0X00,0X00,0X0E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X81,0XFF,0XC1,0XF0,0X7F,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X00,0XFF,
0XFF,0XFF,0XFF,0XFF,0X81,0XFF,0XC1,0XF0,0X7F,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,
0XFF,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0XFF,0XC1,0XF0,0X7F,0XF0,0X00,0X00,0X00,
0X00,0X00,0X3F,0XFF,0X3F,0XFF,0X00,0X03,0XFF,0XFF,0X81,0XFF,0XC1,0XF0,0X7F,0XF0,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0XFF,0XC1,
0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0X81,0XFF,0XC1,0XFF,0XFF,0XF0,0X00,0X07,0X00,0X0E,0X00,0X3F,0XFF,0X00,0XFF,0XFF,
0XFF,0XFF,0XFF,0X81,0XFF,0XC1,0XFF,0XFF,0XF0,0X00,0X0F,0X00,0X1E,0X00,0X3F,0XFF,
0X80,0XFF,0X00,0X03,0XFF,0XFF,0X81,0XFF,0XC1,0XFF,0XFF,0XF0,0X00,0X1F,0X00,0X3E,
0X00,0X3F,0XFF,0XFF,0XFF,0X00,0X03,0XFF,0XFF,0X81,0XFF,0XC1,0XFF,0XFF,0XF0,0X00,
0X3C,0X00,0X7E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XF0,
0X7F,0XF0,0X00,0X3C,0X00,0XFE,0X00,0X3F,0XFF,0X81,0XBF,0X00,0X03,0XFF,0XFF,0XFF,
0X83,0XFF,0XF0,0X7F,0XF0,0X00,0X38,0X01,0XEE,0X00,0X3F,0XFF,0X00,0X9F,0X00,0X03,
0XFF,0XFF,0XFF,0X83,0XFF,0XF0,0X7F,0XF0,0X00,0X38,0X03,0XCE,0X00,0X3F,0XFF,0X7E,
0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XF0,0X7F,0XF0,0X00,0X38,0X07,0X8E,0X00,
0X3F,0XFF,0X7E,0XDF,0X00,0X03,0XFF,0XFF,0XFF,0X83,0XFF,0XF0,0X7F,0XF0,0X00,0X3C,
0X0F,0X0E,0X00,0X3F,0XFF,0X3C,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XF0,0X7F,
0XF0,0X00,0X3E,0X3E,0X0E,0X00,0X3F,0XFF,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,
0XFF,0XF0,0X7F,0XF0,0X00,0X1F,0XFC,0X0E,0X00,0X3F,0XFF,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0X83,0XFF,0XF0,0X7F,0XF0,0X00,0X0F,0XF8,0X0E,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XF0,0X7F,0XF0,0X00,0X07,0XE0,0X0E,0X00,0X3F,
0XFF,0XFF,0XFF,0X00,0X03,0XFF,0XFF,0XFF,0X83,0XFF,0XF0,0X7F,0XF0,0X00,0X00,0X00,
0X00,0X00,0X3F,0XFF,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X83,0XFF,0XF0,0X7F,0XF0,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X00,0XFF,0X00,0X03,0XFF,0XFF,0XFF,0X80,0X00,
0X00,0X7F,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0X6E,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X80,0X00,0X00,0X7F,0XF0,0X00,0X00,0X78,0X70,0X00,0X3F,0XFF,0X6E,0XFF,0X00,
0X03,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X7F,0XF0,0X00,0X0F,0XF8,0X78,0X00,0X3F,0XFF,
0X6E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X7F,0XF0,0X00,0X3F,0XF8,0X7C,
0X00,0X3F,0XFF,0X0C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X7F,0XF0,0X00,
0X3F,0XF0,0X3E,0X00,0X3F,0XFF,0X8D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X7F,0XF0,0X00,0X3C,0XF0,0X1E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X38,0XE0,0X0E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X38,0XE0,0X0E,0X00,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X38,0XE0,0X0E,0X00,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X38,
0XE0,0X0E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF0,0X00,0X38,0XF0,0X1E,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X38,0X78,0X3C,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X38,0X7F,0XFC,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X38,0X3F,0XF8,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X0F,
0XE0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};





/////////////////////////////////////////////////////////////////////////////////
