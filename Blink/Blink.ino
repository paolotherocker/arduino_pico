#include "Arduino.h"

constexpr uint32_t k_led_pin = LED_BUILTIN;

void setup() { pinMode(k_led_pin, OUTPUT); }

void loop()
{
    digitalWrite(k_led_pin, HIGH);
    delay(120);
    digitalWrite(k_led_pin, LOW);
    delay(500);
}
