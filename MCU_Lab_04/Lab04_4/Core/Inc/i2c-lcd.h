/*
 * i2c-lcd.h
 *
 *  Created on: Sep 11, 2026
 *      Author: Sam@CPE_RMUTT_uC-Lab
 */

#ifndef INC_I2C_LCD_H_
#define INC_I2C_LCD_H_

#include <string.h>
#include "stm32f1xx_hal.h"

void lcd_init (void);   // ฟังก์ชันเริ่มต้นใช้งาน LCD
void lcd_send_cmd (char cmd);  // ส่งคำสั่งควบคุม
void lcd_send_data (char data);  // ส่งตัวอักษรออกจอ
void lcd_send_string (char *str);  // ส่งข้อความออกจอ
void lcd_clear (void);  // ล้างหน้าจอ
void lcd_put_cur(int row, int col);  // เลื่อนเคอร์เซอร์ (แถว 0-1, คอลัมน์ 0-15)

static inline void lcd_scrolling_text(uint8_t row, const char *text, int pos, int width)
{
    char buf[33];
    int len = strlen(text);

    if (width > 32) width = 32;
    for (int i = 0; i < width; i++)
    {
        int idx = pos + i;
        buf[i] = (idx >= 0 && idx < len) ? text[idx] : ' ';   // เติมช่องว่างให้เต็มช่อง
    }
    buf[width] = '\0';

    lcd_put_cur(row, 0);
    lcd_send_string(buf);
}

#endif /* INC_I2C_LCD_H_ */
