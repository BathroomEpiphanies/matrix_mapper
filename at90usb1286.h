#define _DDRA           (uint8_t *const)&DDRA
#define _DDRB           (uint8_t *const)&DDRB
#define _DDRC           (uint8_t *const)&DDRC
#define _DDRD           (uint8_t *const)&DDRD
#define _DDRE           (uint8_t *const)&DDRE
#define _DDRF           (uint8_t *const)&DDRF

#define _PORTA          (uint8_t *const)&PORTA
#define _PORTB          (uint8_t *const)&PORTB
#define _PORTC          (uint8_t *const)&PORTC
#define _PORTD          (uint8_t *const)&PORTD
#define _PORTE          (uint8_t *const)&PORTE
#define _PORTF          (uint8_t *const)&PORTF

#define _PINA           (uint8_t *const)&PINA
#define _PINB           (uint8_t *const)&PINB
#define _PINC           (uint8_t *const)&PINC
#define _PIND           (uint8_t *const)&PIND
#define _PINE           (uint8_t *const)&PINE
#define _PINF           (uint8_t *const)&PINF

uint8_t pin_count = 46;

uint8_t *const reg[46]  = {
  _DDRA,  _DDRA,  _DDRA,  _DDRA,  _DDRA,  _DDRA,  _DDRA,  _DDRA, 
  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB,  _DDRB, 
  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC,  _DDRC, 
  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD,  _DDRD, 
  _DDRE,  _DDRE,                  _DDRE,  _DDRE,  _DDRE,  _DDRE, 
  _DDRF,  _DDRF,  _DDRF,  _DDRF,  _DDRF,  _DDRF,  _DDRF,  _DDRF
};

uint8_t *const port[46] = {
  _PORTA, _PORTA, _PORTA, _PORTA, _PORTA, _PORTA, _PORTA, _PORTA, 
  _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, _PORTB, 
  _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, _PORTC, 
  _PORTD, _PORTD, _PORTD, _PORTD, _PORTD, _PORTD, _PORTD,  _PORTD, 
  _PORTE, _PORTE,                 _PORTE, _PORTE, _PORTE, _PORTE, 
  _PORTF, _PORTF, _PORTF, _PORTF, _PORTF, _PORTF, _PORTF, _PORTF
};

uint8_t *const pin[46]  = {
  _PINA,  _PINA,  _PINA,  _PINA,  _PINA,  _PINA,  _PINA,  _PINA, 
  _PINB,  _PINB,  _PINB,  _PINB,  _PINB,  _PINB,  _PINB,  _PINB, 
  _PINC,  _PINC,  _PINC,  _PINC,  _PINC,  _PINC,  _PINC,  _PINC, 
  _PIND,  _PIND,  _PIND,  _PIND,  _PIND,  _PIND,  _PIND,  _PIND, 
  _PINE,  _PINE,                  _PINE,  _PINE,  _PINE,  _PINE, 
  _PINF,  _PINF,  _PINF,  _PINF,  _PINF,  _PINF,  _PINF,  _PINF
};

const uint8_t bit[46]   = {
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80,
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80,
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80,
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80,
  0x01,   0x02,                   0x10,   0x20,   0x40,   0x80,
  0x01,   0x02,   0x04,   0x08,   0x10,   0x20,   0x40,   0x80
};

const uint8_t bitnum[46]   = {
     0,      1,      2,      3,      4,      5,      6,      7,
     0,      1,      2,      3,      4,      5,      6,      7,
     0,      1,      2,      3,      4,      5,      6,      7,
     0,      1,      2,      3,      4,      5,      6,      7,
     0,      1,      2,                      5,      6,      7,
     0,      1,      2,      3,      4,      5,      6,      7
};

const uint8_t name[46]   = {
     0,      0,      0,      0,      0,      0,      0,      0,
     1,      1,      1,      1,      1,      1,      1,      1,
     2,      2,      2,      2,      2,      2,      2,      2,
     3,      3,      3,      3,      3,      3,      3,      3,
     4,      4,      4,                      4,      4,      4,
     5,      5,      5,      5,      5,      5,      5,      5
};
