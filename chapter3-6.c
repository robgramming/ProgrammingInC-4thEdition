/*
 * "Programming in C", Chapter 3, Program 3.4 "Illustrating the Modulus Operator".
 * Written by Rob Swindells, 2015-04-07
 *
 * The modulus operator
 */
#include <stdio.h>

int main(void)
{
    int a = 25, b = 5, c = 10, d = 7;
    
    printf("a = %i, b = %i, c = %i & d = %i\n", a, b, c, d);    // 25, 5, 10, 7
    printf("a %% b = %i\n", a % b);                             // 0
    printf("a %% c = %i\n", a % c);                             // 5
    printf("a %% d = %i\n", a % d);                             // 4
    printf("a / d * d + a %% d = %i\n", a / d * d + a % d);     // 25
    
    return 0;
}
