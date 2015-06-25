#ifndef __avr__
#define __avr__

#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/io.h>

#define XTAL_FRQ 8000000lu

#define SET_BIT(p,i) ((p) |=  (1 << (i)))
#define CLR_BIT(p,i) ((p) &= ~(1 << (i)))
#define GET_BIT(p,i) ((p) &   (1 << (i)))

_Bool pressed(int col, int row);
void ini_avr(void);
void wait_avr(unsigned short msec);
void start_led(void);
void read_keyPad(void);
int get_key(void);
void LCD(void);
void blinkNTimes(int n);
_Bool isValidKey(int key);
void setDateTime(void);
void resetLCD(void);
_Bool isValidDate(int day, int month, int year);
void incrementTime(void);
void ini_keyPad(void);

#define WDR() asm volatile("wdr"::)
#define NOP() asm volatile("nop"::)
#define RST() for(;;);


#endif
