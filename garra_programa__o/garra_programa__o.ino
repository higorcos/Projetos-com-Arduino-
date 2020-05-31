#include <Servo.h>

Servo Garra;

int Pot = A0;
int ValorPot = 0;
int ValorGarra = 0;

void setup() {
  Garra.attach(6);//porta
}

void loop() {
  ValorPot = analogRead(Pot);
  ValorGarra = map(ValorPot, 0, 1023, 0, 180);
  Garra.write(ValorGarra);
}
