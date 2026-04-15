const int pins[] = {A0, A1, A2}; // Thêm chân A2 vào mảng
int adcValues[3];                // Tăng kích thước mảng lên 3

void setup() {
  Serial.begin(9600);
  // Cập nhật tiêu đề CSV thêm Sensor_A2
  Serial.println("Time,Sensor_A0,Sensor_A1,Sensor_A2");
}

void loop() {
  Serial.print(millis());
  // Vòng lặp chạy từ 0 đến 2 để đọc cả 3 cảm biến
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(pins[i]);
    float temp = (adcValues[i] * 500.0) / 1023.0;
    Serial.print(",");
    Serial.print(temp);
  }
  Serial.println();
  delay(1000);
}