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