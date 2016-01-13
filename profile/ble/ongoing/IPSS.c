enum { __FILE_NUM__ = 0 };

/**
*********************************************************************************************************
*               Copyright(c) 2015, Realtek Semiconductor Corporation. All rights reserved.
**********************************************************************************************************
* @file     IPSS.c
* @brief    Internet Protocol Support Service source file.
* @details  Demonstration of how to implement a self-definition service.
* @author   Vera
* @date     2015-10-30
* @version  v0.1
*********************************************************************************************************
*/
#include "trace.h"
#include <string.h>
#include "FreeRTOS.h"
#include "gatt.h"
#include "IPSS.h"

/********************************************************************************************************
* local static variables defined here, only used in this source file.
********************************************************************************************************/


/**< @brief  profile/service definition.  */
const TAttribAppl IPSS_tbl[] =
{
    /* <<Primary Service>>, .. */
    {
        (ATTRIB_FLAG_VALUE_INCL | ATTRIB_FLAG_LE),  /* wFlags     */
        {                                           /* bTypeValue */
            LO_WORD(GATT_UUID_PRIMARY_SERVICE),
            HI_WORD(GATT_UUID_PRIMARY_SERVICE),
            LO_WORD(GATT_UUID_IPSS),      /* service UUID */
            HI_WORD(GATT_UUID_IPSS)
        },
        UUID_16BIT_SIZE,                            /* bValueLen     */
        NULL,                                       /* pValueContext */
        GATT_PERM_READ                              /* wPermissions  */
    },
       
};


/**
 * @brief IPSS Service Callbacks.
*/
CONST gattServiceCBs_t IPSS_CBs =
{
    NULL,  // Read callback function pointer
    NULL, // Write callback function pointer
    NULL  // CCCD update callback function pointer
};

/**
  * @brief add IPSS service to application.
  *
  * @param[in] pFunc          pointer of app callback function called by profile.
  * @return service ID auto generated by profile layer.
  * @retval ServiceId
  */
uint8_t IPSS_AddService(void* pFunc)
{
    uint8_t ServiceId;
    if (FALSE == ProfileAPI_AddService(&ServiceId,
                                       (uint8_t*)IPSS_tbl,
                                       sizeof(IPSS_tbl),
                                       IPSS_CBs))
    {
        DBG_BUFFER(MODULE_PROFILE, LEVEL_ERROR, "IPSS_AddService: ServiceId %d", 1, ServiceId);
        ServiceId = 0xff;
        return ServiceId;
    }
    //pfnIPSSCB = (pfnAPPHandleInfoCB_t)pFunc;
    return ServiceId;
}

