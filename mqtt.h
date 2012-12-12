/**
 * @brief   MQTT communication header
 * @author  Malcom Unication (malcom.unication@babouin.tech)
 */

#include <stdbool.h>

#include "lwip/apps/mqtt_priv.h"

#define MQTT_CLIENT_ID_NAME "pico1244556"

bool MQTT_Init(ip_addr_t* addr, uint16_t port);
