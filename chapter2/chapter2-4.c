/*
 * This is the example 2.4 in the book, "Programming in C", notable because it uses %i not %d in the printf()
 * function. Let's see if this works.
 * By Rob Swindells 2015-04-03
 */
#include <stdio.h>

int main(void)
{
    int sum;
    
    sum = 50 + 25;
    printf("The sum of 50 and 25 is %d\n", sum);
    return 0;
}
