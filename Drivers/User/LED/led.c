
/**
 *!
 * \file       led.c
 * \brief       
 * \version     
 * \date        2019/12/12
 * \author      notrynohigh
 *Last modified by notrynohigh 2019/12/12
 *Copyright (c) 2019 by NOTRYNOHIGH. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "led.h"
/**\defgroup LED_Private_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Private_Defines
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Private_Macros
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Private_Variables
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Private_FunctionPrototypes
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup LED_Private_Functions
 * \{
 */
   
/**
 * \}
 */
   
/**\addtogroup LED_Exported_Functions
 * \{
 */

/**
 * \func         LED_Control
 * \brief        
 * \param        status:
 * \retval       None
 * \note         
 */
void LED_Control(uint8_t status)
{
	if(status == LED_ON)
	{
		LED_1_ON();
	}
	else if(status == LED_OFF)
	{
		LED_1_OFF();
	}
}
/**
 * \}
 */
  
/************************ (C) COPYRIGHT NOTRYNOHIGH *****END OF FILE****/

