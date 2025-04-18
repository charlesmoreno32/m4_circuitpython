// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2018 Scott Shawcroft for Adafruit Industries LLC
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_SUPERVISOR_SHARED_EXTERNAL_FLASH_DEVICES_H
#define MICROPY_INCLUDED_SUPERVISOR_SHARED_EXTERNAL_FLASH_DEVICES_H


#define MR2xH40 { \
        .total_size = 4194304, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 20, \
        .max_clock_speed_mhz = 10, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = false, \
        .supports_fast_read = false, \
        .supports_qspi = false, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = true, \
        .no_erase_cmd = true, \
        .no_reset_cmd = true, \
}

#define S25FL064L { \
        .total_size = 8388608, \
        .start_up_time_us = 300, \
        .manufacturer_id = 1, \
        .memory_type = 96, \
        .capacity = 23, \
        .max_clock_speed_mhz = 108, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define S25FL216K { \
        .total_size = 2097152, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 1, \
        .memory_type = 64, \
        .capacity = 21, \
        .max_clock_speed_mhz = 65, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = false, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define S25FL116K { \
        .total_size = 2097152, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 1, \
        .memory_type = 64, \
        .capacity = 21, \
        .max_clock_speed_mhz = 108, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define IS25LP016D { \
        .total_size = 2097152, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 157, \
        .memory_type = 96, \
        .capacity = 21, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define IS25LP128F { \
        .total_size = 16777216, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 157, \
        .memory_type = 96, \
        .capacity = 24, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q32FV { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 22, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = false, \
        .supports_qspi_writes = false, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q16JVxQ { \
        .total_size = 2097152, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 21, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q128JVxQ { \
        .total_size = 16777216, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 24, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q16FW { \
        .total_size = 2097152, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 96, \
        .capacity = 21, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q32BV { \
        .total_size = 4194304, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 239, \
        .memory_type = 96, \
        .capacity = 22, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q32JVxQ { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 22, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q80DV { \
        .total_size = 1048576, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 20, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q64JVxM { \
        .total_size = 8388608, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 112, \
        .capacity = 23, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q128JVxM { \
        .total_size = 16777216, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 112, \
        .capacity = 24, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q16JVxM { \
        .total_size = 2097152, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 112, \
        .capacity = 21, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q80DL { \
        .total_size = 1048576, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 96, \
        .capacity = 20, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q64FV { \
        .total_size = 8388608, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 23, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q64JVxQ { \
        .total_size = 8388608, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 64, \
        .capacity = 23, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define W25Q32JVxM { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 239, \
        .memory_type = 112, \
        .capacity = 22, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define N25Q256A { \
        .total_size = 16777216, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 32, \
        .memory_type = 186, \
        .capacity = 25, \
        .max_clock_speed_mhz = 108, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define P25Q32H { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 133, \
        .memory_type = 96, \
        .capacity = 22, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define P25Q16H { \
        .total_size = 2097152, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 133, \
        .memory_type = 96, \
        .capacity = 21, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define P25Q32SH { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 133, \
        .memory_type = 96, \
        .capacity = 22, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define SST26VF064B { \
        .total_size = 8388608, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 191, \
        .memory_type = 38, \
        .capacity = 67, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define SST26VF016B { \
        .total_size = 2097152, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 191, \
        .memory_type = 38, \
        .capacity = 65, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define XT25F64B { \
        .total_size = 8388608, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 11, \
        .memory_type = 64, \
        .capacity = 23, \
        .max_clock_speed_mhz = 80, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25L3233F { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 194, \
        .memory_type = 32, \
        .capacity = 22, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 64, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25R3235F { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 194, \
        .memory_type = 40, \
        .capacity = 22, \
        .max_clock_speed_mhz = 8, \
        .quad_enable_bit_mask = 64, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25L1606 { \
        .total_size = 2097152, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 194, \
        .memory_type = 32, \
        .capacity = 21, \
        .max_clock_speed_mhz = 8, \
        .quad_enable_bit_mask = 64, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25L12833F { \
        .total_size = 16777216, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 194, \
        .memory_type = 32, \
        .capacity = 24, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 64, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25L3206E { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 194, \
        .memory_type = 32, \
        .capacity = 22, \
        .max_clock_speed_mhz = , \
        .quad_enable_bit_mask = , \
        .has_sector_protection = , \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25R1635F { \
        .total_size = 2097152, \
        .start_up_time_us = 800, \
        .manufacturer_id = 194, \
        .memory_type = 40, \
        .capacity = 21, \
        .max_clock_speed_mhz = 8, \
        .quad_enable_bit_mask = 64, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25R6435F { \
        .total_size = 8388608, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 194, \
        .memory_type = 40, \
        .capacity = 23, \
        .max_clock_speed_mhz = 8, \
        .quad_enable_bit_mask = 64, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25L51245G { \
        .total_size = 67108864, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 194, \
        .memory_type = 32, \
        .capacity = 26, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 64, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define MX25L25645G { \
        .total_size = 33554432, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 159, \
        .memory_type = 171, \
        .capacity = 144, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = , \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = true, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define GD25Q16E { \
        .total_size = 2097152, \
        .start_up_time_us = 1000, \
        .manufacturer_id = 200, \
        .memory_type = 64, \
        .capacity = 21, \
        .max_clock_speed_mhz = 133, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define GD25WQ128E { \
        .total_size = 16777216, \
        .start_up_time_us = , \
        .manufacturer_id = 200, \
        .memory_type = 64, \
        .capacity = 24, \
        .max_clock_speed_mhz = , \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define GD25Q32C { \
        .total_size = 4194304, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 200, \
        .memory_type = 64, \
        .capacity = 22, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define GD25Q16C { \
        .total_size = 2097152, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 200, \
        .memory_type = 64, \
        .capacity = 21, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define GD25Q64C { \
        .total_size = 8388608, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 200, \
        .memory_type = 64, \
        .capacity = 23, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define GD25S512MD { \
        .total_size = 67108864, \
        .start_up_time_us = 5000, \
        .manufacturer_id = 200, \
        .memory_type = 64, \
        .capacity = 25, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define ZD25Q16C { \
        .total_size = 2097152, \
        .start_up_time_us = 8000, \
        .manufacturer_id = 186, \
        .memory_type = 96, \
        .capacity = 21, \
        .max_clock_speed_mhz = 104, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define ZD25WQ16B { \
        .total_size = 2097152, \
        .start_up_time_us = 12000, \
        .manufacturer_id = 186, \
        .memory_type = 96, \
        .capacity = 21, \
        .max_clock_speed_mhz = 85, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define AT25SF041A { \
        .total_size = 524288, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 31, \
        .memory_type = 132, \
        .capacity = 1, \
        .max_clock_speed_mhz = 85, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = false, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define AT25SF161 { \
        .total_size = 2097152, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 31, \
        .memory_type = 134, \
        .capacity = 1, \
        .max_clock_speed_mhz = 85, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = false, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define AT25DF641A { \
        .total_size = 8388608, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 31, \
        .memory_type = 72, \
        .capacity = 0, \
        .max_clock_speed_mhz = 85, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = false, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define AT25SF128A { \
        .total_size = 16777216, \
        .start_up_time_us = 300, \
        .manufacturer_id = 31, \
        .memory_type = 137, \
        .capacity = 1, \
        .max_clock_speed_mhz = 70, \
        .quad_enable_bit_mask = 2, \
        .has_sector_protection = false, \
        .supports_fast_read = true, \
        .supports_qspi = true, \
        .supports_qspi_writes = true, \
        .write_status_register_split = true, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}

#define AT25DF081A { \
        .total_size = 1048576, \
        .start_up_time_us = 10000, \
        .manufacturer_id = 31, \
        .memory_type = 69, \
        .capacity = 1, \
        .max_clock_speed_mhz = 85, \
        .quad_enable_bit_mask = 0, \
        .has_sector_protection = true, \
        .supports_fast_read = true, \
        .supports_qspi = false, \
        .supports_qspi_writes = false, \
        .write_status_register_split = false, \
        .single_status_byte = false, \
        .no_ready_bit = false, \
        .no_erase_cmd = false, \
        .no_reset_cmd = false, \
}


#endif  // MICROPY_INCLUDED_SUPERVISOR_SHARED_EXTERNAL_FLASH_DEVICES_H