/*
 * Attempting to wrap my brains around hex (base16) floats.
 * By Rob Swindells, 2015-04-06
 */
#include <stdio.h>

int main(void)
{
    float hex = 0x0.3p10;
    printf("%f\n", hex);
    printf("%e\n", hex);
    printf("%g\n", hex);
    printf("%a\n", hex);
    return 0;
}
