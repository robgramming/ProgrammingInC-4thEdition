/*
 * "Programming in C", Chapter 5, Exercise 5:
 * "You developed Program 4.9 to reverse the digits of an integer typed in from the terminal. However this
 * program does not function well if you type in a negative number. Find out what happens in such a case and
 * then modify the program so that negative numbers are correctly handled. For example if the number -8645
 * is typed in the output of the program should be 5468-."
 *
 * By Robgramming 2015-04-26.
 */
 #include <stdio.h>
 
 int main(void)
 {
    int number, right_digit;
    
    printf("Enter your number:\n");
    scanf("%i", &number);
    
    while(number != 0)
    {
        right_digit = number % 10;
        if (number < 0)
        {
            /* change the negative int to positive
             * so it doesn't output -n-n-n-n
             */
            printf("%i", -right_digit);
            if (number > -10)
                /* output '-' after the final negative
                 * int to complete the reversal
                 */
                printf("-");
        }
        else
            printf("%i", right_digit);
        number /= 10;
    }
    
    printf("\n");
    
    return 0;
}
