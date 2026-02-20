#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Jaya
 * @date 2026-2-6
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

#define irPin 2

void setup() {
    pinMode(irPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    int irValue = digitalRead(irPin);
    if (irValue == HIGH) {
        Serial.println("IR SENSOR: NO Obstacles ");
    }else {
        Serial.println("IR SENSOR: Obstacles detected");
    }
    delay(1000);
}
