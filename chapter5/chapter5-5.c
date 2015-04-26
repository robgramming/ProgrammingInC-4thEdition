/*
 * "Programming in C", Chapter 5, Example 5:
 * "Determining if a Year is a Leap Year."
 *
 * By Robgramming 2015-04-13.
 *
 * "A year is a leap year if it is evenly divisible by 4. However, a year that is divisible by 100 is not
 * a leap year unless it is also divisible by 400."
 */
 #include <stdio.h>
 
 int main(void)
 {
    int year;
    
    printf ("Enter a year: ");
    scanf ("%i", &year);
    
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        printf ("\n%i is a leap year!\n", year);
    else
        printf ("\n%i is not a leap year!\n", year);
    
    return 0;
 }
