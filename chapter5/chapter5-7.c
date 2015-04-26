/*
 * "Programming in C", Chapter 5, Example 7:
 * "Categorizing a Single Character Entered at The Terminal."
 *
 * By Robgramming 2015-04-13.
 *
 * "A year is a leap year if it is evenly divisible by 4. However, a year that is divisible by 100 is not
 * a leap year unless it is also divisible by 400."
 */
 #include <stdio.h>
 
 int main(void)
 {
    char userChar;
    int userChar2Int;
    
    printf ("Enter a single character: ");
    scanf ("%c", &userChar);
    
    userChar2Int = (int) userChar;
    
    if ((userChar2Int >= 65 && userChar2Int <= 65+25) || (userChar2Int >= 97 && userChar2Int <= 97+25))
        printf ("User entered the letter %c\n", userChar);
    else if (userChar2Int >= 48 && userChar2Int <= 48+9)
        printf ("User entered the number %c\n", userChar);
    else
        printf ("User entered the special character %c\n", userChar);
    
    return 0;
 }
