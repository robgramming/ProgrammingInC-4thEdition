/*
 * "Programming in C", Chapter 4, Program 4.7 "Finding the greatest common divisor."
 *
 * Written by Rob Swindells, 2015-04-08
 *
 * Program to find the greatest common divisor of two nonnegative integer values.
 */
#include <stdio.h>
 
int main(void)
{
    int u, v, temp;
    
    printf("Please type in two nonnegative integers.\n");
    
    scanf("%i%i", &u, &v);
    
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
        printf("u = %i / v = %i / temp = %i\n", u, v, temp);
    }
    
    printf("Their greatest common divisor is %i\n", u);
    
    return 0;
}
