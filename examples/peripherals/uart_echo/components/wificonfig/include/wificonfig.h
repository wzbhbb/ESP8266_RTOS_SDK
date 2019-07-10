#pragma once

#include "freertos/event_groups.h"
// #include "esp_wifi.h"
// #include "esp_event_loop.h"
// #include "esp_system.h"
// #include "nvs_flash.h"
// #include "tcpip_adapter.h"
// #include "esp_smartconfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FreeRTOS event group to signal when we are connected & ready to make a request */
static EventGroupHandle_t wifi_event_group;

/* The event group allows multiple bits for each event,
   but we only care about one event - are we connected
   to the AP with an IP? */
static const int STARTCONFIG_BIT    = BIT0;
static const int CONNECTED_BIT      = BIT1;
static const int ESPTOUCH_DONE_BIT  = BIT2;

// Register WiFi functions
void wifi_config_main();
void start_config();
void stop_config();

#ifdef __cplusplus
}
#endif
