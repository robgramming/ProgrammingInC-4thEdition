/*
 * "Programming in C", Chapter 5, Exercise 3:
 * "Write a program that accepts two integer values typed in by the user.
 * Display the result of dividing the first integer by the second to
 * three-decimal-place accuracy. Remember to have the program check for
 * division by zero."
 *
 * By Robgramming 2015-04-25.
 */
 #include <stdio.h>
 
 int main(void)
 {
    float val1,val2 = 0;
    
    while (val2 == 0)
    {
        printf("Enter two values:\n");
        scanf("%f %f", &val1, &val2);
        if (val2 == 0)      
            printf("The divisor must be greater than zero.\n");
    }
    
    printf("%.3f divided by %.3f is %.3f\n", val1, val2, val1 / val2);
    
    return 0;
}
