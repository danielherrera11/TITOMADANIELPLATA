/**
  ******************************************************************************
  * @file     LIBRERIALED.c
  * @author   Daniel Felipe Plata - dplatah@unal.edu.com
  * @date     21/05/2023
  * @brief    Basic led function
  * @version  V1.0
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "LIBRERIALED.h"

/** Functions ----------------------------------------------------------------*/

/**
  ******************************************************************************
  * @brief This function initialize a LED pattern that toggles the LED with a changing interval
  * @param GPIOPORT: It is the port name that has to be called
  * @param GPIOPIN: It is the Pin name that has to be called
  ******************************************************************************
*/

void LEDFUNCTION(GPIO_TypeDef* GPIOPORT, uint16_t GPIOPIN)
{
	uint32_t speed = 500;
	uint32_t i =1;
	for (i=1; i<=3; ++i){
		HAL_GPIO_TogglePin(GPIOPORT, GPIOPIN);
		HAL_Delay(speed*i);
	}



}
