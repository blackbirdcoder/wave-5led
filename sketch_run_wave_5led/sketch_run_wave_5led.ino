// Running wave of 5 LEDs

int period = 200;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  for (int i = 2; i < 7; i++) {
    digitalWrite(i, HIGH);
    delay(period);
    digitalWrite(i, LOW);
    delay(period);
  }
  for (int i = 5; i > 2; i--) {
    digitalWrite(i, HIGH);
    delay(period);
    digitalWrite(i, LOW);
    delay(period);
  } 
}
