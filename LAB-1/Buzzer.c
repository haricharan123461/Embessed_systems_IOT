//Buzzer
#include <reg51.h>
#define BUZZER P0  
void delay_ms(unsigned int); 
void main(void) {
    while (1) {  // Infinite loop
        BUZZER = 0x2F;  // Turn ON the buzzer
        delay_ms(1000);  // Delay for 1 second

        BUZZER = 0x00;  // Turn OFF the buzzer
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
