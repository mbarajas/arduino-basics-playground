int ledLight = 4;
int S = 100;
int O = 300;
int pause = 1000;

void setup() {
  pinMode(ledLight, OUTPUT);
}

void loop() {
  digitalWrite(ledLight, HIGH);
  delay(S);
  digitalWrite(ledLight, LOW);
  delay(S);

  digitalWrite(ledLight, HIGH);
  delay(S);
  digitalWrite(ledLight, LOW);
  delay(S);

  digitalWrite(ledLight, HIGH);
  delay(S);
  digitalWrite(ledLight, LOW);
  delay(O);

  digitalWrite(ledLight, HIGH);
  delay(O);
  digitalWrite(ledLight, LOW);
  delay(O);

  digitalWrite(ledLight, HIGH);
  delay(O);
  digitalWrite(ledLight, LOW);
  delay(O);

  digitalWrite(ledLight, HIGH);
  delay(O);
  digitalWrite(ledLight, LOW);
  delay(O);

  digitalWrite(ledLight, HIGH);
  delay(S);
  digitalWrite(ledLight, LOW);
  delay(S);

  digitalWrite(ledLight, HIGH);
  delay(S);
  digitalWrite(ledLight, LOW);
  delay(S);

  digitalWrite(ledLight, HIGH);
  delay(S);
  digitalWrite(ledLight, LOW);
  delay(S);

  delay(pause);
}
