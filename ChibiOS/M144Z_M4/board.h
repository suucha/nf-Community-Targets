/*
    ChibiOS - Copyright (C) 2006..2020 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*
 * Setup for M144Z_M4 board.
 */

/*
 * Board identifier.
 */
#define BOARD_M144Z_M4
#define BOARD_NAME                  "M144Z_M4"

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F407xx

/*
 * IO pins assignments.
 */
#define GPIOA_WK_UP                 0U
#define GPIOA_PIN1                  1U
#define GPIOA_USART2_TX             2U
#define GPIOA_USART2_RX             3U
#define GPIOA_PIN4                  4U
#define GPIOA_PIN5                  5U
#define GPIOA_PIN6                  6U
#define GPIOA_PIN7                  7U
#define GPIOA_PIN8                  8U
#define GPIOA_USART1_TX             9U
#define GPIOA_USART1_RX             10U
#define GPIOA_FS_DM                 11U
#define GPIOA_FS_DP                 12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_PIN15                 15U

#define GPIOB_PIN0                  0U
#define GPIOB_PIN1                  1U
#define GPIOB_PIN2                  2U
#define GPIOB_SPI1_SCK              3U
#define GPIOB_SPI1_MISO             4U
#define GPIOB_SPI1_MOSI             5U
#define GPIOB_PIN6                  6U
#define GPIOB_PIN7                  7U
#define GPIOB_IIC_SCL               8U
#define GPIOB_IIC_SDA               9U
#define GPIOB_USART3_TX             10U
#define GPIOB_USART3_RX             11U
#define GPIOB_PIN12                 12U
#define GPIOB_PIN13                 13U
#define GPIOB_PIN14                 14U
#define GPIOB_PIN15                 15U

#define GPIOC_PIN0                  0U
#define GPIOC_PIN1                  1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_PIN6                  6U
#define GPIOC_PIN7                  7U
#define GPIOC_PIN8                  8U
#define GPIOC_PIN9                  9U
#define GPIOC_PIN10                 10U
#define GPIOC_PIN11                 11U
#define GPIOC_PIN12                 12U
#define GPIOC_PIN13                 13U
#define GPIOC_OSC32_IN              14U
#define GPIOC_OSC32_OUT             15U

#define GPIOD_FSMC_D2               0U
#define GPIOD_FSMC_D3               1U
#define GPIOD_PIN2                  2U
#define GPIOD_PIN3                  3U
#define GPIOD_FSMC_NOE              4U
#define GPIOD_FSMC_NWE              5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_FSMC_D13              8U
#define GPIOD_FSMC_D14              9U
#define GPIOD_FSMC_D15              10U
#define GPIOD_FSMC_A16              11U
#define GPIOD_FSMC_A17              12U
#define GPIOD_FSMC_A18              13U
#define GPIOD_FSMC_D0               14U
#define GPIOD_FSMC_D1               15U

#define GPIOE_FSMC_NBL0             0U
#define GPIOE_FSMC_NBL1             1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_FSMC_D4               7U
#define GPIOE_FSMC_D5               8U
#define GPIOE_FSMC_D6               9U
#define GPIOE_FSMC_D7               10U
#define GPIOE_FSMC_D8               11U
#define GPIOE_FSMC_D9               12U
#define GPIOE_FSMC_D10              13U
#define GPIOE_FSMC_D11              14U
#define GPIOE_FSMC_D12              15U

#define GPIOF_FSMC_A0               0U
#define GPIOF_FSMC_A1               1U
#define GPIOF_FSMC_A2               2U
#define GPIOF_FSMC_A3               3U
#define GPIOF_FSMC_A4               4U
#define GPIOF_FSMC_A5               5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_LED_RED               9U
#define GPIOF_LED_GREEN             10U
#define GPIOF_PIN11                 11U
#define GPIOF_FSMC_A6               12U
#define GPIOF_FSMC_A7               13U
#define GPIOF_FSMC_A8               14U
#define GPIOF_FSMC_A9               15U

#define GPIOG_FSMC_A10              0U
#define GPIOG_FSMC_A11              1U
#define GPIOG_FSMC_A12              2U
#define GPIOG_FSMC_A13              3U
#define GPIOG_FSMC_A14              4U
#define GPIOG_FSMC_A15              5U
#define GPIOG_PIN6                  6U
#define GPIOG_PIN7                  7U
#define GPIOG_PIN8                  8U
#define GPIOG_PIN9                  9U
#define GPIOG_FSMC_NE3              10U
#define GPIOG_PIN11                 11U
#define GPIOG_PIN12                 12U
#define GPIOG_PIN13                 13U
#define GPIOG_PIN14                 14U
#define GPIOG_PIN15                 15U

#define GPIOH_OSC_IN                0U
#define GPIOH_OSC_OUT               1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U
#define GPIOH_PIN4                  4U
#define GPIOH_PIN5                  5U
#define GPIOH_PIN6                  6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_PIN10                 10U
#define GPIOH_PIN11                 11U
#define GPIOH_PIN12                 12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U

#define GPIOI_PIN0                  0U
#define GPIOI_PIN1                  1U
#define GPIOI_PIN2                  2U
#define GPIOI_PIN3                  3U
#define GPIOI_PIN4                  4U
#define GPIOI_PIN5                  5U
#define GPIOI_PIN6                  6U
#define GPIOI_PIN7                  7U
#define GPIOI_PIN8                  8U
#define GPIOI_PIN9                  9U
#define GPIOI_PIN10                 10U
#define GPIOI_PIN11                 11U
#define GPIOI_PIN12                 12U
#define GPIOI_PIN13                 13U
#define GPIOI_PIN14                 14U
#define GPIOI_PIN15                 15U

/*
 * IO lines assignments.
 */
#define LINE_WK_UP                  PAL_LINE(GPIOA, 0U)
#define LINE_USART2_TX              PAL_LINE(GPIOA, 2U)
#define LINE_USART2_RX              PAL_LINE(GPIOA, 3U)
#define LINE_USART1_TX              PAL_LINE(GPIOA, 9U)
#define LINE_USART1_RX              PAL_LINE(GPIOA, 10U)
#define LINE_FS_DM                  PAL_LINE(GPIOA, 11U)
#define LINE_FS_DP                  PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_SPI1_SCK               PAL_LINE(GPIOB, 3U)
#define LINE_SPI1_MISO              PAL_LINE(GPIOB, 4U)
#define LINE_SPI1_MOSI              PAL_LINE(GPIOB, 5U)
#define LINE_IIC_SCL                PAL_LINE(GPIOB, 8U)
#define LINE_IIC_SDA                PAL_LINE(GPIOB, 9U)
#define LINE_USART3_TX              PAL_LINE(GPIOB, 10U)
#define LINE_USART3_RX              PAL_LINE(GPIOB, 11U)
#define LINE_OSC32_IN               PAL_LINE(GPIOC, 14U)
#define LINE_OSC32_OUT              PAL_LINE(GPIOC, 15U)
#define LINE_FSMC_D2                PAL_LINE(GPIOD, 0U)
#define LINE_FSMC_D3                PAL_LINE(GPIOD, 1U)
#define LINE_FSMC_NOE               PAL_LINE(GPIOD, 4U)
#define LINE_FSMC_NWE               PAL_LINE(GPIOD, 5U)
#define LINE_FSMC_D13               PAL_LINE(GPIOD, 8U)
#define LINE_FSMC_D14               PAL_LINE(GPIOD, 9U)
#define LINE_FSMC_D15               PAL_LINE(GPIOD, 10U)
#define LINE_FSMC_A16               PAL_LINE(GPIOD, 11U)
#define LINE_FSMC_A17               PAL_LINE(GPIOD, 12U)
#define LINE_FSMC_A18               PAL_LINE(GPIOD, 13U)
#define LINE_FSMC_D0                PAL_LINE(GPIOD, 14U)
#define LINE_FSMC_D1                PAL_LINE(GPIOD, 15U)
#define LINE_FSMC_NBL0              PAL_LINE(GPIOE, 0U)
#define LINE_FSMC_NBL1              PAL_LINE(GPIOE, 1U)
#define LINE_FSMC_D4                PAL_LINE(GPIOE, 7U)
#define LINE_FSMC_D5                PAL_LINE(GPIOE, 8U)
#define LINE_FSMC_D6                PAL_LINE(GPIOE, 9U)
#define LINE_FSMC_D7                PAL_LINE(GPIOE, 10U)
#define LINE_FSMC_D8                PAL_LINE(GPIOE, 11U)
#define LINE_FSMC_D9                PAL_LINE(GPIOE, 12U)
#define LINE_FSMC_D10               PAL_LINE(GPIOE, 13U)
#define LINE_FSMC_D11               PAL_LINE(GPIOE, 14U)
#define LINE_FSMC_D12               PAL_LINE(GPIOE, 15U)
#define LINE_FSMC_A0                PAL_LINE(GPIOF, 0U)
#define LINE_FSMC_A1                PAL_LINE(GPIOF, 1U)
#define LINE_FSMC_A2                PAL_LINE(GPIOF, 2U)
#define LINE_FSMC_A3                PAL_LINE(GPIOF, 3U)
#define LINE_FSMC_A4                PAL_LINE(GPIOF, 4U)
#define LINE_FSMC_A5                PAL_LINE(GPIOF, 5U)
#define LINE_LED_RED                PAL_LINE(GPIOF, 9U)
#define LINE_LED_GREEN              PAL_LINE(GPIOF, 10U)
#define LINE_FSMC_A6                PAL_LINE(GPIOF, 12U)
#define LINE_FSMC_A7                PAL_LINE(GPIOF, 13U)
#define LINE_FSMC_A8                PAL_LINE(GPIOF, 14U)
#define LINE_FSMC_A9                PAL_LINE(GPIOF, 15U)
#define LINE_FSMC_A10               PAL_LINE(GPIOG, 0U)
#define LINE_FSMC_A11               PAL_LINE(GPIOG, 1U)
#define LINE_FSMC_A12               PAL_LINE(GPIOG, 2U)
#define LINE_FSMC_A13               PAL_LINE(GPIOG, 3U)
#define LINE_FSMC_A14               PAL_LINE(GPIOG, 4U)
#define LINE_FSMC_A15               PAL_LINE(GPIOG, 5U)
#define LINE_FSMC_NE3               PAL_LINE(GPIOG, 10U)
#define LINE_OSC_IN                 PAL_LINE(GPIOH, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOH, 1U)

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - WK_UP                     (input floating).
 * PA1  - PIN1                      (input pullup).
 * PA2  - USART2_TX                 (alternate 7).
 * PA3  - USART2_RX                 (alternate 7).
 * PA4  - PIN4                      (input pullup).
 * PA5  - PIN5                      (input pullup).
 * PA6  - PIN6                      (input pullup).
 * PA7  - PIN7                      (input pullup).
 * PA8  - PIN8                      (input pullup).
 * PA9  - USART1_TX                 (alternate 7).
 * PA10 - USART1_RX                 (alternate 7).
 * PA11 - FS_DM                     (alternate 10).
 * PA12 - FS_DP                     (alternate 10).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - PIN15                     (input pullup).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_WK_UP) |          \
                                     PIN_MODE_INPUT(GPIOA_PIN1) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_USART2_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_USART2_RX) |  \
                                     PIN_MODE_INPUT(GPIOA_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOA_PIN8) |           \
                                     PIN_MODE_ALTERNATE(GPIOA_USART1_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_USART1_RX) |  \
                                     PIN_MODE_ALTERNATE(GPIOA_FS_DM) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_FS_DP) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_INPUT(GPIOA_PIN15))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_WK_UP) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART2_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART2_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART1_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART1_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_FS_DM) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_FS_DP) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN15))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOA_WK_UP) |      \
                                     PIN_OSPEED_MEDIUM(GPIOA_PIN1) |        \
                                     PIN_OSPEED_HIGH(GPIOA_USART2_TX) |     \
                                     PIN_OSPEED_HIGH(GPIOA_USART2_RX) |     \
                                     PIN_OSPEED_MEDIUM(GPIOA_PIN4) |        \
                                     PIN_OSPEED_MEDIUM(GPIOA_PIN5) |        \
                                     PIN_OSPEED_MEDIUM(GPIOA_PIN6) |        \
                                     PIN_OSPEED_MEDIUM(GPIOA_PIN7) |        \
                                     PIN_OSPEED_MEDIUM(GPIOA_PIN8) |        \
                                     PIN_OSPEED_HIGH(GPIOA_USART1_TX) |     \
                                     PIN_OSPEED_HIGH(GPIOA_USART1_RX) |     \
                                     PIN_OSPEED_HIGH(GPIOA_FS_DM) |         \
                                     PIN_OSPEED_HIGH(GPIOA_FS_DP) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_MEDIUM(GPIOA_PIN15))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_WK_UP) |      \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_USART2_TX) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_USART2_RX) |  \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN8) |         \
                                     PIN_PUPDR_FLOATING(GPIOA_USART1_TX) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_USART1_RX) |  \
                                     PIN_PUPDR_FLOATING(GPIOA_FS_DM) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_FS_DP) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_SWDIO) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN15))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_WK_UP) |            \
                                     PIN_ODR_LOW(GPIOA_PIN1) |              \
                                     PIN_ODR_HIGH(GPIOA_USART2_TX) |        \
                                     PIN_ODR_HIGH(GPIOA_USART2_RX) |        \
                                     PIN_ODR_LOW(GPIOA_PIN4) |              \
                                     PIN_ODR_LOW(GPIOA_PIN5) |              \
                                     PIN_ODR_LOW(GPIOA_PIN6) |              \
                                     PIN_ODR_LOW(GPIOA_PIN7) |              \
                                     PIN_ODR_LOW(GPIOA_PIN8) |              \
                                     PIN_ODR_HIGH(GPIOA_USART1_TX) |        \
                                     PIN_ODR_HIGH(GPIOA_USART1_RX) |        \
                                     PIN_ODR_HIGH(GPIOA_FS_DM) |            \
                                     PIN_ODR_HIGH(GPIOA_FS_DP) |            \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_LOW(GPIOA_PIN15))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_WK_UP, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_USART2_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_USART2_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_PIN7, 0U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOA_USART1_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_USART1_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOA_FS_DM, 10U) |        \
                                     PIN_AFIO_AF(GPIOA_FS_DP, 10U) |        \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN15, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - PIN0                      (input pullup).
 * PB1  - PIN1                      (input pullup).
 * PB2  - PIN2                      (input pullup).
 * PB3  - SPI1_SCK                  (alternate 5).
 * PB4  - SPI1_MISO                 (alternate 5).
 * PB5  - SPI1_MOSI                 (alternate 5).
 * PB6  - PIN6                      (alternate 4).
 * PB7  - PIN7                      (input pullup).
 * PB8  - IIC_SCL                   (alternate 4).
 * PB9  - IIC_SDA                   (alternate 4).
 * PB10 - USART3_TX                 (alternate 7).
 * PB11 - USART3_RX                 (alternate 7).
 * PB12 - PIN12                     (input pullup).
 * PB13 - PIN13                     (input pullup).
 * PB14 - PIN14                     (input pullup).
 * PB15 - PIN15                     (input pullup).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_SPI1_SCK) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_SPI1_MISO) |  \
                                     PIN_MODE_ALTERNATE(GPIOB_SPI1_MOSI) |  \
                                     PIN_MODE_ALTERNATE(GPIOB_PIN6) |       \
                                     PIN_MODE_INPUT(GPIOB_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_IIC_SCL) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_IIC_SDA) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_USART3_TX) |  \
                                     PIN_MODE_ALTERNATE(GPIOB_USART3_RX) |  \
                                     PIN_MODE_INPUT(GPIOB_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SPI1_SCK) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SPI1_MISO) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SPI1_MOSI) |  \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_PIN6) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN7) |       \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_IIC_SCL) |   \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_IIC_SDA) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USART3_TX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_USART3_RX) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOB_SPI1_SCK) |      \
                                     PIN_OSPEED_HIGH(GPIOB_SPI1_MISO) |     \
                                     PIN_OSPEED_HIGH(GPIOB_SPI1_MOSI) |     \
                                     PIN_OSPEED_HIGH(GPIOB_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOB_IIC_SCL) |       \
                                     PIN_OSPEED_HIGH(GPIOB_IIC_SDA) |       \
                                     PIN_OSPEED_HIGH(GPIOB_USART3_TX) |     \
                                     PIN_OSPEED_HIGH(GPIOB_USART3_RX) |     \
                                     PIN_OSPEED_HIGH(GPIOB_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(GPIOB_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_SPI1_SCK) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_SPI1_MISO) |  \
                                     PIN_PUPDR_PULLUP(GPIOB_SPI1_MOSI) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN6) |       \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_IIC_SCL) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_IIC_SDA) |    \
                                     PIN_PUPDR_PULLUP(GPIOB_USART3_TX) |    \
                                     PIN_PUPDR_PULLUP(GPIOB_USART3_RX) |    \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOB_SPI1_SCK) |         \
                                     PIN_ODR_HIGH(GPIOB_SPI1_MISO) |        \
                                     PIN_ODR_HIGH(GPIOB_SPI1_MOSI) |        \
                                     PIN_ODR_HIGH(GPIOB_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOB_IIC_SCL) |          \
                                     PIN_ODR_HIGH(GPIOB_IIC_SDA) |          \
                                     PIN_ODR_HIGH(GPIOB_USART3_TX) |        \
                                     PIN_ODR_HIGH(GPIOB_USART3_RX) |        \
                                     PIN_ODR_HIGH(GPIOB_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_SPI1_SCK, 5U) |      \
                                     PIN_AFIO_AF(GPIOB_SPI1_MISO, 5U) |     \
                                     PIN_AFIO_AF(GPIOB_SPI1_MOSI, 5U) |     \
                                     PIN_AFIO_AF(GPIOB_PIN6, 4U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN7, 0U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_IIC_SCL, 4U) |       \
                                     PIN_AFIO_AF(GPIOB_IIC_SDA, 4U) |       \
                                     PIN_AFIO_AF(GPIOB_USART3_TX, 7U) |     \
                                     PIN_AFIO_AF(GPIOB_USART3_RX, 7U) |     \
                                     PIN_AFIO_AF(GPIOB_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN15, 0U))

/*
 * GPIOC setup:
 *
 * PC0  - PIN0                      (input pullup).
 * PC1  - PIN1                      (input pullup).
 * PC2  - PIN2                      (input pullup).
 * PC3  - PIN3                      (input pullup).
 * PC4  - PIN4                      (input pullup).
 * PC5  - PIN5                      (input pullup).
 * PC6  - PIN6                      (input pullup).
 * PC7  - PIN7                      (alternate 6).
 * PC8  - PIN8                      (input pullup).
 * PC9  - PIN9                      (input pullup).
 * PC10 - PIN10                     (alternate 6).
 * PC11 - PIN11                     (input pullup).
 * PC12 - PIN12                     (alternate 6).
 * PC13 - PIN13                     (input pullup).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_PIN7) |       \
                                     PIN_MODE_INPUT(GPIOC_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN9) |           \
                                     PIN_MODE_ALTERNATE(GPIOC_PIN10) |      \
                                     PIN_MODE_INPUT(GPIOC_PIN11) |          \
                                     PIN_MODE_ALTERNATE(GPIOC_PIN12) |      \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |       \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_HIGH(GPIOC_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOC_OSC32_IN) |      \
                                     PIN_OSPEED_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_PULLUP(GPIOC_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN7) |       \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN10) |      \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN11) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN12) |      \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_IN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_OUT))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOC_OSC32_IN) |         \
                                     PIN_ODR_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN7, 6U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN10, 6U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN12, 6U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - FSMC_D2                   (alternate 12).
 * PD1  - FSMC_D3                   (alternate 12).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - FSMC_NOE                  (alternate 12).
 * PD5  - FSMC_NWE                  (alternate 12).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - FSMC_D13                  (alternate 12).
 * PD9  - FSMC_D14                  (alternate 12).
 * PD10 - FSMC_D15                  (alternate 12).
 * PD11 - FSMC_A16                  (alternate 12).
 * PD12 - FSMC_A17                  (alternate 12).
 * PD13 - FSMC_A18                  (alternate 12).
 * PD14 - FSMC_D0                   (alternate 12).
 * PD15 - FSMC_D1                   (alternate 12).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ALTERNATE(GPIOD_FSMC_D2) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D3) |    \
                                     PIN_MODE_INPUT(GPIOD_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_NOE) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_NWE) |   \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D13) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D14) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D15) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_A16) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_A17) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_A18) |   \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D0) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_FSMC_D1))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D2) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D3) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_NOE) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_NWE) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D13) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D14) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D15) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_A16) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_A17) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_A18) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_FSMC_D1))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_FSMC_D2) |       \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_D3) |       \
                                     PIN_OSPEED_HIGH(GPIOD_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_NOE) |      \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_NWE) |      \
                                     PIN_OSPEED_HIGH(GPIOD_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_D13) |      \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_D14) |      \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_D15) |      \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_A16) |      \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_A17) |      \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_A18) |      \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_D0) |       \
                                     PIN_OSPEED_HIGH(GPIOD_FSMC_D1))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_FSMC_D2) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D3) |    \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_NOE) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_NWE) |   \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D13) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D14) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D15) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_A16) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_A17) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_A18) |   \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D0) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_FSMC_D1))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_FSMC_D2) |          \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D3) |          \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_FSMC_NOE) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_NWE) |         \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D13) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D14) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D15) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_A16) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_A17) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_A18) |         \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D0) |          \
                                     PIN_ODR_HIGH(GPIOD_FSMC_D1))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_FSMC_D2, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_D3, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_FSMC_NOE, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_FSMC_NWE, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_FSMC_D13, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_FSMC_D14, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_FSMC_D15, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_FSMC_A16, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_FSMC_A17, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_FSMC_A18, 12U) |     \
                                     PIN_AFIO_AF(GPIOD_FSMC_D0, 12U) |      \
                                     PIN_AFIO_AF(GPIOD_FSMC_D1, 12U))

/*
 * GPIOE setup:
 *
 * PE0  - FSMC_NBL0                 (alternate 12).
 * PE1  - FSMC_NBL1                 (alternate 12).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input floating).
 * PE5  - PIN5                      (input pullup).
 * PE6  - PIN6                      (input pullup).
 * PE7  - FSMC_D4                   (alternate 12).
 * PE8  - FSMC_D5                   (alternate 12).
 * PE9  - FSMC_D6                   (alternate 12).
 * PE10 - FSMC_D7                   (alternate 12).
 * PE11 - FSMC_D8                   (alternate 12).
 * PE12 - FSMC_D9                   (alternate 12).
 * PE13 - FSMC_D10                  (alternate 12).
 * PE14 - FSMC_D11                  (alternate 12).
 * PE15 - FSMC_D12                  (alternate 12).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_ALTERNATE(GPIOE_FSMC_NBL0) |  \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_NBL1) |  \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D4) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D5) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D6) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D7) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D8) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D9) |    \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D10) |   \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D11) |   \
                                     PIN_MODE_ALTERNATE(GPIOE_FSMC_D12))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_FSMC_NBL0) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_NBL1) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D4) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D5) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D6) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D7) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D8) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D9) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D10) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D11) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_FSMC_D12))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_HIGH(GPIOE_FSMC_NBL0) |     \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_NBL1) |     \
                                     PIN_OSPEED_HIGH(GPIOE_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D4) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D5) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D6) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D7) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D8) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D9) |       \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D10) |      \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D11) |      \
                                     PIN_OSPEED_HIGH(GPIOE_FSMC_D12))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_FSMC_NBL0) |  \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_NBL1) |  \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN3) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN4) |       \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN6) |         \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D4) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D5) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D6) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D7) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D8) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D9) |    \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D10) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D11) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_FSMC_D12))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_FSMC_NBL0) |        \
                                     PIN_ODR_HIGH(GPIOE_FSMC_NBL1) |        \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D4) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D5) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D6) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D7) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D8) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D9) |          \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D10) |         \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D11) |         \
                                     PIN_ODR_HIGH(GPIOE_FSMC_D12))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_FSMC_NBL0, 12U) |    \
                                     PIN_AFIO_AF(GPIOE_FSMC_NBL1, 12U) |    \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_FSMC_D4, 12U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_FSMC_D5, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D6, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D7, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D8, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D9, 12U) |      \
                                     PIN_AFIO_AF(GPIOE_FSMC_D10, 12U) |     \
                                     PIN_AFIO_AF(GPIOE_FSMC_D11, 12U) |     \
                                     PIN_AFIO_AF(GPIOE_FSMC_D12, 12U))

/*
 * GPIOF setup:
 *
 * PF0  - FSMC_A0                   (alternate 12).
 * PF1  - FSMC_A1                   (alternate 12).
 * PF2  - FSMC_A2                   (alternate 12).
 * PF3  - FSMC_A3                   (alternate 12).
 * PF4  - FSMC_A4                   (alternate 12).
 * PF5  - FSMC_A5                   (alternate 12).
 * PF6  - PIN6                      (input pullup).
 * PF7  - PIN7                      (input pullup).
 * PF8  - PIN8                      (input pullup).
 * PF9  - LED_RED                   (output pushpull maximum).
 * PF10 - LED_GREEN                 (output pushpull maximum).
 * PF11 - PIN11                     (input floating).
 * PF12 - FSMC_A6                   (alternate 12).
 * PF13 - FSMC_A7                   (alternate 12).
 * PF14 - FSMC_A8                   (alternate 12).
 * PF15 - FSMC_A9                   (alternate 12).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_ALTERNATE(GPIOF_FSMC_A0) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A1) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A2) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A3) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A4) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A5) |    \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_OUTPUT(GPIOF_LED_RED) |       \
                                     PIN_MODE_OUTPUT(GPIOF_LED_GREEN) |     \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A6) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A7) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A8) |    \
                                     PIN_MODE_ALTERNATE(GPIOF_FSMC_A9))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A1) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A2) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A3) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A4) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A5) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_LED_RED) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_LED_GREEN) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A6) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A7) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A8) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_FSMC_A9))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_HIGH(GPIOF_FSMC_A0) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A1) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A2) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A3) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A4) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A5) |       \
                                     PIN_OSPEED_HIGH(GPIOF_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOF_LED_RED) |       \
                                     PIN_OSPEED_HIGH(GPIOF_LED_GREEN) |     \
                                     PIN_OSPEED_HIGH(GPIOF_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A6) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A7) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A8) |       \
                                     PIN_OSPEED_HIGH(GPIOF_FSMC_A9))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_FSMC_A0) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A1) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A2) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A3) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A4) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A5) |    \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_LED_RED) |      \
                                     PIN_PUPDR_PULLUP(GPIOF_LED_GREEN) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A6) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A7) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A8) |    \
                                     PIN_PUPDR_FLOATING(GPIOF_FSMC_A9))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_FSMC_A0) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A1) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A2) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A3) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A4) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A5) |          \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_LED_RED) |          \
                                     PIN_ODR_HIGH(GPIOF_LED_GREEN) |        \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A6) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A7) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A8) |          \
                                     PIN_ODR_HIGH(GPIOF_FSMC_A9))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_FSMC_A0, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A1, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A2, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A3, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A4, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A5, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_LED_RED, 0U) |       \
                                     PIN_AFIO_AF(GPIOF_LED_GREEN, 0U) |     \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_FSMC_A6, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A7, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A8, 12U) |      \
                                     PIN_AFIO_AF(GPIOF_FSMC_A9, 12U))

/*
 * GPIOG setup:
 *
 * PG0  - FSMC_A10                  (alternate 12).
 * PG1  - FSMC_A11                  (alternate 12).
 * PG2  - FSMC_A12                  (alternate 12).
 * PG3  - FSMC_A13                  (alternate 12).
 * PG4  - FSMC_A14                  (alternate 12).
 * PG5  - FSMC_A15                  (alternate 12).
 * PG6  - PIN6                      (input pullup).
 * PG7  - PIN7                      (input pullup).
 * PG8  - PIN8                      (input pullup).
 * PG9  - PIN9                      (input pullup).
 * PG10 - FSMC_NE3                  (alternate 12).
 * PG11 - PIN11                     (input pullup).
 * PG12 - PIN12                     (input pullup).
 * PG13 - PIN13                     (input pullup).
 * PG14 - PIN14                     (alternate 0).
 * PG15 - PIN15                     (input pullup).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_ALTERNATE(GPIOG_FSMC_A10) |   \
                                     PIN_MODE_ALTERNATE(GPIOG_FSMC_A11) |   \
                                     PIN_MODE_ALTERNATE(GPIOG_FSMC_A12) |   \
                                     PIN_MODE_ALTERNATE(GPIOG_FSMC_A13) |   \
                                     PIN_MODE_ALTERNATE(GPIOG_FSMC_A14) |   \
                                     PIN_MODE_ALTERNATE(GPIOG_FSMC_A15) |   \
                                     PIN_MODE_INPUT(GPIOG_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_ALTERNATE(GPIOG_FSMC_NE3) |   \
                                     PIN_MODE_INPUT(GPIOG_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN13) |          \
                                     PIN_MODE_ALTERNATE(GPIOG_PIN14) |      \
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_FSMC_A10) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FSMC_A11) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FSMC_A12) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FSMC_A13) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FSMC_A14) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FSMC_A15) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_FSMC_NE3) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_HIGH(GPIOG_FSMC_A10) |      \
                                     PIN_OSPEED_HIGH(GPIOG_FSMC_A11) |      \
                                     PIN_OSPEED_HIGH(GPIOG_FSMC_A12) |      \
                                     PIN_OSPEED_HIGH(GPIOG_FSMC_A13) |      \
                                     PIN_OSPEED_HIGH(GPIOG_FSMC_A14) |      \
                                     PIN_OSPEED_HIGH(GPIOG_FSMC_A15) |      \
                                     PIN_OSPEED_HIGH(GPIOG_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOG_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOG_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOG_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOG_FSMC_NE3) |      \
                                     PIN_OSPEED_HIGH(GPIOG_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOG_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOG_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOG_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_FSMC_A10) |   \
                                     PIN_PUPDR_FLOATING(GPIOG_FSMC_A11) |   \
                                     PIN_PUPDR_FLOATING(GPIOG_FSMC_A12) |   \
                                     PIN_PUPDR_FLOATING(GPIOG_FSMC_A13) |   \
                                     PIN_PUPDR_FLOATING(GPIOG_FSMC_A14) |   \
                                     PIN_PUPDR_FLOATING(GPIOG_FSMC_A15) |   \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN9) |         \
                                     PIN_PUPDR_FLOATING(GPIOG_FSMC_NE3) |   \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_FSMC_A10) |         \
                                     PIN_ODR_HIGH(GPIOG_FSMC_A11) |         \
                                     PIN_ODR_HIGH(GPIOG_FSMC_A12) |         \
                                     PIN_ODR_HIGH(GPIOG_FSMC_A13) |         \
                                     PIN_ODR_HIGH(GPIOG_FSMC_A14) |         \
                                     PIN_ODR_HIGH(GPIOG_FSMC_A15) |         \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_FSMC_NE3) |         \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_FSMC_A10, 12U) |     \
                                     PIN_AFIO_AF(GPIOG_FSMC_A11, 12U) |     \
                                     PIN_AFIO_AF(GPIOG_FSMC_A12, 12U) |     \
                                     PIN_AFIO_AF(GPIOG_FSMC_A13, 12U) |     \
                                     PIN_AFIO_AF(GPIOG_FSMC_A14, 12U) |     \
                                     PIN_AFIO_AF(GPIOG_FSMC_A15, 12U) |     \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_FSMC_NE3, 12U) |     \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 * PH4  - PIN4                      (input pullup).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - PIN11                     (input pullup).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_HIGH(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_HIGH(GPIOH_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOH_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input pullup).
 * PI1  - PIN1                      (input pullup).
 * PI2  - PIN2                      (input pullup).
 * PI3  - PIN3                      (input pullup).
 * PI4  - PIN4                      (input pullup).
 * PI5  - PIN5                      (input pullup).
 * PI6  - PIN6                      (input pullup).
 * PI7  - PIN7                      (input pullup).
 * PI8  - PIN8                      (input pullup).
 * PI9  - PIN9                      (input pullup).
 * PI10 - PIN10                     (input pullup).
 * PI11 - PIN11                     (input pullup).
 * PI12 - PIN12                     (input pullup).
 * PI13 - PIN13                     (input pullup).
 * PI14 - PIN14                     (input pullup).
 * PI15 - PIN15                     (input pullup).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_HIGH(GPIOI_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOI_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOI_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOI_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOI_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOI_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLUP(GPIOI_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0U))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0U))

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
