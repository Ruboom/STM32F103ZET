
/**
 *!
 * \file        key.h
 * \brief       
 * \version     
 * \date        2019/12/13
 * \author      notrynohigh
 * Last modified by notrynohigh 2019/12/13
 * Copyright (c) 2019 by NOTRYNOHIGH. All Rights Reserved.
 */
#ifndef __KEY_H
#define __KEY_H

/*Includes ----------------------------------------------*/
#include "stm32f1xx_hal.h"
#include "main.h"
/**\defgroup key_Exported_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup key_Exported_Defines
 * \{
 */
#define KEY_MODE			1
 
#define KEY_PRESS			0
#define KEY_RELEASE			1
/**
 * \}
 */
   
/**\defgroup key_Exported_Macros
 * \{
 */
#define KEY_READ()				HAL_GPIO_ReadPin(KEY_WKUP_GPIO_Port, KEY_WKUP_Pin)
/**
 * \}
 */
   
/**\defgroup key_Exported_Variables
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup key_Exported_Functions
 * \{
 */
uint8_t KeyReadStatus(void);
/**
 * \}
 */
  
#endif
/************************ (C) COPYRIGHT NOTRYNOHIGH *****END OF FILE****/

