#include <Arduino.h>
#include "led_control.h"

void setupLED(int pin) {
    pinMode(pin, OUTPUT);  // Set the LED pin as an output
}

void blinkLED(int pin, int delayTime) {
    digitalWrite(pin, HIGH);  // Turn the LED on
    delay(delayTime);         // Wait for the specified time
    digitalWrite(pin, LOW);   // Turn the LED off
    delay(delayTime);         // Wait for the specified time
}
