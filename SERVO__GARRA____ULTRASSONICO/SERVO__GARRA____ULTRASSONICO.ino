/*
Servo controlado por Ultrasonic Sensor
Programa:
*/

#include <Servo.h>
Servo SERVO;

#define trigPin 7
#define echoPin 6
int sound = 250;//Frequência do sensor

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
SERVO.attach(8);
}

void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;


if (distance < 7) {
Serial.println("DISTÂNCIA = 7");
SERVO.write(90);
}
else {
SERVO.write(0);
}
if (distance > 60 || distance <= 0){
Serial.println("DISTÂNCIA = 60");
}
else {
Serial.print(distance);
Serial.println(" cm");
}
delay(500);
}
