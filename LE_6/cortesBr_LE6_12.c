/*
===============================================================================
FILE        : cortesBr_LE6_12.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that determines whether the letter entered by the user
              is vowel or consonant.
COPYRIGHT   : October 27, 2024
REVISION HISTORY
Date:       By:             Description:
10/27/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

bool isLetter(char ch);
bool isVowel(char ch);

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
    char ch;

    printf("Enter a letter\t: ");
    ch = getchar();

    if (isLetter(ch))
    {
        if (isVowel(ch))
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
        printf("\nInvalid Character \n");
    }

    getche();
    return 0;
}

/*
===============================================================================
FUNCTION    : isLetter
DESCRIPTION : Checks whether the character is a valid letter or not
ARGUMENTS   : char ch - inputted character
RETURNS     : bool - 1 if letter, 0 if not
==============================================================================
*/

bool isLetter(char ch)
{

    bool flag = (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)? 1 : 0;

    return flag;
}

/*
===============================================================================
FUNCTION    : isVowel
DESCRIPTION : Checks whether the inputted character is a vowel or not
ARGUMENTS   : char ch - inputted character
RETURNS     : bool - 1 for vowel, 0 for consonant
==============================================================================
*/

bool isVowel(char ch)
{
    bool flag = (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 || ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117)? 1 : 0;

    return flag;
}
