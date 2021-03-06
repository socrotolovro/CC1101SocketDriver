/*
 * rfcc1101 - SPI Protocol Driver for TI CC1101 RF communication module.
 *
 * Copyright (C) 2013 Wolfgang Klenk <wolfgang.klenk@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ADRESSSPACE_HPP_
#define ADRESSSPACE_HPP_

#include <stdint.h>

static const uint8_t ADDR_LQI       = 0x33;
static const uint8_t ADDR_RSSI      = 0x34;
static const uint8_t ADDR_TX_BYTES  = 0x3A;
static const uint8_t ADDR_RX_BYTES  = 0x3B;
static const uint8_t ADDR_RXTX_FIFO = 0x3F;

static const uint8_t STROBE_SRES = 0x30; // Reset chip.
static const uint8_t STROBE_SRX  = 0x34; // Enable RX.
static const uint8_t STROBE_STX  = 0x35; // Enable TX.
static const uint8_t STROBE_SFRX = 0x3A; // Flush the RX FIFO buffer.
static const uint8_t STROBE_SFTX = 0x3B; // Flush the TX FIFO buffer.
static const uint8_t STROBE_SNOP = 0x3D; // No operation


#endif /* ADRESSSPACE_HPP_ */
