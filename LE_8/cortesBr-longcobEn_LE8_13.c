/*
===============================================================================
FILE        : cortesBr-longcobEn_LE8_11.c
AUTHOR      : Brylle Cortes & Enzo Longcob
DESCRIPTION : Program that allows a user to enter 10 numbers, then displays all
              of the numbers, the largest number, and the smallest.
COPYRIGHT   : November 24, 2024
REVISION HISTORY
Date:       By:             Description:
11/24/2024  Cortes          Created the program

===============================================================================
*/


#include <stdio.h>
#include <stdlib.h>

int searchElement(int *array, int entries, int data);


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
    int entries, data, result;

    printf("Enter number of entries: ");
    scanf("%d", &entries);

    int userNum[entries];

    for(int i=0; i < entries; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &userNum[i]);
    }

    printf("\nSearch data: ");
    scanf("%d", &data);

    result = searchElement(userNum, entries, data);

    if(result < 0)
    {
        printf("NOT FOUND\n");
    }
    else
    {
        printf("FOUND in Index %d", result);
    }

    return 0;
}

/*
===============================================================================
FUNCTION    : main
DESCRIPTION : Executes the main program
ARGUMENTS   : None
RETURNS     : int - exit code
==============================================================================
*/

int searchElement(int *array, int entries, int data)
{
    int indexNum = -1;

    for(int i=0; i < entries; i++)
    {
        if(*(array + i) == data)
        {
            indexNum = i;
        }
    }

    return indexNum;
}

