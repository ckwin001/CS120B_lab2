#include <avr/io.h>
#ifdef _SIMULATE_
#include "../header/simAVRHeader.h"
#endif

int main(void) {
DDRA = 0x00; PORTA = 0xFF;
DDRC = 0xFF; PORTC = 0x00;
unsigned char cntavail;
unsigned char full;
while(1) {
    cntavail = 4 - ((PINA & 0x08)>>3) - ((PINA&0x04)>>2) -
               ((PINA & 0x02)>>1) - ((PINA&0x01));

    full = (cntavail == 0);

    PORTC = full<<7 | cntavail;
}
return 1;
}
