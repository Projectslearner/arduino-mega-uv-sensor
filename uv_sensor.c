/*
    Project name : UV Sensor
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-uv-sensor
*/

const int uvSensorPin = A0; // Analog pin connected to UV sensor OUT pin

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from UV sensor
  int uvValue = analogRead(uvSensorPin);

  // Print UV intensity to Serial Monitor
  Serial.print("UV Intensity: ");
  Serial.println(uvValue);

  delay(1000); // Delay before the next reading
}
