
#include "timer.h"


void timer_init(void)
{
  TCCR0 |= (1 << WGM01); // CTC mode
  OCR0 = 230;
  TCCR0 |= (1 << CS01) | (1 << CS00); // start, prescaler 64
  TIMSK |= (1 << OCIE0);
  //sei();
}


ISR(TIMER0_COMP_vect)
{
  timer_callback();
}
