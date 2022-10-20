#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "rgb_led.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

//#include "esp_wifi.h"
//#include "esp_system.h"
//#include "esp_event.h"
//#include "esp_event_loop.h"
//#include "nvs_flash.h"
//#include "driver/gpio.h"

void app_main(void)
{
    while (true) {
    	vTaskDelay(1000 / portTICK_PERIOD_MS);
    	rgb_led_wifi_app_started();

    	vTaskDelay(1000 / portTICK_PERIOD_MS);
    	rgb_led_http_server_started();

    	vTaskDelay(1000 / portTICK_PERIOD_MS);
    	rgb_led_wifi_connected();

    	printf("New event loop cycle!\n");
    }
}
