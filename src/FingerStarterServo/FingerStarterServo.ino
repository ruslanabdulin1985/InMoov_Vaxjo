/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  pinMode(13, OUTPUT);
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
  
  myservo.write(110);
  myservo.detach();
}

void loop() {
  myservo.attach(3);
  for (int i=90; i>25; i=i-4){
     myservo.write(i);
     delay(30);
  }
  
  for (int i=25; i<125; i=i+4){
     myservo.write(i);
      delay(30);
  }
   
//  myservo.write(val);                  // sets the servo position according to the scaled value
  myservo.detach();
  delay(1000);                           // waits for the servo to get there
}

