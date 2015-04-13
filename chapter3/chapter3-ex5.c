/*
 * "Programming in C", Chapter 3, Exercise 5 "What output would you expect from the following program?"
 * Written by Rob Swindells, 2015-04-08
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    char c, d;
    c = 'd';
    d = c;      // d = 'd';
    printf("d = %c\n", d); // d = d
    return 0;
 }
