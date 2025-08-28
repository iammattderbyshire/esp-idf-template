#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define BLINK_GPIO 22 // Lyrat Mini 1.1 onboard LED

void app_main(void)
{
    // gpio_pad_select_gpio(BLINK_GPIO); // Not needed in ESP-IDF v4.x+
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    int i = 0;
    while (1) {
        // Turn LED on
        gpio_set_level(BLINK_GPIO, 1);
        printf("[%d] LED ON - Hello world!\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);

        // Turn LED off
        gpio_set_level(BLINK_GPIO, 0);
        printf("[%d] LED OFF\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);

        i++;
    }
}
