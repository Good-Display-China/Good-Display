

#include <stdlib.h>
#include "epd2in7.h"

Epd::~Epd() {
};

Epd::Epd() {
    reset_pin = RST_PIN;
    dc_pin = DC_PIN;
    cs_pin = CS_PIN;
    busy_pin = BUSY_PIN;
    width = EPD_WIDTH;
    height = EPD_HEIGHT;
};

int Epd::Init(void) {
    /* this calls the peripheral hardware interface, see epdif */
    if (IfInit() != 0) {
        return -1;
    }
    /* EPD hardware init start */
    Reset();
    SendCommand(POWER_SETTING);
    SendData(0x03);                  // VDS_EN, VDG_EN
    SendData(0x00);                  // VCOM_HV, VGHL_LV[1], VGHL_LV[0]
    SendData(0x2b);                  // VDH
    SendData(0x2b);                  // VDL
    SendData(0x09);                  // VDHR
    SendCommand(BOOSTER_SOFT_START);
    SendData(0x07);
    SendData(0x07);
    SendData(0x17);
    // Power optimization
    SendCommand(0xF8);
    SendData(0x60);
    SendData(0xA5);
    // Power optimization
    SendCommand(0xF8);
    SendData(0x89);
    SendData(0xA5);
    // Power optimization
    SendCommand(0xF8);
    SendData(0x90);
    SendData(0x00);
    // Power optimization
    SendCommand(0xF8);
    SendData(0x93);
    SendData(0x2A);
    // Power optimization
    SendCommand(0xF8);
    SendData(0xA0);
    SendData(0xA5);
    // Power optimization
    SendCommand(0xF8);
    SendData(0xA1);
    SendData(0x00);
    // Power optimization
    SendCommand(0xF8);
    SendData(0x73);
    SendData(0x41);
    SendCommand(PARTIAL_DISPLAY_REFRESH);
    SendData(0x00);
    SendCommand(POWER_ON);
    WaitUntilIdle();

    SendCommand(PANEL_SETTING);
    SendData(0xAF);        //KW-BF   KWR-AF    BWROTP 0f
    SendCommand(PLL_CONTROL);
    SendData(0x3A);       //3A 100HZ   29 150Hz 39 200HZ    31 171HZ
    SendCommand(VCM_DC_SETTING_REGISTER);
    SendData(0x12);
    DelayMs(2);
    SetLut();
    /* EPD hardware init end */

    return 0;
}

/**
 *  @brief: basic function for sending commands
 */
void Epd::SendCommand(unsigned char command) {
    DigitalWrite(dc_pin, LOW);
    SpiTransfer(command);
}

/**
 *  @brief: basic function for sending data
 */
void Epd::SendData(unsigned char data) {
    DigitalWrite(dc_pin, HIGH);
    SpiTransfer(data);
}

/**
 *  @brief: Wait until the busy_pin goes HIGH
 */
void Epd::WaitUntilIdle(void) {
    while(DigitalRead(busy_pin) == 0) {      //0: busy, 1: idle
        DelayMs(100);
    }      
}

/**
 *  @brief: module reset.
 *          often used to awaken the module in deep sleep,
 *          see Epd::Sleep();
 */
void Epd::Reset(void) {
    DigitalWrite(reset_pin, LOW);                //module reset    
    DelayMs(200);
    DigitalWrite(reset_pin, HIGH);
    DelayMs(200);    
}

/**
 *  @brief: set the look-up tables
 */
void Epd::SetLut(void) {
    unsigned int count;     
    SendCommand(LUT_FOR_VCOM);                            //vcom
    for(count = 0; count < 44; count++) {
        SendData(lut_vcom_dc[count]);
    }
    SendCommand(LUT_WHITE_TO_WHITE);                      //ww --
    for(count = 0; count < 42; count++) {
        SendData(lut_ww[count]);
    }   
    SendCommand(LUT_BLACK_TO_WHITE);                      //bw r
    for(count = 0; count < 42; count++) {
        SendData(lut_bw[count]);
    } 
    SendCommand(LUT_WHITE_TO_BLACK);                      //wb w
    for(count = 0; count < 42; count++) {
        SendData(lut_bb[count]);
    } 
    SendCommand(LUT_BLACK_TO_BLACK);                      //bb b
    for(count = 0; count < 42; count++) {
        SendData(lut_wb[count]);
    } 
}

void Epd::DisplayFrame(const unsigned char* frame_buffer) {
    if (frame_buffer != NULL) {
        SendCommand(DATA_START_TRANSMISSION_1);           
        DelayMs(2);
        for(int i = 0; i < EPD_WIDTH  * EPD_HEIGHT / 8; i++) {
            SendData(0xFF);
        }  
        DelayMs(2);                  
        SendCommand(DATA_START_TRANSMISSION_2);
        DelayMs(2);
        for(int i = 0; i < EPD_WIDTH * EPD_HEIGHT / 8; i++) {
            SendData(frame_buffer[i]);  
        }  
        DelayMs(2);
        SendCommand(DISPLAY_REFRESH); 
        WaitUntilIdle();
    }

}

/**
 *  @brief: After this command is transmitted, the chip would enter the 
 *          deep-sleep mode to save power. 
 *          The deep sleep mode would return to standby by hardware reset. 
 *          The only one parameter is a check code, the command would be
 *          executed if check code = 0xA5. 
 *          You can use Reset() to awaken
 */
void Epd::Sleep() {
    SendCommand(POWER_OFF);
    DelayMs(2);
    SendData(0xA5);
}

const unsigned char lut_vcom_dc[] = {
    0x00, 0x00, 
    0x00, 0x0F, 0x0F, 0x00, 0x00, 0x05,      
    0x00, 0x32, 0x32, 0x00, 0x00, 0x02,      
    0x00, 0x0F, 0x0F, 0x00, 0x00, 0x05,      
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,      
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

//R21H
const unsigned char lut_ww[] = {
    0x50, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x60, 0x32, 0x32, 0x00, 0x00, 0x02,
    0xA0, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

//R22H    r
const unsigned char lut_bw[] =
{
    0x50, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x60, 0x32, 0x32, 0x00, 0x00, 0x02,
    0xA0, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

//R24H    b
const unsigned char lut_bb[] =
{
    0xA0, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x60, 0x32, 0x32, 0x00, 0x00, 0x02,
    0x50, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

//R23H    w
const unsigned char lut_wb[] =
{
    0xA0, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x60, 0x32, 0x32, 0x00, 0x00, 0x02,
    0x50, 0x0F, 0x0F, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};



/* END OF FILE */


