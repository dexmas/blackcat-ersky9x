#ifndef _HAL_
#define _HAL_

#define POWER_GPIO1_Pin GPIO_Pin_11
#define POWER_GPIO1_GPIO_Port GPIOE

#define POWER_ON_Pin GPIO_Pin_12
#define POWER_ON_GPIO GPIOE
#define POWER_ON_PORT PIN_PORTE

#define DC_POWER_Pin GPIO_Pin_2
#define DC_POWER_GPIO GPIOB
#define DC_POWER_PORT PIN_PORTB

// I2C port uses USART3 pins and the I2C2 peripheral
#define I2C_PORT PIN_PORTB
#define I2C_GPIO GPIOB
#define I2C_SCL_Pin GPIO_Pin_10
#define I2C_SDA_Pin GPIO_Pin_11

#define G_LED_Pin GPIO_Pin_2
#define G_LED_GPIO GPIOC
#define G_LED_PORT PIN_PORTC

#define R_LED_Pin GPIO_Pin_1
#define R_LED_GPIO GPIOC
#define R_LED_PORT PIN_PORTC

#define B_LED_Pin GPIO_Pin_0
#define B_LED_GPIO GPIOC
#define B_LED_PORT PIN_PORTC

#define BACKLIGHT_Pin GPIO_Pin_9
#define BACKLIGHT_GPIO GPIOC
#define BACKLIGHT_PORT PIN_PORTC

// LCD_A0 PD7
// LCD_CLK PB3
// LCD_SO PB5
// LCD_CSB PB6
// LCD_RST PB7
// LCD is on SPI3, same as QX7 

#define LCD_NCS_GPIO GPIOB
#define LCD_NCS_PIN GPIO_Pin_6
#define LCD_NCS_PORT PIN_PORTB

#define LCD_A0_GPIO GPIOD
#define LCD_A0_PIN GPIO_Pin_7
#define LCD_A0_PORT PIN_PORTD

#define LCD_RST_GPIO GPIOB
#define LCD_RST_PIN GPIO_Pin_7
#define LCD_RST_PORT PIN_PORTB

#define LCD_MOSI_GPIO GPIOB
#define LCD_MOSI_PIN GPIO_Pin_5
#define LCD_MOSI_PORT PIN_PORTB

#define LCD_CLK_GPIO GPIOB
#define LCD_CLK_PIN GPIO_Pin_3
#define LCD_CLK_PORT PIN_PORTB

// Configure as open drain
#define SW_DET1_GPIO GPIOE
#define SW_DET1_PIN GPIO_Pin_13
#define SW_DET1_PORT PIN_PORTE

#define SW_DET3_GPIO GPIOE
#define SW_DET3_PIN GPIO_Pin_15 
#define SW_DET3_PORT PIN_PORTE

// Encoder
#define ENC_SW_GPIO GPIOC
#define ENC_SW_PIN GPIO_Pin_15
#define ENC_SW_PORT PIN_PORTC
#define ENC_A_GPIO GPIOC
#define ENC_A_PIN GPIO_Pin_13
#define ENC_A_PORT PIN_PORTC
#define ENC_B_GPIO GPIOC
#define ENC_B_PIN GPIO_Pin_14
#define ENC_B_PORT PIN_PORTC
#define GPIOENCODER GPIOC

// Switches
// Input with pullup
//SW1 PE6
#define SW1_GPIO GPIOE
#define SW1_PIN GPIO_Pin_6
#define SW1_PORT PIN_PORTE
//SW2 PE5
#define SW2_GPIO GPIOE
#define SW2_PIN GPIO_Pin_5
#define SW2_PORT PIN_PORTE
//SW3 PE4
#define SW3_GPIO GPIOE
#define SW3_PIN GPIO_Pin_4
#define SW3_PORT PIN_PORTE
//SW4 PE3
#define SW4_GPIO GPIOE
#define SW4_PIN GPIO_Pin_3
#define SW4_PORT PIN_PORTE
//SW5 PE2
#define SW5_GPIO GPIOE
#define SW5_PIN GPIO_Pin_2
#define SW5_PORT PIN_PORTE

//SW7 PE0
#define SW7_GPIO GPIOE
#define SW7_PIN GPIO_Pin_0
#define SW7_PORT PIN_PORTE
//SW8 PD4
#define SW8_GPIO GPIOD
#define SW8_PIN GPIO_Pin_4
#define SW8_PORT PIN_PORTD
//SW9 PD3
#define SW9_GPIO GPIOD
#define SW9_PIN GPIO_Pin_3
#define SW9_PORT PIN_PORTD
//SW10 PB9
#define SW10_GPIO GPIOB
#define SW10_PIN GPIO_Pin_9
#define SW10_PORT PIN_PORTB
//SW11 PD1
#define SW11_GPIO GPIOD
#define SW11_PIN GPIO_Pin_1
#define SW11_PORT PIN_PORTD
//SW12 PD0
#define SW12_GPIO GPIOD
#define SW12_PIN GPIO_Pin_0
#define SW12_PORT PIN_PORTD

// Trims

#define PIN_TRIMLV_DN	SW10_PIN
#define PIN_TRIMLV_UP	SW10_PIN
#define PIN_TRIMRH_DN	SW11_PIN
#define PIN_TRIMRH_UP	SW11_PIN
#define PIN_TRIMLH_UP	SW12_PIN
#define PIN_TRIMRV_UP	SW9_PIN
#define PIN_TRIMRV_DN	SW9_PIN
#define PIN_TRIMLH_DN	SW12_PIN

#define PIN_SW_A_L	SW8_PIN
#define PIN_SW_A_H	SW8_PIN
#define PIN_SW_B_L	SW7_PIN
#define PIN_SW_B_H	SW7_PIN
#define PIN_SW_C_L	SW3_PIN
#define PIN_SW_C_H	SW3_PIN
#define PIN_SW_D_L	SW4_PIN
#define PIN_SW_D_H	SW4_PIN
#define PIN_SW_G		SW5_PIN
#define PIN_SW_H		SW2_PIN


// SDIO
#define SPI_SD_SCK_GPIO		 			GPIOC
#define GPIO_Pin_SPI_SD_SCK			GPIO_Pin_12
#define SPI_SD_SCK_PORT					PIN_PORTC

#define SPI_SD_MISO_GPIO				GPIOD
#define GPIO_Pin_SPI_SD_MISO		GPIO_Pin_2
#define SPI_SD_MISO_PORT				PIN_PORTD

#define SPI_SD_MOSI_GPIO				GPIOC
#define GPIO_Pin_SPI_SD_MOSI		GPIO_Pin_8
#define SPI_SD_MOSI_PORT				PIN_PORTC

// Trainer
#define TRAINER_Pin							GPIO_Pin_11
#define TRAINER_GPIO						GPIOC
#define TRAINER_PORT						PIN_PORTC


#endif
