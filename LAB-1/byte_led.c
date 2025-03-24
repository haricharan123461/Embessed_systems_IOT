//byte
#include <reg51.h>
void delay_ms(unsigned int);

void main(void) {
    P1 = 0x00;  // Initialize Port 1 (All LEDs OFF)

    while (1) {
        P1 = 0x01;  // Turn ON LED connected to P1.0
        delay_ms(1000); // 1-second delay

        P1 = 0x00;  // Turn OFF all LEDs
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
