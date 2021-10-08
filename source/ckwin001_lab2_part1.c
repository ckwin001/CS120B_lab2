#include <avr/io.h>
#ifdef _SIMULATE_
#include "../header/simAVRHeader.h"
#endif

int main(void) {

while(1) {
    unsigned char temp = PINA & 0x03;
    if(temp == 1){
	PORTB = 1;
}
else{
	PORTB = 0;
}

}
return 1;
}

