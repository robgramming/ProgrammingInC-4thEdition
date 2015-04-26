/*
 * "Programming in C", Chapter 5, Example 2:
 * "Calculating the Average of a Set of Grades and Counting the Number of Failing Test Grades"
 *
 * By Robgramming 2015-04-13.
 *
 */
 #include <stdio.h>
 
 int main(void)
 {
    int     numberOfGrades, i, grade;
    int     gradeTotal = 0;
    int     failureCount = 0;
    float   average;
    
    printf ("How many grades will you be entering? ");
    scanf ("%i", &numberOfGrades);
    
    for ( i = 1; i <= numberOfGrades; i++)
    {
        printf ("Enter grade number %i: ", i);
        scanf ("%i", &grade);
        
        gradeTotal += grade;
        
        if ( grade < 65 )
            failureCount++;
    }
    
    average = (float) gradeTotal / numberOfGrades;
    
    printf ("\nGrade average = %.2f\n", average);
    printf ("Number of failures = %i\n", failureCount);
    
    return 0;
 }
