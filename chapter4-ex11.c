/*
 * "Programming in C", Chapter 4, Exercise 11:
 * "Write a program that calculates the sum of the digits of an integer. The program should accept any
 * arbitrary integer typed in by the user."
 *
 * By Robgramming 2015-04-10.
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    long long int number, sum = 0, right_digit;
    
    printf("Enter your number.\n");
    scanf("%lli", &number);
    
    do
    {
        right_digit = number % 10;        
        sum += right_digit;        
        number /= 10;
    }
    while (number > 0);
    
    printf("The sum of the digits of your number is: %lli\n", sum);
    return 0;
 }
