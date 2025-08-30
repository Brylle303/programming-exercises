/*
===============================================================================
FILE        : cortesBr_LE4_1.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that determines whether the letter entered by the user
              is vowel or consonant.
COPYRIGHT   : September 23, 2024
REVISION HISTORY
Date:       By:             Description:
9/23/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/*
===============================================================================
FUNCTION    : main
DESCRIPTION : Executes the main program
ARGUMENTS   : None
RETURNS     : int - exit code
==============================================================================
*/


int main()
{
    char letter;

    printf("Enter a letter\t: ");
    letter = getchar();

    if (letter >= 65 && letter <= 90 || letter >= 97 && letter <= 122)
    {
        if (letter == 65 || letter == 69 || letter == 73 || letter == 79 || letter == 85 || letter == 97 || letter == 101 || letter == 102 || letter == 105 || letter == 111 || letter == 117)
        {
            printf("RESULT\t\t: Vowel \n");
        }
        else
        {
            printf("RESULT\t\t: Consonant \n");
        }
    }
    else
    {
        printf("Invalid Character \n");
    }

    getche();
    return 0;
}
