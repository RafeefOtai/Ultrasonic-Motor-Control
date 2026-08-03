
const int motorLeftIn1 = 2;   
const int motorLeftIn2 = 3;   
const int motorRightIn3 = 4;  
const int motorRightIn4 = 5;  

void setup() {
  
  pinMode(motorLeftIn1, OUTPUT);
  pinMode(motorLeftIn2, OUTPUT);
  pinMode(motorRightIn3, OUTPUT);
  pinMode(motorRightIn4, OUTPUT);
}

void loop() {
  
  moveForward();
  delay(30000); 

  moveBackward();
  delay(60000); 

  for (int i = 0; i < 6; i++) {
    turnRight();
    delay(5000); 
    
    turnLeft();
    delay(5000); 
  }

  stopMotors();
  delay(5000); 
}


void moveForward() {
  digitalWrite(motorLeftIn1, HIGH);
  digitalWrite(motorLeftIn2, LOW);
  digitalWrite(motorRightIn3, HIGH);
  digitalWrite(motorRightIn4, LOW);
}


void moveBackward() {
  digitalWrite(motorLeftIn1, LOW);
  digitalWrite(motorLeftIn2, HIGH);
  digitalWrite(motorRightIn3, LOW);
  digitalWrite(motorRightIn4, HIGH);
}


void turnRight() {
  digitalWrite(motorLeftIn1, HIGH);
  digitalWrite(motorLeftIn2, LOW);
  digitalWrite(motorRightIn3, LOW);
  digitalWrite(motorRightIn4, HIGH);
}


void turnLeft() {
  digitalWrite(motorLeftIn1, LOW);
  digitalWrite(motorLeftIn2, HIGH);
  digitalWrite(motorRightIn3, HIGH);
  digitalWrite(motorRightIn4, LOW);
}


void stopMotors() {
  digitalWrite(motorLeftIn1, LOW);
  digitalWrite(motorLeftIn2, LOW);
  digitalWrite(motorRightIn3, LOW);
  digitalWrite(motorRightIn4, LOW);
}