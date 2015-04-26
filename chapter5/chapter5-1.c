/*
 * "Programming in C", Chapter 5, Example 1:
 * "Calculating the Absolute Value of an Integer"
 *
 * By Robgramming 2015-04-13.
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    int number;
    
    printf ("Type in your number: ");
    scanf ("%i", &number);
    
    if ( number < 0 )
        number = -number;
        
    printf ("The absolute value is %d\n", number);
    
    return 0;
 }
