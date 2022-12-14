/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "main.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif



int main(void)
{
	RCC_AHB1ENR_t volatile *const pClkCntlReg = (RCC_AHB1ENR_t *) 0x40023830;
	GPIOx_MODE_t volatile *const pGpioAMode = (GPIOx_MODE_t *) 0x40020000;
	GPIOx_ODR_t volatile *const pGpioAOut = (GPIOx_ODR_t *) 0x40020014;


	//initalize clock on GPIOA
	pClkCntlReg->gpio_a_en=1;
	//making PA1 mode to be output mode
	pGpioAMode->pin_1=1;

	//on and off the odr

	pGpioAOut->pin_1=0;
	pGpioAOut->pin_1=1;
    /* Loop forever */
	for(;;);
}
