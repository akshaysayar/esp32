#include <Arduino.h>
#include "led_control/led_control.h"
// #include "camera_feed/camera_feed.h"

#define PIN_LED 2  // Define the pin connected to the onboard LED

// The setup function runs once when the board is powered or reset
void setup() {
    Serial.begin(115200);
    setupLED(PIN_LED);
    // setupCameraFeed(); // camera_feed setup
    // startCameraServer(); // camera_feed server start 
}

// The loop function runs repeatedly forever
void loop() {
    blinkLED(PIN_LED, 1000);
    // delay(1); // camera_feed loop delay
}
