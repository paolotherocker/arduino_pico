#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
constexpr int32_t k_disp_clk = 26;
constexpr int32_t k_disp_dio = 27;

constexpr int32_t k_interval = 100;

int32_t tick = 0;
int32_t value = 0;

TM1637Display display(k_disp_clk, k_disp_dio);

void setup() { display.setBrightness(2); }

void loop()
{
    int32_t current_time = millis();

    if (current_time - tick > k_interval)
    {
        display.showNumberDec(value, true, 3, 1);

        tick = current_time;
        value += 1;
        if (value > 127) value = 0;
    }
}
