/*
 * "Programming in C", Chapter 5, Example 3:
 * "Determining if a number is even or odd."
 *
 * By Robgramming 2015-04-13.
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);
    
    if ( n % 2 > 0 )
        printf("\nThis number is odd.\n");
    else
        printf("\nThis number is even.\n");
    
    return 0;
 }
