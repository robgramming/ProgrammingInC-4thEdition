/*
 * Programming in C example Program 3.1 Using the basic data types.
 * By Rob Swindells 2015-04-06
 */
#include <stdio.h>

int main(void)
{
    unsigned long long integerVar = 2147483648;
    float  floatingVar = 331.79;
    double doubleVar = 331.79;
    char   charVar = 'w';
    _Bool  boolVar = -56781;
    
    printf("integerVar = %lli\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %.20f\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);
    return 0;
}
