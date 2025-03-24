//DC MOTOR
#include <reg51.h>
// Motor direction control
sbit motor = P2^0;          // Motor control pin
sbit pwm_control = P2^1;    // PWM control pin
// Switch inputs for direction control
sbit key_REV = P1^0;  // Reverse direction switch
sbit key_FRW = P1^1;  // Forward direction switch
// Switch inputs for speed control
sbit speed_dec = P2^6;  // Decrease speed button
sbit speed_inc = P2^7;  // Increase speed button
void delay_ms(unsigned int);
void pwm_control_motor(unsigned int);
void main(void) {
    unsigned int count, value = 500;  // Initial PWM value
    while (1) {
        // Check for reverse direction
        if (key_REV == 0) {
            motor = 0;  // Reverse direction
        }
        // Check for forward direction
        if (key_FRW == 0) {
            motor = 1;  // Forward direction
        }
        // Decrease speed
        if (speed_dec == 0) {
            if (value > 100) {  // Limit minimum speed
                value -= 100;
            }
        }
        // Increase speed
        if (speed_inc == 0) {
            if (value < 1000) {  // Limit maximum speed
                value += 100;
            }
        }
        // PWM control for speed
        pwm_control_motor(value);
    }
}
// PWM control function
void pwm_control_motor(unsigned int value) {
    unsigned int count;
    
    pwm_control = 1;
    for (count = 0; count <= value; count++);  // ON time
    
    pwm_control = 0;
    for (count = 0; count <= 500; count++);   // OFF time
}

