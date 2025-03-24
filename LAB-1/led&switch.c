//led & switch
#include <reg51.h>
sbit led = P0^0;  // LED connected to P0.0
sbit sw = P2^0;   // Switch connected to P2.0
void delay_ms(unsigned int); 
void main(void) {
    led = 0;  // Initially, LED is OFF
    while (1) {  
        if (sw == 0) {  // If switch is pressed (assuming active LOW)
            led = ~led;  // Toggle LED
            delay_ms(500);  // Debounce delay
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
