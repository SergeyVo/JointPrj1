#include <16F676.h>
#use delay(clock=4000000)
#fuses WDT,INTRC_IO,PROTECT,NOBROWNOUT,NOMCLR,NOCPD,PUT

#byte PORTA = 5
#byte PORTC = 7

#define  lo(x)  (*((int8 *)&x))
#define  hi(x)  (*((int8 *)&x+1))
#define  ul(x)  (*((int8 *)&x+2))
#define  uh(x)  (*((int8 *)&x+3))
