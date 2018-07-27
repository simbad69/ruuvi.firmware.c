/**
 * Configuration for ruuvi.drivers.c nrf5 sdk15 platform support. Enable or disable modules you're using here.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 */

#include "application_config.h"

#ifndef RUUVI_PLATFORM_NRF5_SDK15_CONFIG_H
#define RUUVI_PLATFORM_NRF5_SDK15_CONFIG_H

#if NRF5_SDK15_PLATFORM_ENABLED
#define NRF5_SDK15_GPIO_ENABLED 1
#define NRF5_SDK15_YIELD_ENABLED 1
#define NRF5_SDK15_LOG_ENABLED APPLICATION_LOG_ENABLED
#endif

#endif