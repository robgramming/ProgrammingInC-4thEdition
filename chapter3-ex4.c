/*
 * "Programming in C", Chapter 3, Exercise 4 "Write a program that converts 27º from degrees Fahrenheit (F) to
 * degrees Celsius (C) using the following formula: C = (F - 32) / 1.8
 * Written by Rob Swindells, 2015-04-08
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    float c, f = 27.0;
    
    c = (f - 32) / 1.8;
    
    printf("Using the formula: \"C = (F - 32) / 1.8\" 27F = %.2fC\n", c);   // -2.78C
    return 0;
 }
