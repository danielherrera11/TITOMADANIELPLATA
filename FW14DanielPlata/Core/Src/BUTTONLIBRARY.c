/**
  ******************************************************************************
  * @file     BUTTONLIBRARY.c
  * @author   Daniel Felipe Plata - dplatah@unal.edu.com
  * @date     21/05/2023
  * @brief    Basic button function
  * @version  V1.0
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "LIBRERIALED.h"
#include "BUTTONLIBRARY.h"

/** Functions ----------------------------------------------------------------*/

/**
  ******************************************************************************
  * @brief This function reads if the button has been press to initialize the LED library
  * @param GPIOPORTLED: It is the port name of the LED that has to be called
  * @param GPIOPINLED: It is the Pin name of the LED that has to be called
  * @param GPIOPORTBUTTON: It is the port name of the BUTTON that has to be called
  * @param GPIOPINBUTTON: It is the Pin name of the BUTTON that has to be called
  ******************************************************************************
*/

void BUTTONFUNCTION(GPIO_TypeDef* GPIOPORTBUTTON, GPIO_TypeDef* GPIOPORTLED, uint16_t GPIOPINBUTTON,  uint16_t GPIOPINLED)
{
	if (HAL_GPIO_ReadPin(GPIOPORTBUTTON, GPIOPINBUTTON)==1){
		 LEDFUNCTION(GPIOPORTLED, GPIOPINLED);
	}
}
