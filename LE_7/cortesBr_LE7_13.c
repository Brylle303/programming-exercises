/*
===============================================================================
FILE        : cortesBr_LE7_13.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that finds and displays the longest of 5 input strings.
COPYRIGHT   : November 11, 2024
REVISION HISTORY
Date:       By:             Description:
11/11/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longestString(char stringInputs[][30]);

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
    int result;
    char userStrings[5][30];

    for(int i=0; i < 5; i++)
    {
        printf("Enter string #%d: ", i + 1);
        gets(userStrings[i]);

    }

    result = longestString(userStrings);

    printf("\nLongest is: %s\n", userStrings[result]);

    return 0;
}

/*
===============================================================================
FUNCTION    : longestString
DESCRIPTION : Compares the 5 strings and determines the longest among them.
ARGUMENTS   : char stringInputs[][30] - inputted strings
RETURNS     : int - index value of which string is the longest
==============================================================================
*/

int longestString(char stringInputs[][30])
{
    int longestStr = 0;
    int record = 0;

    for (int i = 0; i < 5; i++) {
        if (strlen(stringInputs[i]) > longestStr) {
            longestStr = strlen(stringInputs[i]);
            record = i;
        }
    }

    return record;
}
