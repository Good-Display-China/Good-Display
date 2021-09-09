

#ifndef EPD2IN13B_H
#define EPD2IN13B_H

#include "epdif.h"

// Display resolution
#define EPD_WIDTH       240
#define EPD_HEIGHT      416

// EPD2IN13B commands
#define PANEL_SETTING                               0x00
#define POWER_SETTING                               0x01
#define POWER_OFF                                   0x02
#define POWER_OFF_SEQUENCE_SETTING                  0x03
#define POWER_ON                                    0x04
#define POWER_ON_MEASURE                            0x05
#define BOOSTER_SOFT_START                          0x06
#define DEEP_SLEEP                                  0x07
#define DATA_START_TRANSMISSION_1                   0x10
#define DATA_STOP                                   0x11
#define DISPLAY_REFRESH                             0x12
#define DATA_START_TRANSMISSION_2                   0x13
#define VCOM_LUT                                    0x20
#define W2W_LUT                                     0x21
#define B2W_LUT                                     0x22
#define W2B_LUT                                     0x23
#define B2B_LUT                                     0x24
#define PLL_CONTROL                                 0x30
#define TEMPERATURE_SENSOR_CALIBRATION              0x40
#define TEMPERATURE_SENSOR_SELECTION                0x41
#define TEMPERATURE_SENSOR_WRITE                    0x42
#define TEMPERATURE_SENSOR_READ                     0x43
#define VCOM_AND_DATA_INTERVAL_SETTING              0x50
#define LOW_POWER_DETECTION                         0x51
#define TCON_SETTING                                0x60
#define RESOLUTION_SETTING                          0x61
#define GET_STATUS                                  0x71
#define AUTO_MEASURE_VCOM                           0x80
#define READ_VCOM_VALUE                             0x81
#define VCM_DC_SETTING                              0x82
#define PARTIAL_WINDOW                              0x90
#define PARTIAL_IN                                  0x91
#define PARTIAL_OUT                                 0x92
#define PROGRAM_MODE                                0xA0
#define ACTIVE_PROGRAM                              0xA1
#define READ_OTP_DATA                               0xA2
#define POWER_SAVING                                0xE3

class Epd : EpdIf {
public:
    int width;
    int height;

    Epd();
    ~Epd();
    int Init(void);
    void SendCommand(unsigned char command);
    void SendData(unsigned char data);
    void WaitUntilIdle(void);
    void Reset(void);
    void DisplayFrame(const unsigned char* frame_buffer_black);
    void Sleep(void);

    void DisplayFrame_4gray(const unsigned char* frame_buffer_black);
    void lut11(void);
    void Init_4gray(void);
    void pic_display_4bit(const unsigned char* frame_buffer_black);




private:
    int reset_pin;
    int dc_pin;
    int cs_pin;
    int busy_pin;
};

#endif /* EPD2IN13B_H */

/* END OF FILE */



