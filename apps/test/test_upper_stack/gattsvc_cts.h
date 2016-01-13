/**********************************************************************!MA*
*
* $Header: /var/lib/cvs/sw/inc/gattsvc_cts.h,v 1.1.2.1 2013/08/15 08:31:15 mn Exp $
*
* File:        $RCSfile: gattsvc_cts.h,v $
* Version:     $Name: P_SRP1290_V1_0 $
*
* Archive:     $Source: /var/lib/cvs/sw/inc/gattsvc_cts.h,v $
* Revision:    $Revision: 1.1.2.1 $
* Date:        $Date: 2013/08/15 08:31:15 $
* Author:      $Author: mn $
*
* ------------------------------------------------------------------------
* !MODULE      [  ]
* ------------------------------------------------------------------------
* !FILE        [  ]
* !PROGRAM     [  ]
* !VERSION     [$Name: P_SRP1290_V1_0 $]
* !GROUP       [  ]
* !AUTHOR      [$Author: mn $]
* ------------------------------------------------------------------------
*
*          Copyright (c)           2013 Stollmann E+V GmbH
*                                  Mendelssohnstr. 15D
*                                  22761 Hamburg
*                                  Phone: 040/89088-0
 *          The content of this file is Stollmann E+V GmbH confidential
*          All Rights Reserved
*
* ------------------------------------------------------------------------
* !DESCRIPTION
*  GATT built-in CTS (Current Time Service) definitions
*
*
* ------------------------------------------------------------------------
* !INDEX
*  ...
* ------------------------------------------------------------------------
* !CONTENTS
* ------------------------------------------------------------------------
* !INCLUDE_REFERENCES
* ------------------------------------------------------------------------
* !HISTORY
*
**********************************************************************!HE*/

#ifndef __GATTSVC_CTS_H
#define __GATTSVC_CTS_H




#ifndef __GATT_H
#include <gatt.h>
#endif



#ifdef __cplusplus
extern "C" {
#endif


/*---------------------------------------------------------------------------
 * service definition
 *--------------------------------------------------------------------------*/

extern const TAttribAppl gattSvcCTS[];

extern const int gattSvcCTSSize;
extern const int gattSvcCTSNbrOfAttrib;

/* attribute indices signaled to GATT server application. */
/* do NOT change these values !!!!                        */

#define GATT_SVC_CTS_CURRENT_TIME_INDEX      2   /* Current Time value      */
#define GATT_SVC_CTS_LOCAL_TIME_INFO_INDEX   5   /* Local Time Information value     */
#define GATT_SVC_CTS_REF_TIME_INFO_INDEX     7   /* Reference Time Information value */


#ifdef __cplusplus
}
#endif

#endif  /* __GATTSVC_CTS_H */
