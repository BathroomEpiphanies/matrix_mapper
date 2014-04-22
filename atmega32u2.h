#define _DDRB           (uint8_t *const)&DDRB
#define _DDRC           (uint8_t *const)&DDRC
#define _DDRD           (uint8_t *const)&DDRD
#define _DDRE           (uint8_t *const)&DDRE
#define _DDRF           (uint8_t *const)&DDRF

#define _PORTB          (uint8_t *const)&PORTB
#define _PORTC          (uint8_t *const)&PORTC
#define _PORTD          (uint8_t *const)&PORTD
#define _PORTE          (uint8_t *const)&PORTE
#define _PORTF          (uint8_t *const)&PORTF

#define _PINB           (uint8_t *const)&PINB
#define _PINC           (uint8_t *const)&PINC
#define _PIND           (uint8_t *const)&PIND
#define _PINE           (uint8_t *const)&PINE
#define _PINF           (uint8_t *const)&PINF

uint8_t pin_count = 24;

uint8_t *const reg[24]  = {
  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB, 
  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC, 
  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD
};

uint8_t *const port[24] = {
  _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, 
  _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, 
  _PORTD, _PORTD, _PORTD, _PORTD, _PORTD, _PORTD, _PORTD, _PORTD
};

uint8_t *const pin[24]  = { 
  _PINB,  _PINB,  _PINB,  _PINB,  _PINB,  _PINB,  _PINB,  _PINB, 
  _PINC,  _PINC,  _PINC,  _PINC,  _PINC,  _PINC,  _PINC,  _PINC,
  _PIND,  _PIND,  _PIND,  _PIND,  _PIND,  _PIND,  _PIND,  _PIND
};

const uint8_t bit[24]   = {
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80,
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80,
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80
};

const uint8_t name[24]  = {
     1,      1,      1,      1,      1,      1,      1,      1,
     2,      2,      2,      2,      2,      2,      2,      2,
     3,      3,      3,      3,      3,      3,      3,      3
};
