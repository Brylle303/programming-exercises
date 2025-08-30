/*
===============================================================================
FILE        : cortesBr_LE7_12.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that determines the number of vowels and consonant from a
              given string.
COPYRIGHT   : November 11, 2024
REVISION HISTORY
Date:       By:             Description:
11/11/2024   Brylle Cortes   Created the program

===============================================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vowelChecker(char userInput[], int vowelCnt);
int consonantChecker(char userInput[], int consonantCnt);

char vowels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u', '\0'};


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
    char stringInput[100];
    int vowelCnt = 0, consonantCnt = 0, len;

    printf("Input the string: ");
    gets(stringInput);

    printf("\nNumber of vowels: %d", vowelChecker(stringInput, vowelCnt));
    printf("\nNumber of consonant: %d\n", consonantChecker(stringInput, consonantCnt));

    return 0;
}

/*
===============================================================================
FUNCTION    : vowelChecker
DESCRIPTION : Checks if the letter is a vowel or not
ARGUMENTS   : char userInput[] - inputted string, int vowelCnt - vowel counter
RETURNS     : int - number of vowels in the string
==============================================================================
*/

int vowelChecker(char userInput[], int vowelCnt)
{

    for(int i=0; i < strlen(userInput); i++)
    {
        for(int a=0; a < 10; a++)
        {
            if(userInput[i] == vowels[a])
            {
                vowelCnt++;
            }
        }

    }

    return vowelCnt;
}

/*
===============================================================================
FUNCTION    : consonantChecker
DESCRIPTION : Checks if the letter is a consonant or not
ARGUMENTS   : char userInput[] - inputted string, int consonantCnt - consonant counter
RETURNS     : int - number of consonants in the string
==============================================================================
*/

int consonantChecker(char userInput[], int consonantCnt)
{
    for(int i=0; i < strlen(userInput); i++)
    {
        if((userInput[i] >= 'A' && userInput[i] <= 'Z') || (userInput[i] >= 'a' && userInput[i] <= 'z'))
        {

            if(userInput[i] != vowels[0] && userInput[i] != vowels[1] && userInput[i] != vowels[2] && userInput[i] != vowels[3] && userInput[i] != vowels[4] && userInput[i] != vowels[5] && userInput[i] != vowels[6] && userInput[i] != vowels[7] && userInput[i] != vowels[8] && userInput[i] != vowels[9])
            {
                consonantCnt++;
            }
        }
    }

    return consonantCnt;
}



