//libaries and definitions
// Oximeter: https://github.com/sparkfun/SparkFun_MAX3010x_Sensor_Library/tree/master/examples
#include "heartRate.h"
#include "spo2_algorithm.h"
//haptic motor: https://github.com/adafruit/Adafruit_DRV2605_Library
#include "Adafruit_DRV2605.h"


//variables # inputs & # outputs
//inputs
int button1 = 
int button2 = 
int accelerometer
int oximeter
//outputs
int LEDs
int haptic
int motorR
int motorG
int motorB
int motorBlack
int speaker


//initialize functions

void setup() {
  // put your setup code here, to run once:
  //inputs
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(accelerometer, INPUT);
  pinMode(oximeter, INPUT);
  //outputs
  pinMode(LEDs, OUTPUT);
  pinMode(haptic, OUTPUT);
  pinMode(motorR, OUTPUT);
  pinMode(motorG, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(motorBlack, OUTPUT);
  pinMode(speaker, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  

}

//modes
void Modes(){
  //standby or
  //vital read or
  //check on user
  //emergency
}
//Standby

//Vital reading mode

//check on user

//Compare data
bool isDataCorrect(){
  
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
void motorInput(bool Mode){
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
void LCDDisplay(){
  
}

//getButton
int getButton(){
  //return int
}

//LEDs
void LEDInput(bool Mode){
  if Mode == True{
    //LEDs on
  }
  else{
    //LEDs off
  }
}

//Speaker
void speakerInput(bool Mode){
  if Mode == True{
    //speaker on
  }
  else{
    //speaker off
  }
}

//haptic motor
void hapticInput(bool Mode){
  if Mode == True{
    //haptic on
  }
  else{
    //haptic off
  }
}
