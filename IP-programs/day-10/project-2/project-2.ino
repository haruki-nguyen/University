// Define the pin numbers
const int buttonPin = 2; // the pin number for the pushbutton
const int ledPin = 13; // the pin number for the LED

// Variable to store the button state
int buttonState = LOW;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the pushbutton
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed
  if (buttonState == HIGH) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(ledPin, LOW);
  }
}
