#include "Arduino.h"
#include "HC_SR04.h"

HC_SR04::HC_SR04(int trig, int echo){
  _trig=trig;
  _echo=echo;
  pinMode(_trig, OUTPUT);
  pinMode(_echo, INPUT);
}
HC_SR04::HC_SR04(int trig, int echo, int vcc, int gnd){
  _trig=trig;
  _echo=echo;
  _vcc=vcc;
  _gnd=gnd;
  pinMode(_trig, OUTPUT);
  pinMode(_echo, INPUT);
  pinMode(_vcc, OUTPUT);
  pinMode(_gnd, OUTPUT);
  digitalWrite(_vcc, HIGH);
  digitalWrite(_gnd, LOW);
}
long HC_SR04::duration(){
  digitalWrite(_trig, LOW);
  delayMicroseconds(5);
  digitalWrite(_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trig, LOW);
  return pulseIn(_echo, HIGH);
}
