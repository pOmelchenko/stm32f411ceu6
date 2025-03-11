/**
 ******************************************************************************
 * @file    ts3510.h
 * @author  Pavel Omelchenko
 * @brief   This file contains specific configuration for the
 *          ts3510.c that can be modified by user.
 ******************************************************************************
 * @attention
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef XPT2046_H
#define XPT2046_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "xpt2046_reg.h"
#include <stddef.h>
#include "xpt2046_conf.h"

/* Macros --------------------------------------------------------------------*/

/** @addtogroup BSP
 * @{
 */

/** @addtogroup Component
 * @{
 */

/** @addtogroup XPT2046
 * @{
 */

/** @addtogroup XPT2046_Exported_Constants
 * @{
 */
#define XPT2046_OK                      (0)
#define XPT2046_ERROR                   (-1)

/* Max detectable simultaneous touches */
#define XPT2046_MAX_NB_TOUCH            1U

/* Touch XPT2046 IDs */
#define XPT2046_ID                      0x2046U

#define XPT2046_READ_CMD                0x81U
#define XPT2046_WRITE_CMD               0x08U
/**
 * @}
 */

/** @defgroup XPT2046_Exported_Types XPT2046 Exported Types
 * @{
 */

typedef struct
{

}XPT2046_Gesture_Init_t;

typedef int32_t (*XPT2046_Init_Func)    (void);
typedef int32_t (*XPT2046_DeInit_Func)  (void);
typedef int32_t (*XPT2046_GetTick_Func) (void);
typedef int32_t (*XPT2046_Delay_Func)   (uint32_t);
typedef int32_t (*XPT2046_WriteReg_Func)(uint16_t, uint16_t, uint8_t*, uint16_t);
typedef int32_t (*XPT2046_ReadReg_Func) (uint16_t, uint16_t, uint8_t*, uint16_t);

typedef struct
{

}XPT2046_IO_t;

typedef struct
{

}XPT2046_State_t;

typedef struct
{

}XPT2046_Object_t;

typedef struct
{

}XPT2046_TS_Drv_t;
/**
 * @}
 */

/** @addtogroup XPT2046_Exported_Variables
  * @{
  */
extern XPT2046_TS_Drv_t XPT2046_TS_Driver;
/**
 * @}
 */

/** @addtogroup XPT2046_Exported_Functions
 * @{
 */
int32_t XPT2046_RegisterBusIO (XPT2046_Object_t *pObj, XPT2046_IO_t *pIO);
int32_t XPT2046_Init(XPT2046_Object_t *pObj);
int32_t XPT2046_DeInit(XPT2046_Object_t *pObj);
int32_t XPT2046_GestureConfig(XPT2046_Object_t *pObj, XPT2046_Gesture_Init_t *GestureInit);
int32_t XPT2046_ReadID(XPT2046_Object_t *pObj, uint32_t *Id);
int32_t XPT2046_GetState(XPT2046_Object_t *pObj, XPT2046_State_t *State);
int32_t XPT2046_GetMultiTouchState(XPT2046_Object_t *pObj, XPT2046_MultiTouch_State_t *State);
int32_t XPT2046_GetGesture(XPT2046_Object_t *pObj, uint8_t *GestureId);
int32_t XPT2046_EnableIT(XPT2046_Object_t *pObj);
int32_t XPT2046_DisableIT(XPT2046_Object_t *pObj);
int32_t XPT2046_ITStatus(XPT2046_Object_t *pObj);
int32_t XPT2046_ClearIT(XPT2046_Object_t *pObj);
int32_t XPT2046_GetCapabilities(XPT2046_Object_t *pObj, XPT2046_Capabilities_t *Capabilities);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif
#endif /* XPT2046_H */

/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */
/************************ (C) COPYRIGHT Pavel Omelchenko *******END OF FILE****/
