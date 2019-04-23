/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "esp_system.h"
#include "freertos/task.h"

static void wifiTask(void *pvParameters)
{
	printf("Hello,welcome to wifiTask!\r\n");
    // esp_wifi_set_mode(WIFI_MODE_AP);
	// while(1){
    //     ;
	// }
    vTaskDelete(NULL);
}

// static void task3(void *pvParameters)
// {
//     printf("Hello,welcome to task3!\r\n");
//     while(1){
//         ;
//     }
//     vTaskDelete(NULL);
// }

/******************************************************************************
 * FunctionName : app_main
 * Description  : entry of user application, init user function here
 * Parameters   : none
 * Returns      : none
*******************************************************************************/
void app_main(void)
{
    printf("WLP Said SDK version:%s\n", esp_get_idf_version());
    // printf("ESP8266	chip ID:0x%x\n", system_get_chip_id());
    xTaskCreate(wifiTask, "wifiTask", 2048, NULL, 12, NULL);
    // xTaskCreate(task3, "task3", 2048, NULL, 12, NULL);
}
