//Stepper Motor
#include <reg51.h>
sbit SW = P0^0;  
#define MOTOR P2  
void delay_ms(unsigned int);  
bit dir = 0;  // Direction flag (0 for forward, 1 for reverse)
void main(void) {
    while (1) {  
        // Check for switch press (active-low)
        if (SW == 0) {  
            delay_ms(200);   // Debounce delay
            while (SW == 0); // Wait for switch release
            dir = ~dir;      // Toggle direction on switch press
        }

        if (dir == 0) {  // Forward direction
            MOTOR = 0x09;
            delay_ms(20);
            MOTOR = 0x0C;
            delay_ms(20);
            MOTOR = 0x06;
            delay_ms(20);
            MOTOR = 0x03;
            delay_ms(20);
        } else {  // Reverse direction
            MOTOR = 0x03;
            delay_ms(20);
            MOTOR = 0x06;
            delay_ms(20);
            MOTOR = 0x0C;
            delay_ms(20);
            MOTOR = 0x09;
            delay_ms(20);
        }
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
