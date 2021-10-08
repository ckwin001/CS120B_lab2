/*         Your Name & E-mail: Casey Kwinn ckwin001@ucr.edu

 *          Lab Section:023

 *         Assignment: Lab #2  Exercise #4

 *         Exercise Description: [optional - include for your own benefit]
 
 *        

 *         I acknowledge all content contained herein, excluding template or example code, is my own original work.

 *

 *         Demo Link: <URL>

 */

#include <avr/io.h>
#ifdef _SIMULATE_
#include "../header/simAVRHeader.h"
#endif

int main(void) {
DDRA = 0x00; PORTA = 0xFF;
DDRB = 0x00; PORTB = 0xFF;
DDRC = 0x00; PORTC = 0xFF;
DDRD = 0xFF; PORTD = 0x00;

while(1) {
    
}
return 1;
}

