
#include "ledkey.h"


void Led_init(void)
{
  LED_DDR   = LEDALL;
  LED_PORT  = LEDALL;
}


uint8_t Led_read(void)
{
  return ~LED_PIN;
}


void Led_write(uint8_t led_state)
{
  LED_PORT = ~led_state;
}

void Led_toggle(uint8_t led)
{
  Led_write(Led_read() ^ led);
}

void Key_init(void)
{
  KEY_PORT = KEYALL;
}

uint8_t Key_read(void)
{
  return ~KEY_PIN; 
}
