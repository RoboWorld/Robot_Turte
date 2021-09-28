/* Basic robot car as a preparation for creating a self-learning robot
 * reference: https://create.arduino.cc/projecthub/viliamk/myturtle-self-learning-robot-part-2-movement-unit-7834fd
 */

#include <Stepper.h>
#include <Servo.h>

#define servoPin 3

//motors
const int stepsPerRevolution = 2048; 
const int rpm = 10;   //set speed of motors (max 16 for chosen step motors)
const int cycle = 250;

Servo Head;
Stepper LeftMotor = Stepper(stepsPerRevolution, 8, 10, 9, 11);
Stepper RightMotor = Stepper(stepsPerRevolution, 4, 6, 5, 7);

void setup() {
  InitializeHead();
  InitializeMotors();
}

void loop() {
  switch(random(10)) {
    case 0:
      delay(1000);
    case 1:
      MoveForward(cycle);
      break;
    case 2:
      MoveBack(cycle);
      break;
    case 3:
      MoveLeftForward(cycle);
      break;
    case 4:
      MoveRightForward(cycle);
      break;
    case 5:
      TurnLeft(cycle);
      break;
    case 6:
      TurnRight(cycle);
      break;
    case 7:
      TurnHeadFront();
      break;
    case 8:
      TurnHeadLeft();
      break;
    case 9:
      TurnHeadRight();
      break;
  }
}

//servo motor

void InitializeHead() {
  Head.attach(servoPin);  //set pin & 
}

void TurnHeadFront() {
  int k = Head.read();
  if (k < 90) {
    for (k; k <= 90; k++) {
      Head.write(k);   //set angle of servo motor  
      delay(10);
    }
  } else {
      for (k; k >= 90; k--) {
      Head.write(k);   //set angle of servo motor  
      delay(10);
    }
  }
}

void TurnHeadLeft() {
  for (int k = Head.read(); k <= 150; k++) {
    Head.write(k);   //set angle of servo motor  
    delay(10);
  }
}

void TurnHeadRight() {
  for (int k = Head.read(); k >= 30; k--) {
    Head.write(k);   //set angle of servo motor
    delay(10);
  }
}

//motors

void InitializeMotors() {
  LeftMotor.setSpeed(rpm);
  RightMotor.setSpeed(rpm);
}

void MoveForward(int cycle) {
 for (int k=0; k < cycle; k++) {
    LeftMotor.step(1);
    RightMotor.step(1);
 }
}

void MoveBack(int cycle) {
 for (int k=0; k < cycle; k++) {
    LeftMotor.step(-1);
    RightMotor.step(-1);
 }
}

void MoveLeftForward(int cycle) {  //45 degrees = cycle 500
 for (int k=0; k < cycle; k++) {
    LeftMotor.step(1);
    RightMotor.step(3);
 }
}

void MoveRightForward(int cycle) {  //45 degrees = cycle 500
 for (int k=0; k < cycle; k++) {
    LeftMotor.step(3);
    RightMotor.step(1);
 }
}

void TurnLeft(int cycle) {    
 for (int k=0; k < cycle; k++) {
    LeftMotor.step(-1);
    RightMotor.step(1);
 }
}

void TurnRight(int cycle) { 
 for (int k=0; k < cycle; k++) {
    LeftMotor.step(1);
    RightMotor.step(-1);
 }
}
