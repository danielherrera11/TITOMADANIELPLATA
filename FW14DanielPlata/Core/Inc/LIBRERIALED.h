/**
  ******************************************************************************
  * @file     LIBRERIALED.h
  * @author   Daniel Felipe Plata - dplatah@unal.edu.com
  * @date     21/05/2023
  * @brief    Basic led function
  * @version  V1.0
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

void LEDFUNCTION(GPIO_TypeDef* GPIOPORT, uint16_t GPIOPIN);
