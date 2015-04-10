/*
 * Print 100 to 1. The Catch?
 *
 * You need to start with "for(int i=0;" and continue from there - you cannot write anything before "for(int i=0;"
 * and you can't use two loops.
 *
 * By Robgramming (Rob Swindells), 2015-04-10
 */
#include <stdio.h>

int main(void)
{
    for (int i = 0, j = 100; i < 100; ++i,--j)
    {
        printf("%i\t", j);
    }
    printf("\n");
    return 0;
}
