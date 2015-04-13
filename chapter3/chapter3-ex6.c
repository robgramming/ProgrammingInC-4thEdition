/*
 * "Programming in C", Chapter 3, Exercise 6 "Write a program to evaluate the polynominal shown here:"
 * 3x³ - 5x² + 6
 * for x = 2.55.
 * Written by Rob Swindells, 2015-04-08
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    float x = 2.55, x2 = x * x, x3 = x2 * x;    
    float result = 3 * x3 - 5 * x2 + 6;
    
    printf("The result of the polynominal: 3x^3 - 5x^2 + 6 = %g\n", result);    // 23.2316
    return 0;
 }
