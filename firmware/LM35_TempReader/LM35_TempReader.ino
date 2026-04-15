void loop() {
  // SV B vẫn đọc 2 kênh như cũ
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;

  // SV B sửa định dạng xuất JSON 
  Serial.print("{");
  Serial.print("\"t1\": "); Serial.print(nhietDo[0], 1);
  Serial.print(", \"t2\": "); Serial.print(nhietDo[1], 1);
  Serial.println("}");

  delay(1000);
}