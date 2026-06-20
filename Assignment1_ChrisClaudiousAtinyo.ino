int led_Pin = 7;
int startValue = 5;

// Function to flash the LED a specified number of times
void flashLed(int times) {
  int flash = 0;

  while (flash < times) {
    digitalWrite(led_Pin, 1);
    delay(500);
    digitalWrite(led_Pin, 0);
    delay(500);

    flash++;
  }
}

void setup() {
  pinMode(led_Pin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {
    Serial.print("Counter is: ");
    Serial.println(count);

    // Blink LED according to current counter value
    flashLed(count);

    delay(1000);
    count--;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
}
