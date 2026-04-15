# 🌡️ Arduino LM35 Temperature Monitor

Dự án phát triển hệ thống giám sát nhiệt độ đa kênh sử dụng cảm biến LM35 và bo mạch Arduino. Hệ thống hỗ trợ đọc dữ liệu thời gian thực và xuất ra định dạng CSV để phục vụ phân tích.

## 🚀 Tính năng
* **Giám sát đa kênh:** Đọc đồng thời dữ liệu từ 2 cảm biến LM35 (A0 và A1).
* **Tối ưu mã nguồn:** Sử dụng mảng (`array`) và vòng lặp để dễ dàng quản lý và mở rộng số lượng cảm biến.
* **Định dạng dữ liệu:** Xuất dữ liệu chuẩn CSV (`Time, Sensor_A0, Sensor_A1`) qua cổng Serial.
* **Quản lý phiên bản:** Sử dụng Git/GitHub để theo dõi lịch sử thay đổi mã nguồn.

## 🔌 Phần cứng cần thiết
| STT | Linh kiện | Số lượng | Chú thích |
| :--- | :--- | :---: | :--- |
| 1 | Arduino Uno R3 / Mega 2560 | 01 | Bo mạch điều khiển chính |
| 2 | Cảm biến nhiệt độ LM35 | 02 | Cảm biến Analog độ chính xác cao |
| 3 | Breadboard & Dây cắm | 01 | Kết nối mạch thử nghiệm |

Cách sử dụng
Kết nối cảm biến LM35 vào chân A0 và A1 trên Arduino.

Mở file .ino bằng Arduino IDE và tiến hành Upload code lên mạch.

Mở Serial Monitor, thiết lập tốc độ Baud là 9600.

Dữ liệu sẽ hiển thị dạng CSV, có thể copy vào Excel để vẽ biểu đồ.

Thành viên nhóm

Họ và tên: Bình An

MSSV: N23DCCI001

Vai trò: Lập trình Firmware và Quản lý Repository.

## 📁 Cấu trúc thư mục
```text
Arduino_LM35_TempMonitor/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino   # Mã nguồn xử lý chính
├── .gitignore                    # Loại bỏ các tệp tin rác (.exe, .dll)
└── README.md                     # Tài liệu hướng dẫn dự án
