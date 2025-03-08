#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart_readline/uart_readline.h"

namespace esphome {
namespace uart_readline {

class UartReadline : public text_sensor::TextSensor, public Component {
 public:
  void setup() override;
  void dump_config() override;
};

}  // namespace empty_text_sensor
}  // namespace esphome