// Phần khai báo: Giữ mảng 3 chân của SV A ---
const int pins[] = {A0, A1, A2}; 
int adcValues[3];
float nhietDo[3];

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Phần xử lý: Dùng vòng lặp của SV A để đọc cả 3 kênh ---
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(pins[i]);
    nhietDo[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  // Phần xuất dữ liệu: Dùng định dạng JSON của SV B nhưng thêm kênh t3 ---
  Serial.print("{");
  Serial.print("\"t1\": "); Serial.print(nhietDo[0], 1);
  Serial.print(", \"t2\": "); Serial.print(nhietDo[1], 1);
  Serial.print(", \"t3\": "); Serial.print(nhietDo[2], 1);
  Serial.println("}");

  delay(1000);
}