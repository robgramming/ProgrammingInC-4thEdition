/*
 * "Programming in C", Chapter 5, Exercise 4:
 * "Write a program that acts as a simple "printing" calculator. The program should allow the user
 * to type in expressions of the form:
 *      number      operator
 * The following operators should be recognised by the program:
 * +    -   *   /   S   E
 * The S operator tells the program to set the "accumulator" to the typed-in number. The E operator
 * tells the program that execution is to end. The arithmetic operations are performed on the contents
 * of the accumulator with the number that was keyed in acting as the second operand."
 *
 * By Robgramming 2015-04-25.
 */
 #include <stdio.h>
 
 int main(void)
 {
    float val1,accum = 0;
    char oper = 'S';
    
    while (oper != 'E')
    {
        printf("Enter an expression the form:\n\tnumber\toperator:\n");
        printf("Valid operators: +\t-\t*\t/\tS (sets the accumulator)\tE (exits)\n");
        scanf("%f %c", &val1, &oper);
    
        switch (oper)
        {
            case '+':
                accum += val1;
                printf("= %f\n", accum);
                break;
            case '-':
                accum -= val1;
                printf("= %f\n", accum);
                break;
            case '*':
                accum *= val1;
                printf("= %f\n", accum);
                break;
            case '/':
                if (accum != 0)
                {
                    accum /= val1;
                    printf("= %f\n", accum);
                }
                else
                {
                    printf("Set accumulator greater than zero using n S\n");
                }
                break;
            case 'S':
                accum = val1;
                printf("= %f\n", val1);
                break;
            case 'E':
                printf("End of program.\n= %f\n", accum);
                break;
            default:
                printf("Invalid operator. Please try again.");
                break;
        }
    }
    
    return 0;
}
