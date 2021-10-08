#include <avr/io.h>
#ifdef _SIMULATE_
#include "../header/simAVRHeader.h"
#endif

int main(void) {

unsigned char cntavail;

while(1) {
    cntavail = 4 - ((PINA & 0x08)>>3) - ((PINA&0x04)>>2) -
                             ((PINA & 0x02)>>1) - ((PINA&0x01));
    PORTC = cntavail;
}
return 1;
}

