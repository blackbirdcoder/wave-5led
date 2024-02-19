// Running wave of 5 LEDs

int period = 200;

void ledShow(byte pin, int millisec) {
  digitalWrite(pin, HIGH);
  delay(millisec);
  digitalWrite(pin, LOW);
  delay(millisec);
}

void setup() {
  for (byte i = 2; i <= 6; i++)
    pinMode(i, OUTPUT);
}

void loop() {
  for (byte i = 2; i < 7; i++)
    ledShow(i, period);

  for (byte i = 5; i > 2; i--)
    ledShow(i, period);
}
