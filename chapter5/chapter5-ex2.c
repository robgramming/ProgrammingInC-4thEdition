/*
 * "Programming in C", Chapter 5, Exercise 2:
 * "Write a program that asks the user to type in two integer values at the terminal.
 * Test these two numbers to determine if the first is evenly divisible by the second,
 * and then display an appropriate message at the terminal."
 *
 * By Robgramming 2015-04-25.
 */
 #include <stdio.h>
 
 int main(void)
 {
    int val1,val2 = 0;
    
    while (val2 == 0)
    {
        printf("Enter two integer values:\n");
        scanf("%i %i", &val1, &val2);
        if (val2 == 0)      
            printf("The divisor must be greater than zero.\n");
    }
    
    if( val1 % val2 == 0)
        printf("%i is evenly divisible by %i.\n", val1, val2);
    else
        printf("%i is not evenly divisible by %i.\n", val1, val2);
    
    return 0;
}
