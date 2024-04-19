//libaries and definitions
// Oximeter: https://github.com/sparkfun/SparkFun_MAX3010x_Sensor_Library/tree/master/examples
#include "heartRate.h"
#include "spo2_algorithm.h"
//haptic motor: https://github.com/adafruit/Adafruit_DRV2605_Library
#include "Adafruit_DRV2605.h"


//pins # inputs & # outputs
//inputs
const int buttonPin
const int accelerometer
const int oximeter
//outputs
const int LEDs
const int haptic
const int speaker

//variables
int buttonState = 0;
int lastButtonState = 0;
int mode = 0;

//initialize functions

void setup() {
  // put your setup code here, to run once:
  //inputs
  pinMode(buttonPin, INPUT);
  pinMode(accelerometer, INPUT);
  pinMode(oximeter, INPUT);
  //outputs
  pinMode(LEDs, OUTPUT);
  pinMode(haptic, OUTPUT);
  pinMode(speaker, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if(buttonState != lastButtonState){
    if(buttonState == HIGH){
      mode = (mode + 1) % 3;
      switchMode(mode);
      lastButtonState = buttonState;
    }
  }

}

//modes
void swtichMode(int mode) {
  case 0:
    //standby mode
  case 1:
    //vital read mode
  case 2:
    //test mode
    //emergency mode
}
//Standby

//Vital reading mode
void readVitals() {

}

//check on user

//Compare data
bool isDataCorrect() {
  
}

//Emergency response
void emergencyResponse(){
  //activate motor()
  motorInput(True);
  //activate LEDs
  LEDInput(True);
  //activate haptic
  hapticInput(True);
  //activate speaker
  speakerInput(True);
  return;
}

//motor to inflate bag
void motorInput(bool Mode) {
  if Mode == True{
    //turn motor on
  }
  else{
    //turn motor off
  }
  return;
}

//accelerometer

//oximeter

//LCD Screen
void LCDDisplay() {
  
}

//getButton
int getButton() {
  //return int
}

//LEDs
void LEDInput(bool Mode) {
  if Mode == True{
    //LEDs on
  }
  else{
    //LEDs off
  }
}

//Speaker
void speakerInput(bool Mode) {
  if Mode == True{
    //speaker on
  }
  else{
    //speaker off
  }
}

//haptic motor
void hapticInput(bool Mode) {
  if Mode == True{
    //haptic on
  }
  else{
    //haptic off
  }
}
