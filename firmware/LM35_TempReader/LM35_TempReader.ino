const int pins[] = {A0, A1}; // Mảng chứa các chân cảm biến
int adcValues[2];            // Mảng lưu giá trị ADC

void setup() {
  Serial.begin(9600);
  Serial.println("Time,Sensor_A0,Sensor_A1");
}

void loop() {
  Serial.print(millis());
  for (int i = 0; i < 2; i++) {
    adcValues[i] = analogRead(pins[i]);
    float temp = (adcValues[i] * 500.0) / 1023.0;
    Serial.print(",");
    Serial.print(temp);
  }
  Serial.println();
  delay(1000);
}