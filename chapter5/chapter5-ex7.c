/*
 * "Programming in C", Chapter 5, Exercise 7:
 * By Robgramming 2015-04-26.
 */
 #include <stdio.h>
 
 int main(void)
 {
    int p,d;
    _Bool isPrime;
    
    for (p = 2; p <= 50; (p > 2 ? p+=2 : p++))
    {
        printf("%i\t", p);
        isPrime = 1;
        d = 3;
        while (d < p && isPrime == 1)
        {
            if (p % d == 0)
                isPrime = 0;
            d+=2;
        }
        if (isPrime == 1)
            printf("YES\n");
            /*
             *  2   3   5   7   11  13
             *  17  19  23  29  31  37
             *  41  43  47
             */
        else
            printf("\n");
    }
    
    printf("\n");
    return 0;
}
