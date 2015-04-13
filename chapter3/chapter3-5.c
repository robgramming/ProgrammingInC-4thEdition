/*
 * "Programming in C", Chapter 3, Program 3.3 "More Examples with Arithmetic Operators".
 * Written by Rob Swindells, 2015-04-07
 *
 * More arithmetic expressions
 */
#include <stdio.h>

int main(void)
{
    int a = 25;
    int b = 2;
    
    float c = 25.0;
    float d = 2.0;
    
    printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);  // 16
    printf("a / b * b = %i\n", a / b * b);          // 24
    printf("c / d * d = %f\n", c / d * d);          // 25.000000
    printf("-a = %i\n", -a);                        // -25
    
    return 0;
}
