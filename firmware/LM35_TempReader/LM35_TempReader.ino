void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(A0);
  float tempC = (adcValue * 500.0) / 1023.0;
  Serial.print("Nhiet do: ");
  Serial.println(tempC);
  delay(1000);
}
