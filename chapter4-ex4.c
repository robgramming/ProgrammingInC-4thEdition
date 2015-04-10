/*
 * "Programming in C", Chapter 4, Exercise 4 "The factorial of an integer n, written n! is the product of
 * the consecutive integers 1 through n. Write a program to generate and print a table of the first 10
 * factorials."
 *
 * Written by Rob Swindells, 2015-04-10
 *
 */
#include <stdio.h>
 
int main(void)
{
    int result;
    
    for (int i = 1; i <= 10; i++)
    {
        result = i;
        
        printf("%2i! = ", i);
       
        for (int j = (i - 1); j >= 1; j--)
        {
            result *= j;
        }
       
        printf("%7i\n", result);
    }
    return 0;
}
