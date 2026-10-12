#include <Servo.h>

Servo myservo;
int lastAngle = -1;

void setup() {
  Serial.begin(9600);
  myservo.attach(3);
}

void loop() {
  int pot = analogRead(A5);
  int angle = map(pot, 0, 1023, 0, 180);

  // On ne bouge le servo que si l'angle change (limite les tremblements)
  if (abs(angle - lastAngle) >= 1) {
    myservo.write(angle);
    lastAngle = angle;
    Serial.print("Angle : ");
    Serial.println(angle);
  }

  delay(15);
}