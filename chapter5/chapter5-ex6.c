/*
 * "Programming in C", Chapter 5, Exercise 6:
 * "Write a program that takes an integer keyed in from the terminal and extracts and displays each digit of the
 * integer in English. So if the user types in 932 the program should display:
 *      nine three two
 * Remember to display "zero" if the user types in just a 0."
 *
 * By Robgramming 2015-04-26.
 */
 #include <stdio.h>
 
 int main(void)
 {
    int number,number_size,remainder,multiple=1;
    printf("Enter a number:");
    scanf("%i", &number);
    
    // If 0 entered program only outputs "zero";
    if (number == 0)
        printf("zero ");
    
    number_size = number;
    
    /*
     * This determines how many digits were entered
     * by dividing the number by 10 until it reaches zero
     * and by multiplying by 10 at each iteration.
     * multiple gives us the size in tens/hundreds/thousands etc
     */
    while(number_size != 0)
    {
        number_size /= 10;
        if (number_size > 0)
            multiple *= 10;
    }
    
    number_size = number;
    
    while(number != 0)
    {
        /*
         * The number is divided by multiple to get the first digit
         * then use a switch to output the english version of the number
         */
        number_size = number / multiple;
        switch (number_size)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                printf("zero ");
                break;
        }
        /*
         * Now I multiply the digit by the multiple
         * to get the value to subtract from the initial number
         * this gives me the next digit when I divide by the new
         * multiple
         * eg 932 / 100 = 9
         *      9 * 100 = 900
         *    932 - 900 = 32
         *    100 / 10 = 10 (the new multiple for the next iteration)
         */
        remainder = number_size * multiple;
        if (number == remainder)
        {
            /*
             * in the case that the rest of the values are zero
             * eg 9000
             * this outputs the remainig zeros and exits the loop.
             */
            while (number != 0)
            {
                number /= 10;
                if (number > 0)
                    printf("zero ");
            }
        }
        else
        {
            number -= remainder;
            multiple /= 10;
        }
    }
    
    printf("\n");
    return 0;
}
