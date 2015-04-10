/*
 * "Programming in C", Chapter 3, Exercise 7 "Write a program that evaluates the following expression
 * and displays the results (remember to use exponential format to display the result):"
 * (3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8)
 * Written by Rob Swindells, 2015-04-08
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    float ten_8 = 0.00000001, ten_7 = 0.0000001, ten_6 = 0.000001;
    float result;
    
    result = (3.31 * ten_8 * 2.01 * ten_7) / (7.16 * ten_6 + 2.01 * ten_8);
    printf("(3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8) = %g\n", result);
    return 0;
 }
