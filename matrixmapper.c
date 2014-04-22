#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "usb_keyboard_debug.h"
#include "print.h"

#include "at90usb1286.h"


int main(void)
{
  uint8_t i,j;

  CLKPR = 0x80; CLKPR = 0;
  usb_init();
  while(!usb_configured())
    _delay_ms(1000);

  for(;;) {
    //    _delay_ms(1024);
    for(i=0; i<pin_count; i++) {
      DDRA = DDRB = DDRC = DDRD = DDRE = DDRF = 0x00;
      PORTA = PORTB = PORTC = PORTD = PORTE = PORTF = 0x00;

      *reg[i]  =  bit[i];
      _delay_ms(1);

      for(j=0; j<pin_count; j++) {

        if(i==j) continue;

        *port[j] = bit[j];
        _delay_ms(1);

        if(!(*pin[j] & bit[j])) {
          usb_keyboard_press(KEY_A+name[i], 0);
          usb_keyboard_press(KEY_1+bitnum[i],  0);
          usb_keyboard_press(KEY_SPACE,     0);
          usb_keyboard_press(KEY_A+name[j], 0);
          usb_keyboard_press(KEY_1+bitnum[j],  0);
          usb_keyboard_press(KEY_ENTER,     0);
        }
        *port[j] = 0x00;
      }
    }
  }
}
