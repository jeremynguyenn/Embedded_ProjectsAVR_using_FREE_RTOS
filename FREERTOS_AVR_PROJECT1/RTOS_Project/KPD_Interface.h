/*************************************************************/
/*************** Name	: Ahmed Zaky *************************/
/*************** Date	: 13/1/2021  *************************/
/*************** Version: 1.0V 		 *************************/
/*************** SWC	: KEYPAD 	 *************************/
/*************************************************************/

#ifndef KPD_INTERFACE_H
#define KPD_INTERFACE_H

#define KPD_u8_NOT_PRESSED 0xFF

u8 KPD_u8GetSwitch(u8* Copy_Pu8ReturnedSwitch);

#endif