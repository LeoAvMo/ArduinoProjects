
int LED1 = 13; // Number where the pin will be connected to the arduino
int delayTime = 1000; // milliseconds
void setup() {
  // Initialize pin 13 as an output
  pinMode(LED1, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED1, HIGH);
  delay(delayTime); // Wait for 1 second (1000 milliseconds)

  // Turn the LED off
  digitalWrite(LED1, LOW);
  delay(delayTime); // Wait for 1 second
}
