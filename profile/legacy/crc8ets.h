/**
********************************************************************************************************
Copyright (c) 2015, Realtek Semiconductor Corporation. All rights reserved.
*********************************************************************************************************
* @file       	crc8ets.h
* @brief     	CRC/FCS routines based on ETSI TS 101 369 V6.3.0 (1999-03) /
* 			GSM 07.10 version 6.3.0 Release 1997, B.3.5 Reversed CRC table.
* 			Generator polynomial: x**8 + x**2 + x + 1
*
* @author   	gordon
* @date      	2015-07-13
* @version	v0.1
*/

#if ! defined (__CRC8ETS_H)
#define        __CRC8ETS_H


#if ! defined (__FLAGS_H)
#include <flags.h>
#endif

/*
#if ! defined (__BASETYPE_H)
#include <basetype.h>
#endif
*/
#include <stdint.h>

/** prototypes */

uint8_t crc8EtsGen(uint8_t* p, uint16_t len);
uint8_t crc8EtsCheck(uint8_t* p, uint16_t len, uint8_t rfcs);


#endif /**< ! defined (__CRC8ETS_H) */

