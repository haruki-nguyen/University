const int numberOfLEDs = 5;
byte ledPin[numberOfLEDs] = { 0, 1, 2, 3, 4 };
const int duration = 500;

void setup() {
  int i;
  for (i = 0; i < numberOfLEDs; i++) {
    pinMode(ledPin[i], OUTPUT);
    digitalWrite(ledPin[i], LOW);
  }
}

void loop() {
  int i;


  for (i = 0; i < numberOfLEDs; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(duration);
  }
}
