// ESP32 Joystick Module Test

#define VRX_PIN 4
#define VRY_PIN 15
#define SW_PIN  25

void setup() {
  Serial.begin(115200);

  // IMPORTANT:
  // Use normal INPUT instead of INPUT_PULLUP
  pinMode(SW_PIN, INPUT);

  Serial.println("Joystick Test Started");
}

void loop() {

  int xValue = analogRead(VRX_PIN);
  int yValue = analogRead(VRY_PIN);

  int buttonState = digitalRead(SW_PIN);

  Serial.print("X: ");
  Serial.print(xValue);

  Serial.print("  Y: ");
  Serial.println(yValue);

  delay(200);
}