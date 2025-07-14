#include <ch.h>
#include <hal.h>
//#include <stm32f4xx_hal.h>  // 或 f7xx_hal.h 依据芯片修改
#include <fsmc_sram_lld.h>

// SRAM 起始地址和大小（STM32 FSMC Bank1 - NOR/SRAM Bank1）
#define SRAM_START ((void *)0x68000000)
#define SRAM_SIZE  (1 * 1024 * 1024)  // 1MB SRAM

// SRAM 配置结构体
static const SRAMConfig sram_cfg = {
    .bcr = (1 << 12) | (1 << 4) | (1 << 0),
    .btr = (8 << 8) | (0 << 4) | (0 << 0),
    .bwtr = 0x0FFFFFFF
};
/* = {
    // BCR: Bank Control Register
    .bcr = FSMC_BCR1_MBKEN       | // Memory bank enable
           FSMC_BCR1_MWID_0      | // Memory data bus width 16 bits
           FSMC_BCR1_WREN        | // Write enable
           FSMC_BCR1_EXTMOD      | // Extended mode enable
           FSMC_BCR1_BURSTEN     | // Burst enable（可选）
           FSMC_BCR1_FACCEN,       // Flash access enable（可选）

    // BTR: Timing register（读操作时序）
    .btr = (0 << 28) |  // ACCMOD: Access mode A
           (0 << 24) |  // DATLAT: Data latency
           (0 << 20) |  // CLKDIV: Clock divide ratio
           (1 << 16) |  // BUSTURN: Bus turnaround duration
           (2 << 8)  |  // DATAST: Data phase duration
           (1 << 4)  |  // ADDHLD: Address hold time
           (2 << 0),    // ADDSET: Address setup time

    // BWTR: 写操作时序（如果使用 Extended mode）
    .bwtr = (0 << 28) |  // ACCMOD: Access mode A
            (0 << 24) |  // DATLAT
            (0 << 20) |  // CLKDIV
            (1 << 16) |  // BUSTURN
            (2 << 8)  |  // DATAST
            (1 << 4)  |  // ADDHLD
            (2 << 0),    // ADDSET
};*/

void Target_ExternalMemoryInit()
{
    // 启动 SRAM 外设
    fsmcSramInit();                 // 初始化 SRAM 驱动
    fsmcSramStart(&SRAMD3, &sram_cfg); // 启动 SRAM bank D3（具体根据平台定义 SRAMD1~3）
}
