/*
 * This is Chapter 2, Exercise 4 from "Prgramming in C".
 * Write a program that subtracts the value 15 from 87 and displays the result, together with an
 * appropriate message, at the terminal.
 */
 #include <stdio.h>
 
 int main(void)
 {
    int val1 = 15, val2 = 87;
    
    printf("The difference between %i - %i = %i\n", val2, val1, (val2 - val1));
    return 0;
 }
