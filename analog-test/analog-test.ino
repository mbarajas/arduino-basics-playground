int testPin = 3;
int voltage = 2;

void setup() {
  pinMode(testPin, OUTPUT);
}

void loop() {
  analogWrite(testPin, voltage);
}
