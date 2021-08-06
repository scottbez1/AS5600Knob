#include <Arduino.h>
#include <Wire.h>

#include <AS5600.h>

#include "display_task.h"

DisplayTask display_task = DisplayTask(1);

AMS_5600 ams5600;

void setup() {
  Serial.begin(921600);

  display_task.begin();
  
  Wire.begin();
}

#define EWMA_ALPHA (0.8)
float x = 0;
float y = 0;

void loop() {
  // Average angle by storing averaged X/Y vectors
  float rad = ams5600.getRawAngle() * 2 * PI / 4095;
  x = x * EWMA_ALPHA + cos(rad) * (1 - EWMA_ALPHA);
  y = y * EWMA_ALPHA + sin(rad) * (1 - EWMA_ALPHA);

  float a = atan2(y, x);
  display_task.set_angle(a);

  Serial.printf("%.2f %d\n", a * 360 / 2 / PI, ams5600.getAgc());
  delay(1);
}