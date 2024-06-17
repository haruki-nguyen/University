byte ledPin[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
const int fastDelay = 100;
const int mediumDelay = 500;
const int longDelay = 1000;

void setup() {
  for (int x = 0; x < 10; x++) { pinMode(ledPin[x], OUTPUT); }
}

void loop() {
  // run forward and backward
  int i;
  int direction = 1;
  int currentLED = ledPin[0];
  int runningCycle = 3;
  // run loop and subtract the duplicate leds running forward and backward
  for (i = 0; i < ((runningCycle * 10) - (runningCycle - 1)); i++) {
    int x;
    for (x = 0; x < 10; x++) { digitalWrite(ledPin[x], LOW); }
    
    digitalWrite(ledPin[currentLED], HIGH);
    currentLED += direction;
    if (currentLED == 9) { direction = -1; }
    if (currentLED == 0) { direction = 1; }

    delay(fastDelay);
  }
  // turn off `currentLED` for switching animation
  digitalWrite(ledPin[currentLED], LOW);

  delay(mediumDelay);
  // run randomly
  int j;
  for (j = 0; j < 10; j++) {
    int randPin = random(10);

    digitalWrite(randPin, HIGH);
    delay(fastDelay);
    digitalWrite(randPin, LOW);
    delay(fastDelay);
  }
}