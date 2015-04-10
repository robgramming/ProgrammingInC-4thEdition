/*
 * "Programming in C", Chapter 3, Program 3.5 "Converting Between Integers and Floats".
 * Written by Rob Swindells, 2015-04-07
 *
 * Basic conversions in C
 */
#include <stdio.h>

int main(void)
{
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    
    i1 = f1;                // Floating to integer conversion.
    printf("%f assigned to an int produces %i\n", f1, i1);      // 123
    
    f1 = i2;                // Integer to floating conversion.
    printf("%i assigned to a float produces %f\n", i2, f1);     // -150.000000
    
    f1 = i2 / 100;          // Integer divided by integer.
    printf("%i divided by 100 produces %f\n", i2, f1);          // -1.000000
    
    f2 = i2 / 100.0;        // Integer divided by a float.
    printf("%i divided by 100.0 produces %f\n", i2, f2);        // -1.500000
    
    f2 = (float) i2 / 100;  // type cast operator.
    printf("(float) % i divided by 100 produces %f\n", i2, f2); // -1.500000
    
    return 0;
}
