/**
 ******************************************************************************
 * @file    xpt2046_reg.h
 * @author  Pavel Omelchenko
 * @brief   Header of xpt2046_reg.c
 *
 ******************************************************************************
 * @attention
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef XPT2046_REG_H
#define XPT2046_REG_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
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

/** @defgroup XPT2046_Exported_Constants Exported Constants
  * @{
  */

#define XPT2046_READ_BLOCK_REG                     0x8AU
#define XPT2046_SEND_CMD_REG                       0x00U

/**
  * @}
  */

/** @defgroup XPT2046_Exported_Types XPT2046 Exported Types
 * @{
 */
typedef int32_t (*XPT2046_Write_Func)(void *, uint8_t, uint8_t*, uint16_t);
typedef int32_t (*XPT2046_Read_Func) (void *, uint8_t, uint8_t*, uint16_t);

typedef struct
{
  XPT2046_Write_Func   WriteReg;
  XPT2046_Read_Func    ReadReg;
  void                *handle;
} XPT2046_ctx_t;
/**
 * @}
 */

/** @addtogroup TS3510_Exported_Functions
 * @{
 */
int32_t XPT2046_write_reg(XPT2046_ctx_t *ctx, uint8_t reg, uint8_t *pbuf, uint16_t length);
int32_t XPT2046_read_reg(XPT2046_ctx_t *ctx, uint8_t reg, uint8_t *pbuf, uint16_t length);

/**
  * @}
  */

#ifdef __cplusplus
}
#endif
#endif /* XPT2046_REG_H */

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
