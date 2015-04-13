/*
 * "Programming in C", Chapter 4, Exercise 5 "The following perfectly valid C program was written without
 * much attention paid to its format. Reformat the program so that it is more readable."
 *
 * Written by Rob Swindells, 2015-04-10
 *
 * Original format:
 * #include <stdio.h>
 * int main(void){
 * int n,two_to_the_n;
 * printf("TABLE OF POWERS OF TWO\n\n");
 * printf(" n     2 to the n\n");
 * printf("---    ---------------\n");
 * two_to_the_n=1;
 * for(n=0;n<=10;++n){
 * printf("%2i        %i\n",n,two_to_the_n); two_to_the_n*=2;}
 * return 0;}
 */
 #include <stdio.h>
 
 int main(void)
{
    int n, n2;    
    n2 = 1;
    
    printf("TABLE OF POWERS OF TWO\n\n");
    
    printf(" n     2 to the n\n");
    printf("---    ---------------\n");
    
    for(n = 0; n <= 10; n++)
    {
        printf("%2i        %i\n", n, n2);
        n2 *= 2;
    }
    return 0;
}
