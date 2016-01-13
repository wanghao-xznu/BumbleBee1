/**
********************************************************************************************************
Copyright (c) 2015, Realtek Semiconductor Corporation. All rights reserved.
*********************************************************************************************************
* @file       Gattsvc_bas.h
* @brief     GATT built-in BAS (Battery Service)
* @details   
*
* @author   	gordon
* @date      	2015-07-09
* @version	v0.1
*/

#ifndef __GATTSVC_BAS_H
#define __GATTSVC_BAS_H


#ifndef __FLAGS_H
//#include <flags.h>
#endif
#ifndef __BASETYPE_H
//#include <rtl_types.h>
#endif
#ifndef __GATT_H
#include <gatt.h>
#endif



#ifdef __cplusplus
extern "C" {
#endif


/** service definition */

extern const TAttribAppl gattSvcBAS[];

extern const int gattSvcBASSize;
extern const int gattSvcBASNbrOfAttrib;

/** BAS Battery Service */
#define GATT_UUID_BATTERY                      0x180F

#define GATT_UUID_CHAR_BAS_LEVEL               0x2A19
/** attribute indices signaled to GATT server application. */
/** do NOT change these values !!!!                        */

#define GATT_SVC_BAS_BATTERY_LEVEL_INDEX    2     /**< battery level value */


#ifdef __cplusplus
}
#endif

#endif  /**< __GATTSVC_BAS_H */
