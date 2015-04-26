/*
 * "Programming in C", Chapter 5, Example 10:
 * "Generating a Table of Prime Numbers"
 *
 * By Robgramming 2015-04-25.
 *
 * Program to generate a table of prime numbers. Written without looking at the example.
 */
 #include <stdio.h>
 
 int main(void)
 {
    int p,d;
    _Bool isPrime;
    
    for (p = 2; p <= 50; p++)
    {
        isPrime = 1;
        d = 2;
        while (d < p)
        {
            if (p % d == 0)
                isPrime = 0;
            d++;
        }
        if (isPrime == 1)
            printf("%i\t", p);
            /*
             *  2   3   5   7   11  13
             *  17  19  23  29  31  37
             *  41  43  47
             */
    }
    
    printf("\n");
    return 0;
}
