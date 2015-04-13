/*
 * Checking the output format of printf() using floats and floats in scientific notation.
 * By Rob Swindells 2015-04-06
 */
#include <stdio.h>

int main(void)
{
    float x = 0.000025;
    printf("x formatted %%g: %g\n", x);
    printf("x formatted %%e: %e\n", x);
    printf("x formatted %%.1e: %.1e\n", x);
    printf("x formatted %%f: %f\n", x);
    return 0;
}
