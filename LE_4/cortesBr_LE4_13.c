/*
===============================================================================
FILE        : cortesBr_LE4_3.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that determines a student’s final grade and indicate whether
              it is passing or failing.
COPYRIGHT   : September 23, 2024
REVISION HISTORY
Date:       By:             Description:
9/23/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
===============================================================================
FUNCTION    : main
DESCRIPTION : Executes the main program
ARGUMENTS   : None
RETURNS     : int - exit code
==============================================================================
*/

#define PASSING_GRADE 50

int main()
{
    float firstMark, secondMark, thirdMark, fourthMark;
    float finalGrade;

    printf("Enter your grades: \n================\n");
    printf("First Mark: ");
    scanf("%f", &firstMark);
    printf("Second Mark: ");
    scanf("%f", &secondMark);
    printf("Third Mark: ");
    scanf("%f", &thirdMark);
    printf("Fourth Mark: ");
    scanf("%f", &fourthMark);

    finalGrade = (firstMark + secondMark + thirdMark + fourthMark) / 4;

    if (firstMark > 0 && secondMark > 0 && thirdMark > 0 && fourthMark > 0 && firstMark <= 100 && secondMark <= 100 && thirdMark <= 100 && fourthMark <= 100)
    {
        printf("Final Grade: %.2f \n-------\n", finalGrade);

        if (finalGrade >= PASSING_GRADE)
        {
            printf("REMARKS: PASSED \n");
        }
        else
        {
            printf("REMARKS: FAILED \n");
        }
    }
    else
    {
        printf("------\nINVALID INPUT! \n");
    }

    getche();
    return 0;
}
