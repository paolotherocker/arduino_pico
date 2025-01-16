/*
 * timer_blink
 *
 * Blinks the built-in LED every second using the arduino-timer library.
 *
 */

#include <arduino-timer.h>

Timer<> tmr = timer_create_default();  // create a timer with default settings

bool toggle_led(void*)
{
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));  // toggle the LED
    return true;                                           // repeat? true
}

void setup()
{
    pinMode(LED_BUILTIN, PinMode::OUTPUT);  // set LED pin to OUTPUT

    // call the toggle_led function every 500 millis
    tmr.every(250, toggle_led);
}

void loop()
{
    tmr.tick();  // tick the timer
}
