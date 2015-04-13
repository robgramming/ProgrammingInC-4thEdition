/*
 * "Programming in C", Chapter 4, Program 4.2 "Calculating the 200th Triangular Number"
 *
 * Written by Rob Swindells, 2015-04-08
 *
 */
#include <stdio.h>
 
int main(void)
{
    int n, triangularNumber;
    
    triangularNumber = 0;
    
    for (n = 1; n <= 200; n++)
    {
        triangularNumber += n;
    }
    
    printf("The 200th triangular number is %i\n", triangularNumber);
    
    return 0;
}
