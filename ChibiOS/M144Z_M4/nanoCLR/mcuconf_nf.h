//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#ifndef MCUCONF_NF_H
#define MCUCONF_NF_H

/*
 * FSMC driver system settings.
 */
#define STM32_FSMC_USE_FSMC1                TRUE   // 启用 FSMC 控制器
#define STM32_FSMC_FSMC1_IRQ_PRIORITY       10     // 中断优先级（非必须，SRAM 通常无需中断）
#define STM32_FSMC_DMA_CHN                  0x00000000  // SRAM 通常无需 DMA

/*
 * 外部 SRAM 配置（NE3）
 */
#define STM32_USE_FSMC_SRAM                 TRUE   // 启用 SRAM 支持
#define STM32_SRAM_USE_FSMC_SRAM1           FALSE   // 使用 Bank1
#define STM32_SRAM_USE_FSMC_SRAM2           FALSE  // 禁用 Bank2（如未使用）
#define STM32_SRAM_USE_FSMC_SRAM3           TRUE  // 禁用 Bank3（NE3 属于 Bank1 的子区域）
#define STM32_SRAM_USE_FSMC_SRAM4           FALSE  // 禁用 Bank4

#endif // MCUCONF_NF_H

