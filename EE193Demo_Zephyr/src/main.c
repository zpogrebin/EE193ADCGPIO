// Modified by ZP and CWZ
// Feb 19, 2022
// For measurement of GPIOz

/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <drivers/gpio.h>

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

void main(void)
{
	
  	int dev = device_get_binding("GPIOB");
	int ret = gpio_pin_configure(dev, 10, GPIO_OUTPUT);

	while (1) {
		ret = gpio_pin_toggle(dev, 10);
		if (ret < 0) {
			return;
		}
		// k_msleep(SLEEP_TIME_MS);
	}
}