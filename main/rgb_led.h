/*
 * rgb_led.h
 *
 *  Created on: Oct 20, 2022
 *      Author: mykolaluniv
 */

#ifndef MAIN_RGB_LED_H_
#define MAIN_RGB_LED_H_

// RGB LED GPIOs
#define RGB_LED_RED_GPIO     26
#define RGB_LED_GREEN_GPIO   25
#define RGB_LED_BLUE_GPIO    17

// RGB LED color mix channels
#define RGB_LED_CHANNEL_NUM  3

// RGB LED configuration
typedef struct
{
	int channel;
	int gpio;
	int mode;
	int timer_index;
} ledc_info_t;
ledc_info_t ledc_ch[RGB_LED_CHANNEL_NUM];

// Indicate main app start
void rgb_main_app_start(void);

// Indicate wifi app start
void rgb_led_wifi_app_start(void);
// Indicate wifi connected event
void rgb_led_wifi_connected(void);
// Indicate AP child connected
void rgb_led_wifi_ap_child_connected(void);

// Indicate http server start
void rgb_led_http_server_started(void);

// Turn off the led
void rgb_led_none(void);

#endif /* MAIN_RGB_LED_H_ */
