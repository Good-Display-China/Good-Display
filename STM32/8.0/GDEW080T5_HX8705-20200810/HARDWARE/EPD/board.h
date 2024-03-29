#ifndef __BOARD_H
#define __BOARD_H

#include "stm32f10x.h"



#define	DEBUG_USART


//FLASH definition
#define FLASH_PAGE_SIZE			2048			//FLASH��ҳ��С	


//PA port

#define FLASH_CS_PORT			GPIOA			//OUT - PP
#define FLASH_CS_PIN			GPIO_Pin_4

#define LED_03_PORT				GPIOA			//OUT - PP		H:ON
#define LED_03_PIN				GPIO_Pin_8
#define LED_04_PORT				GPIOA			//OUT - PP		H:ON
#define LED_04_PIN				GPIO_Pin_11

#define KEY_02_PORT				GPIOA			//IN - PULLUP
#define KEY_02_PIN				GPIO_Pin_12


//PB port

#define TPS_SCL_PORT			GPIOB			//OUT - OD        yes
#define TPS_SCL_PIN				GPIO_Pin_15
#define TPS_SDA_PORT			GPIOB			//OUT - OD        yes
#define TPS_SDA_PIN				GPIO_Pin_14

#define TPS_PWRUP_PORT			GPIOB			//OUT - PP		H:EN          yes
#define TPS_PWRUP_PIN			GPIO_Pin_12

#define TPS_PWRCOM_PORT			GPIOB			//OUT - PP		H:PWRCOM    yes   ?-?aPB3
#define TPS_PWRCOM_PIN			GPIO_Pin_13


//PC port
#define SYS_WAKEUP_PORT			GPIOC			//OUT - PP		H:EN     SYSWAKEUP   yes   ?-?aPB4
#define SYS_WAKEUP_PIN			GPIO_Pin_6

#define LED_01_PORT				GPIOC			//OUT - PP		H:ON
#define LED_01_PIN				GPIO_Pin_8
#define LED_02_PORT				GPIOC			//OUT - PP		H:ON
#define LED_02_PIN				GPIO_Pin_9

#define KEY_01_PORT				GPIOC		//IN - PULLUP
#define KEY_01_PIN				GPIO_Pin_10

//PD port

#define AVT_HRD_PORT			GPIOD			//OUT - PP		L:EN       yes
#define AVT_HRD_PIN				GPIO_Pin_8

#define AVT_HDC_PORT			GPIOD			//OUT - PP
#define AVT_HDC_PIN				GPIO_Pin_9	

#define AVT_RDY_PORT			GPIOD			//IN - NOPULL   RDY      			yes	
#define AVT_RDY_PIN				GPIO_Pin_10

#define AVT_RST_PORT			GPIOD			//OUT - PP		L:Reset			yes	
#define AVT_RST_PIN				GPIO_Pin_11

#define AVT_HWE_PORT			GPIOD			//OUT - PP		L:EN    yes
#define AVT_HWE_PIN				GPIO_Pin_12

#define AVT_HCS_PORT			GPIOD			//OUT - PP		L:EN    yes   ?-?aPA15
#define AVT_HCS_PIN				GPIO_Pin_13

#define AVT_IRQ_PORT			GPIOD			//IN - NOPULL            yes
#define AVT_IRQ_PIN				GPIO_Pin_14

#define TPS_WAKEUP_PORT			GPIOD			//OUT - PP		H:EN       yes
#define TPS_WAKEUP_PIN			GPIO_Pin_15


//PE port

#define AVT_DAT_PORT			GPIOE			//NC    2��?��
#define AVT_DAT_PIN				0xFFFF

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	               	
#define PORT_A_OUT_PP				FLASH_CS_PIN   
//#define PORT_A_IN_PULLUP		KEY_01_PIN|KEY_02_PIN

#define PORT_B_OUT_PP				TPS_PWRCOM_PIN | TPS_PWRUP_PIN 
#define PORT_B_OUT_OD				TPS_SCL_PIN|TPS_SDA_PIN

//#define PORT_C_OUT_PP				LED_01_PIN | LED_02_PIN | SYS_WAKEUP_PIN
#define PORT_C_OUT_PP				SYS_WAKEUP_PIN

#define PORT_D_OUT_PP				AVT_HCS_PIN | AVT_HDC_PIN | AVT_HRD_PIN | AVT_RST_PIN | AVT_HWE_PIN | TPS_WAKEUP_PIN   
#define PORT_D_IN_NOPULL		AVT_RDY_PIN | AVT_IRQ_PIN

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
#define RCC_GPIO_USE        	RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC | RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOE
#define GPIO_SPEED_EPD      	GPIO_Speed_50MHz

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//Serial port related definition
#define USART1_GPIO         	GPIOA
#define USART1_CLK          	RCC_APB2Periph_USART1
#define USART1_GPIO_CLK     	RCC_APB2Periph_GPIOA
#define USART1_RxPin        	GPIO_Pin_10
#define USART1_TxPin        	GPIO_Pin_9
#define USART1_IRQn         	USART1_IRQn
#define USART1_IRQHandler   	USART1_IRQHandler

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//Control macro definition

#define USB_EN_H          		(USB_EN_PORT->BSRR = USB_EN_PIN)	
#define USB_EN_L          		(USB_EN_PORT->BRR  = USB_EN_PIN)	

#define LED_01_ON          		(LED_01_PORT->BSRR  = LED_01_PIN)		
#define LED_01_OFF          	(LED_01_PORT->BRR = LED_01_PIN)		

#define LED_02_ON          		(LED_02_PORT->BSRR  = LED_02_PIN)		
#define LED_02_OFF          	(LED_02_PORT->BRR = LED_02_PIN)

#define LED_03_ON          		(LED_03_PORT->BSRR  = LED_03_PIN)		
#define LED_03_OFF          	(LED_03_PORT->BRR = LED_03_PIN)		

#define LED_04_ON          		(LED_04_PORT->BSRR  = LED_04_PIN)		
#define LED_04_OFF          	(LED_04_PORT->BRR = LED_04_PIN)

#define FLASH_CS_H          	(FLASH_CS_PORT->BSRR = FLASH_CS_PIN)	
#define FLASH_CS_L          	(FLASH_CS_PORT->BRR  = FLASH_CS_PIN)	


#define KEY_01				(KEY_01_PORT->IDR & KEY_01_PIN)
#define KEY_02				(KEY_02_PORT->IDR & KEY_02_PIN)
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
#define AVT_RST_H			(AVT_RST_PORT->BSRR = AVT_RST_PIN)
#define AVT_RST_L			(AVT_RST_PORT->BRR =  AVT_RST_PIN)

#define AVT_HDC_H			(AVT_HDC_PORT->BSRR = AVT_HDC_PIN)
#define AVT_HDC_L			(AVT_HDC_PORT->BRR =  AVT_HDC_PIN)

#define AVT_HCS_H			(AVT_HCS_PORT->BSRR = AVT_HCS_PIN)
#define AVT_HCS_L			(AVT_HCS_PORT->BRR =  AVT_HCS_PIN)

#define AVT_HWE_H			(AVT_HWE_PORT->BSRR = AVT_HWE_PIN)
#define AVT_HWE_L			(AVT_HWE_PORT->BRR =  AVT_HWE_PIN)

#define AVT_HRD_H			(AVT_HRD_PORT->BSRR = AVT_HRD_PIN)
#define AVT_HRD_L			(AVT_HRD_PORT->BRR =  AVT_HRD_PIN)

#define AVT_RDY				(AVT_RDY_PORT->IDR & AVT_RDY_PIN)
#define AVT_IRQ				(AVT_IRQ_PORT->IDR & AVT_IRQ_PIN)

#define AVT_DAT_IN			(AVT_DAT_PORT->IDR)
#define AVT_DAT_OUT(d)			(AVT_DAT_PORT->ODR = d)
#define AVT_DAT_SETOUT			{AVT_DAT_PORT->CRL = 0x33333333; AVT_DAT_PORT->CRH = 0x33333333;}
#define AVT_DAT_SETIN			{AVT_DAT_PORT->CRL = 0x44444444; AVT_DAT_PORT->CRH = 0x44444444;}


#define TPS_WAKEUP_H			(TPS_WAKEUP_PORT->BSRR = TPS_WAKEUP_PIN)
#define TPS_WAKEUP_L			(TPS_WAKEUP_PORT->BRR =  TPS_WAKEUP_PIN)

#define TPS_PWRCOM_H			(TPS_PWRCOM_PORT->BSRR = TPS_PWRCOM_PIN)
#define TPS_PWRCOM_L			(TPS_PWRCOM_PORT->BRR =  TPS_PWRCOM_PIN)

#define TPS_PWRUP_H			(TPS_PWRUP_PORT->BSRR = TPS_PWRUP_PIN)
#define TPS_PWRUP_L			(TPS_PWRUP_PORT->BRR =  TPS_PWRUP_PIN)

#define TPS_SCL_H			(TPS_SCL_PORT->BSRR = TPS_SCL_PIN)
#define TPS_SCL_L			(TPS_SCL_PORT->BRR =  TPS_SCL_PIN)

#define TPS_SDA_H			(TPS_SDA_PORT->BSRR = TPS_SDA_PIN)
#define TPS_SDA_L			(TPS_SDA_PORT->BRR =  TPS_SDA_PIN)
#define TPS_SDA				(TPS_SDA_PORT->IDR &  TPS_SDA_PIN)


#define SYS_WAKEUP_H			(SYS_WAKEUP_PORT->BSRR = SYS_WAKEUP_PIN)
#define SYS_WAKEUP_L			(SYS_WAKEUP_PORT->BRR =  SYS_WAKEUP_PIN)
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

void Delay(vu32 nCount);
void Delay100ms(unsigned long cnt);
void Delay1ms(unsigned long ms);

#define usb_ctr_on()	{(USB_EN_H);}//Output high level
#define usb_ctr_off()	{(USB_EN_L);} //Output low level


#ifndef DEBUG_USART
#define	GPIO_USART_Init()
#define	Debug_hex(a)
#define	Debug_dec(a)
#define	Debug_str(a)
#else
void Debug_hex(unsigned int dat);
void Debug_dec(unsigned int dat);
void Debug_str(char *s);
void usart_sendbyte(unsigned char s);
void GPIO_USART_Init(void);
#endif


void SYS_Init(void);
void IO_Init(void);

void SPIx_Init(void);


#endif /* __BOARD_H */
