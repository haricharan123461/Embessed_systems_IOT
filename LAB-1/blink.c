//alternate blink
#include <reg51.h> 
#define LED P0 
void delay_ms(unsigned int);  

void main(void) {
    while (1) {
        LED = 0x55;   
        delay_ms(1000);
        LED = 0xAA;   
        delay_ms(1000);
    }
}
void delay_ms(unsigned int i) {
    unsigned int j;
    while (i-- > 0) {
        for (j = 0; j < 500; j++) {
            // Empty loop for delay
        }
    }
}
