/*
 * "Programming in C", Chapter 3, Exercise 8 "To round off an integer i to the next largest even multiple
 * of another integer j, the following formula can be used:
 * Next_multiple = i + j - i % j;
 *
 * Write a program to find the next largest even multiple for the following values of i and j.
 *
 * i        j
 * 365      7
 * 12,258   23
 * 996      4
 *
 * Written by Rob Swindells, 2015-04-08
 *
 */
#include <stdio.h>
 
int main(void)
{
    int Next_multiple, i, j;
    i = 365, j = 7;
    j *= 2;
    Next_multiple = i + j - i % j;
    printf("The next largest even multiple of %i is %i\n", i, Next_multiple);
    
    i = 12258, j = 23;
    j *= 2;
    Next_multiple = i + j - i % j;
    printf("The next largest even multiple of %i is %i\n", i, Next_multiple);
    
    i = 996, j = 4;
    Next_multiple = i + j - i % j;
    printf("The next largest even multiple of %i is %i\n", i, Next_multiple);
    return 0;
}
