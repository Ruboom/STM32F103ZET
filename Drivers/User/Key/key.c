
/**
 *!
 * \file       key.c
 * \brief       
 * \version     
 * \date        2019/12/13
 * \author      notrynohigh
 *Last modified by notrynohigh 2019/12/13
 *Copyright (c) 2019 by NOTRYNOHIGH. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "key.h"
/**\defgroup key_Private_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup key_Private_Defines
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup key_Private_Macros
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup key_Private_Variables
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup key_Private_FunctionPrototypes
 * \{
 */
   
/**
 * \}
 */
   
/**\defgroup key_Private_Functions
 * \{
 */
   
/**
 * \}
 */
   
/**\addtogroup key_Exported_Functions
 * \{
 */
uint8_t KeyReadStatus(void)
{
#if KEY_MODE < 2
	if(KEY_READ())
	{
		return KEY_RELEASE;
	}
	else
	{
		return KEY_PRESS;
	}
#endif
	return 0;
}
/**
 * \}
 */
  
/************************ (C) COPYRIGHT NOTRYNOHIGH *****END OF FILE****/

