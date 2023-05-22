/**
  ******************************************************************************
  * @file     BUTTONLIBRARY.h
  * @author   Daniel Felipe Plata - dplatah@unal.edu.com
  * @date     21/05/2023
  * @brief    Basic button function
  * @version  V1.0
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

void BUTTONFUNCTION(GPIO_TypeDef* GPIOPORTBUTTON, GPIO_TypeDef* GPIOPORTLED, uint16_t GPIOPINBUTTON,  uint16_t GPIOPINLED);
