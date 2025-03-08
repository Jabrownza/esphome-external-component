#include "esphome/core/log.h"
#include "uart_text_sensor.h"

namespace esphome {
namespace uart_text_sensor {

static const char *TAG = "uart_text_sensor.text_sensor";

void UartTextSensor::setup() {
  
}

void UartTextSensor::dump_config() { 
    ESP_LOGCONFIG(TAG, "Uart text sensor");
}

}  // namespace empty_text_sensor
}  // namespace esphome