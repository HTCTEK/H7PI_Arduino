/*
BSD 3-Clause License

Copyright (c) 2020, fuhua-chen
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "board.h"
/********************************************************************************
* 
*  pin map define 
*
********************************************************************************/
//
//
//Pin Mode 
const uint32_t board_PinMode[]=
{
	//input mode
	GPIO_MODE_INPUT,	
	GPIO_MODE_ANALOG,
	GPIO_MODE_INPUT,	
	GPIO_MODE_INPUT,	
	//output mode
  GPIO_MODE_OUTPUT_PP,
	GPIO_MODE_ANALOG,
	GPIO_MODE_OUTPUT_OD,
	GPIO_MODE_OUTPUT_OD,
	GPIO_MODE_OUTPUT_OD,	
};
//
//
//Pin Pull up or Pull down
const uint32_t board_PinPull[]=
{
	//INPUT
	GPIO_NOPULL,	
  GPIO_NOPULL,
	GPIO_PULLUP,
	GPIO_PULLDOWN,
	//OUTPUT
  GPIO_NOPULL,
  GPIO_NOPULL,
  GPIO_NOPULL,
	GPIO_PULLUP,
	GPIO_PULLDOWN,
	
};
//
//
//adc rank position,about adc
//conversion sequence
const uint32_t board_AdcRank[]=
{
	ADC_REGULAR_RANK_1,
	ADC_REGULAR_RANK_2,
	ADC_REGULAR_RANK_3,
	ADC_REGULAR_RANK_4,
	ADC_REGULAR_RANK_5,
	ADC_REGULAR_RANK_6,
	ADC_REGULAR_RANK_7,
	ADC_REGULAR_RANK_8,
	ADC_REGULAR_RANK_9,
	ADC_REGULAR_RANK_10,
	ADC_REGULAR_RANK_11,
	ADC_REGULAR_RANK_12,
	ADC_REGULAR_RANK_13,
	ADC_REGULAR_RANK_14,
	ADC_REGULAR_RANK_15,
	ADC_REGULAR_RANK_16
};
//
//
//Pin and function map
const PinInfo_t board_PinMap[]=
{
    //port-pin-adc-adc_ch-dac-dac_ch-uartx_-i2c-spi-tim
    //D0~D7
    {GPIOE, GPIO_PIN_3,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOE, GPIO_PIN_4,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOE, GPIO_PIN_5,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOE, GPIO_PIN_6,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_13, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_0,  ADC_CHANNEL_10,   DAC_CHANNEL_NONE}, 
    {GPIOA, GPIO_PIN_2,  ADC_CHANNEL_14,   DAC_CHANNEL_NONE}, 
    {GPIOA, GPIO_PIN_3,  ADC_CHANNEL_15,   DAC_CHANNEL_NONE}, 
    //D8~D15
    {GPIOD, GPIO_PIN_10, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOD, GPIO_PIN_13, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOA, GPIO_PIN_8,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOA, GPIO_PIN_13, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOA, GPIO_PIN_14, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOA, GPIO_PIN_15, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_11, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_12, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    //D16~D23
    {GPIOD, GPIO_PIN_2,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOD, GPIO_PIN_3,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOD, GPIO_PIN_6,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOD, GPIO_PIN_7,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOB, GPIO_PIN_5,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOB, GPIO_PIN_9,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOE, GPIO_PIN_0,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOE, GPIO_PIN_1,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    //D24~D26
    {GPIOD, GPIO_PIN_9,  ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_14, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_15, ADC_CHANNEL_NONE, DAC_CHANNEL_NONE}, 
    //A0~A7
    {GPIOA, GPIO_PIN_4,  ADC_CHANNEL_18,   DAC_CHANNEL_1  }, 
    {GPIOA, GPIO_PIN_5,  ADC_CHANNEL_19,   DAC_CHANNEL_2  }, 
    {GPIOA, GPIO_PIN_6,  ADC_CHANNEL_3,    DAC_CHANNEL_NONE}, 
    {GPIOA, GPIO_PIN_7,  ADC_CHANNEL_7,    DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_4,  ADC_CHANNEL_4,    DAC_CHANNEL_NONE}, 
    {GPIOC, GPIO_PIN_5,  ADC_CHANNEL_8,    DAC_CHANNEL_NONE}, 
    {GPIOB, GPIO_PIN_0,  ADC_CHANNEL_9,    DAC_CHANNEL_NONE}, 
    {GPIOB, GPIO_PIN_1,  ADC_CHANNEL_5,    DAC_CHANNEL_NONE}, 
};
/********************************************************************************
* 
* gpio clock enable
*
********************************************************************************/
void board_GpioClockEnable(uint32_t pin)
{
  switch((uint32_t)board_PinMap[pin].gpio)
  {
  case (uint32_t)GPIOA:
    __HAL_RCC_GPIOA_CLK_ENABLE();
    break;
  case (uint32_t)GPIOB:
    __HAL_RCC_GPIOB_CLK_ENABLE();
    break;
  case (uint32_t)GPIOC:
    __HAL_RCC_GPIOC_CLK_ENABLE();
    break;
  case (uint32_t)GPIOD:
    __HAL_RCC_GPIOD_CLK_ENABLE();
    break;
  case (uint32_t)GPIOE:
    __HAL_RCC_GPIOE_CLK_ENABLE();
    break;
  case (uint32_t)GPIOF:
    __HAL_RCC_GPIOF_CLK_ENABLE();
    break;
  case (uint32_t)GPIOG:
    __HAL_RCC_GPIOG_CLK_ENABLE();
    break;
  case (uint32_t)GPIOH:
    __HAL_RCC_GPIOH_CLK_ENABLE();
    break;
  
  default:
    break;
  }
}
/********************************************************************************
* 
* ADC default init
* will be called in board_Init()
*
********************************************************************************/
ADC_HandleTypeDef hadc;
uint32_t          adc_cali_factor = 0;

void board_AdcInit(void)
{	
  ADC_MultiModeTypeDef multimode = {0};
	__HAL_RCC_ADC12_CLK_ENABLE();
	hadc.Instance = BOARD_ADC_HANDLE;
	hadc.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
	hadc.Init.Resolution = ADC_RESOLUTION_16B;
	hadc.Init.ScanConvMode = ADC_SCAN_DISABLE;
	hadc.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
	hadc.Init.LowPowerAutoWait = DISABLE;
	hadc.Init.ContinuousConvMode = DISABLE;
	hadc.Init.NbrOfConversion = 1;
	hadc.Init.DiscontinuousConvMode = DISABLE;
	hadc.Init.NbrOfDiscConversion = 0;
	hadc.Init.ExternalTrigConv = ADC_SOFTWARE_START;
	hadc.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
	hadc.Init.ConversionDataManagement = ADC_CONVERSIONDATA_DR;
	hadc.Init.Overrun = ADC_OVR_DATA_OVERWRITTEN;
	hadc.Init.LeftBitShift = ADC_LEFTBITSHIFT_NONE;
	hadc.Init.OversamplingMode = ENABLE;
  hadc.Init.Oversampling.Ratio = 1023;
  hadc.Init.Oversampling.RightBitShift = ADC_RIGHTBITSHIFT_NONE;
  hadc.Init.Oversampling.TriggeredMode = ADC_TRIGGEREDMODE_SINGLE_TRIGGER;
  hadc.Init.Oversampling.OversamplingStopReset = ADC_REGOVERSAMPLING_CONTINUED_MODE;
	if (HAL_ADC_Init(&hadc) != HAL_OK)
	{
		board_ErrorHandle();
	}
	HAL_ADCEx_Calibration_Start(&hadc,ADC_CALIB_OFFSET,ADC_SINGLE_ENDED);
	adc_cali_factor = HAL_ADCEx_Calibration_GetValue(&hadc,ADC_SINGLE_ENDED);

}
/********************************************************************************
* 
* adc read,
* will be call in arduino api analogRead();
*
********************************************************************************/
uint32_t board_AdcRead(uint32_t pin)
{
	uint32_t counter = 0;
	static __IO uint32_t adcValue = 0;
	ADC_ChannelConfTypeDef sConfig = {0};	
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	//adc channel config
	if(board_PinMap[pin].adc_ch != ADC_CHANNEL_NONE)
	{
		//gpio clk enable
		board_GpioClockEnable(pin);
		//gpio init
		GPIO_InitStruct.Pin = board_PinMap[pin].pin;
		GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		HAL_GPIO_Init(board_PinMap[pin].gpio, &GPIO_InitStruct);
		
		sConfig.Channel = board_PinMap[pin].adc_ch;
		sConfig.Rank = ADC_REGULAR_RANK_1;
		sConfig.SamplingTime = ADC_SAMPLETIME_810CYCLES_5;
		sConfig.SingleDiff = ADC_SINGLE_ENDED;
		sConfig.OffsetNumber = ADC_OFFSET_NONE;
		sConfig.Offset = 0;
		if (HAL_ADC_ConfigChannel(&hadc, &sConfig) != HAL_OK)
		{
			board_ErrorHandle();
		}
		HAL_ADC_Start(&hadc);
		HAL_ADC_PollForConversion(&hadc, 10);
		adcValue = HAL_ADC_GetValue(&hadc);
		return adcValue;
	}
	return 0;
}
/********************************************************************************
* 
* adc read voltage
* will be call in arduino api analogReadVoltage();
*
********************************************************************************/
float board_AdcReadVoltage(uint32_t pin)
{
	uint32_t value = 0;
	float    voltage = 0.0;
	value = board_AdcRead(pin);
	voltage = (float)((((double)value)/1024)*3.24/65535);
	return voltage;
}

/********************************************************************************
* 
* board error handle
*
********************************************************************************/
void board_ErrorHandle(void)
{
	while(1)
	{
	}
}
/********************************************************************************
* 
* board init
*
********************************************************************************/
void board_Init(void)
{
	__enable_irq();
	board_AdcInit();
}

