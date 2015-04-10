/*
 * "Programming in C", Chapter 4, Exercise 3 "Write a program that generates a table of triangular numbers
 * using the formula n (n + 1) / 2. Have the program generate every 5th triangular number between 5 and 50."
 *
 * Written by Rob Swindells, 2015-04-08
 *
 */
#include <stdio.h>
 
int main(void)
{
    int n = 5, result;
    
    while ( n <= 50 )
    {
        result = n * (n + 1) / 2;
        printf("Triangular number %i is %i\n", n, result);
        n += 5;
    }
    return 0;
}
