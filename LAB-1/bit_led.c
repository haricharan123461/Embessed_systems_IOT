//bit
#include <reg51.h>
sbit led = P1^0;  
void delay_ms(unsigned int);
void main(void) {
    while (1) {
        led = 1;  // Turn LED ON
        delay_ms(1000); // 1-second delay

        led = 0;  // Turn LED OFF
        delay_ms(1000); // 1-second delay
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
