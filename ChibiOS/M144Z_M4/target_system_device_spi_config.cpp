//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#include <sys_dev_spi_native_target.h>

//////////
// SPI1 //
//////////

// pin configuration for SPI1
// port for SCK pin is: SPI1_SCLK
// port for MISO pin is: SPI1_MISO
// port for MOSI pin is: SPI1_MOSI

// GPIO alternate pin function is 5 (see alternate function mapping table in device datasheet)
SPI_CONFIG_PINS(1, GPIOB, 3, GPIOB, 4, GPIOB, 5, 5)
