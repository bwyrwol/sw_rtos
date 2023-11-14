#ifndef LEDKEY_H
#define LEDKEY_H

#include <avr/io.h>

/*
 * PORT FOR AVR
 */
#define LED_PORT   PORTB //<<<<< ustawic tylko to
#define LED_DDR    _SFR_IO8(_SFR_IO_ADDR(LED_PORT)-1)
#define LED_PIN    _SFR_IO8(_SFR_IO_ADDR(LED_PORT)-2)
\
#define KEY_PORT   PORTA //<<<<< ustawic tylko to
#define KEY_DDR    _SFR_IO8(_SFR_IO_ADDR(KEY_PORT)-1)
#define KEY_PIN    _SFR_IO8(_SFR_IO_ADDR(KEY_PORT)-2)

#define KEY0 0x01
#define KEY1 0x02
#define KEY2 0x04
#define KEY3 0x08
#define KEY4 0x10
#define KEY5 0x20
#define KEY6 0x40
#define KEY7 0x80
#define KEYALL 0xFF

#define LED0 0x01
#define LED1 0x02
#define LED2 0x04
#define LED3 0x08
#define LED4 0x10
#define LED5 0x20
#define LED6 0x40
#define LED7 0x80
#define LEDALL 0xFF

void Led_init(void);
uint8_t Led_read(void);
void Led_write(uint8_t led_state);
void Led_toggle(uint8_t led);

void Key_init(void);
uint8_t Key_read(void);

#endif/*LEDKEY_H*/
