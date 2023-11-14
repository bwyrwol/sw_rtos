#ifndef TIMER_H_
#define TIMER_H_

#define F_CPU 14745600UL

#include <avr/io.h>
#include <avr/interrupt.h>

void timer_init(void);
void timer_callback(void) __attribute__((weak));

#endif /*TIMER_H_*/
