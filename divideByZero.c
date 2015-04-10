/*
 * The program checks to see what happens if I divide by zero
 * By Rob Swindells 2015-04-03
 */

#include <stdio.h>

int main()
{
    int zeroInt = 0;
    
    printf("int divide 10 by zero = %i\n", (10 / zeroInt));
    return 0;
}
