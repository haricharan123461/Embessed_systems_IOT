//Relay
#include <reg51.h>
#define RELAY P1  
void delay_ms(unsigned int);
void main(void) {
    while (1) {  
        RELAY = 0x01;  // Turn ON the relay (Activating P1.0)
        delay_ms(1000);  // Delay for 1 second

        RELAY = 0x00;  // Turn OFF the relay
        delay_ms(1000);  // Delay for 1 second
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
