#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Shreya Sharma
 * @date 2026-02-20
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */



#define IR_PIN 2
int sensorState = 0;
void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Configure IR pin as INPUT
    pinMode(IR_PIN, INPUT);