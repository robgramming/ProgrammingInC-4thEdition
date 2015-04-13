/*
 * "Programming in C", Chapter 4, Program 4.1 "Calculating the 8th Triangular Number"
 *
 * Written by Rob Swindells, 2015-04-08
 *
 */
#include <stdio.h>
 
int main(void)
{
    int triangularNumber;
    
    triangularNumber = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;
    
    printf("The eight triangular number is %i\n", triangularNumber);
    
    return 0;
}
