/* 
 * File:   main.c
 * Author: Alex Shev
 * Program: blinky2, blinks LED
 * Created on October 31, 2020, 4:25 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

void delay(int n) {
    int i;
    for (i = 0; i < n; i++);
}

/*
 * 
 */
int main(int argc, char** argv) {
    TRISA = 0; // tri state register, set all pins in port A as output
    PORTA = 0; // Set all of Port A pins to 0
    while(1) {
        PORTAbits.RA0 ^= 1;
        delay(1000000);
    }
    
    return (EXIT_SUCCESS);
}

