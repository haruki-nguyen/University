// Define the pins that the LEDs are connected to.
const int LED_PIN_1 = 13;
const int LED_PIN_2 = 12;
const int LED_PIN_3 = 11;

// Set up the LED pins.
void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
}

int LED_blinking(int one_status, int two_status, int three_status) {
  digitalWrite(LED_PIN_1, one_status);
  digitalWrite(LED_PIN_2, two_status);
  digitalWrite(LED_PIN_3, three_status);
}

// The loop function runs over and over again forever.
void loop() {
  // Turn the first LED on and the second LED off.
  LED_blinking(HIGH, LOW, LOW);

  // Wait for one second.
  delay(300);

  // Turn the first LED off and the second LED on.
  LED_blinking(LOW, HIGH, LOW);

  // Wait for one second.
  delay(300);

  // Turn both of the LEDs in 1 seconds
  LED_blinking(LOW, LOW, HIGH);

  delay(300);

}