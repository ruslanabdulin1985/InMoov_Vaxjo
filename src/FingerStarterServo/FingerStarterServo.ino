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
//  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
  
//  myservo.write(110);
//  myservo.detach();
//  myservo.attach(2);
//  myservo.write(90);
}

void loop() {
  myservo.attach(2);
  digitalWrite(13, HIGH);
  myservo.write(0);
  myservo.detach();
  
//  for (int i=160; i>25; i--){
//     myservo.write(i);
//     delay(30);
//  }
//  
//  for (int i=25; i<160; i=i++){
//     myservo.write(i);
//      delay(30);
//  }
   
//  myservo.write(val);                  // sets the servo position according to the scaled value
 
  delay(2000); 
  myservo.attach(2);

  digitalWrite(13, LOW);
  myservo.write(130);
  myservo.detach();
  delay(2000);  
  
//   myservo.detach();
  
  // waits for the servo to get there
}
