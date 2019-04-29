#include "HC_SR04.h"
HC_SR04 EYES(9, 10, 8, 11); 
void setup() {
  Serial.begin (9600);
}
 
void loop() {
  Serial.println(EYES.duration());
  delay(250);
}
