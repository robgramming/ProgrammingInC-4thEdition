/*
 * "Programming in C", Chapter 4, Program 4.5 "Using Nested for Loops."
 *
 * Written by Rob Swindells, 2015-04-08
 *
 */
#include <stdio.h>
 
int main(void)
{
    int n, number, triangularNumber, counter;
    
    for (counter = 1; counter <= 5; counter++)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);
        
        triangularNumber = 0;
        
        for (n = 1; n <= number; n++)
        {
            triangularNumber += n;
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }
    return 0;
}
