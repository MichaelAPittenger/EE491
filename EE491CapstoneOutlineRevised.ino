//libaries and definitions
// Oximeter: https://github.com/sparkfun/SparkFun_MAX3010x_Sensor_Library/tree/master/examples
#include "heartRate.h"
#include "spo2_algorithm.h"
//haptic motor: https://github.com/adafruit/Adafruit_DRV2605_Library
#include "Adafruit_DRV2605.h"


//pins # inputs & # outputs
//inputs
const int buttonPin1 = 28;
const int buttonPin2 = 29;
const int accelerometer = 3;
const int oximeter = 4;
//outputs
const int LEDs = 5;
const int blue = 36;
const int green = 37;
const int yellow = 38;
const int red = 39;
const int haptic = 6;
const int speaker = 7;

//variables
//swtich between modes button
int buttonState1 = 0;
int lastButtonState1 = 0;
int mode = 0;

//userCheck button
int buttonState2 = 0;
int lastButtonState2 = 0;

//initialize functions

void setup() {
  // put your setup code here, to run once:
  //inputs
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(accelerometer, INPUT);
  pinMode(oximeter, INPUT);
  //outputs
  pinMode(LEDs, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(haptic, OUTPUT);
  pinMode(speaker, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  if(buttonState1 != lastButtonState1){
    if(buttonState1 == HIGH){
      mode = (mode + 1) % 4;
    }
    lastButtonState1 = buttonState1; // Moved outside of the if condition
    delay(50); //debounce delay
  }
  runMode(mode);
}


//modes
void runMode(int mode) {
  switch(mode){
    case 0:
      //standby mode
      standby();
      Serial.print("Standy Mode");
      Serial.print('\n');
      digitalWrite(blue, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(red, LOW);
      break;
    case 2:
      //vital read mode
      readVitals();
      Serial.print("Reading Vitals");
      Serial.print('\n');
      digitalWrite(blue, LOW);
      digitalWrite(green, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(red, LOW);
      break;
    case 1:
      //test mode
      //emergency mode
      checkUser();
      Serial.print("Check on user");
      Serial.print('\n');
      digitalWrite(blue, LOW);
      digitalWrite(green, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(red, LOW);
      break;
    case 3:
      //emergency mode
      emergencyResponse();
      Serial.print("HELP");
      Serial.print('\n');
      digitalWrite(blue, LOW);
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(red, HIGH);
      break;
  }
}
//Standby
void standby() {
  //turn off motor()
  motorInput(false);
  //turn off LEDs
  LEDInput(false);
  //turn off haptic
  hapticInput(false);
  //turn off speaker
  speakerInput(false);
  return;
}

//Vital reading mode
void readVitals() {
  //read vitals
  //is data correct?
}

//check on user

//Compare data
bool isDataCorrect(int avgBPM, int avgO) {
  //compare to certain values
}

void checkUser() {
  //check if buttons are pressed within certain time (counter)
  //if buttons not pressed, activate emergency response
}

//Emergency response
void emergencyResponse(){
  //activate motor
  motorInput(true);
  //activate LEDs
  LEDInput(true);
  //activate haptic
  hapticInput(true);
  //activate speaker
  speakerInput(true);
  return;
}

//motor to inflate bag
void motorInput(bool Mode) {
  if (Mode == true) {
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
  if (Mode == true) {
    //LEDs on
  }
  else{
    //LEDs off
  }
}

//Speaker
void speakerInput(bool Mode) {
  if (Mode == true) {
    //speaker on
  }
  else{
    //speaker off
  }
}

//haptic motor
void hapticInput(bool Mode) {
  if (Mode == true) {
    //haptic on
  }
  else{
    //haptic off
  }
}
