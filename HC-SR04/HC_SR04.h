#ifndef HC_SR04_h
#define HC_SR04_h

#include "Arduino.h"

class HC_SR04
{
  public:
    HC_SR04(int trig, int echo);
    HC_SR04(int trig, int echo, int vcc, int gnd);
    long duration();
  private:
    int _trig;
    int _echo;
    int _vcc;
    int _gnd;
};

#endif
