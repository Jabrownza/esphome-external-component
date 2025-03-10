#pragma once

#include "esphome/core/component.h"
#include "esphome/components/text_sensor/text_sensor.h"

namespace esphome {
namespace uart_text_sensor {

class UartTextSensor : public text_sensor::TextSensor, public Component {
 public:
  void setup() override;
  void dump_config() override;
};

}  // namespace empty_text_sensor
}  // namespace esphome
