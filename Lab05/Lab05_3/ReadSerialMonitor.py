from datetime import datetime
import serial
import time

ser = serial.Serial('COM4', 115200, timeout=1)  # ปรับ COM port และ baud rate ให้ตรง
while True:
    data = ser.readline().decode('utf-8').strip()
    if data:
        current_time = datetime.now().strftime('%Y-%m-%d %H:%M:%S')
        print(f"[{current_time}] {data}")