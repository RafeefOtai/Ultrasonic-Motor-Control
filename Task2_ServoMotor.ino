#include <Servo.h>

const int trigPin = 9;
const int echoPin = 8;
const int servoPin = 3;

Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  myServo.attach(servoPin);
  myServo.write(0); 
  
  Serial.begin(9600); 

void loop() {
  long duration;
  int distance;

  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  
  if (distance > 0 && distance <= 10) {
    myServo.write(90); 
  } else {
    myServo.write(0);  
  }

  delay(100); 
}