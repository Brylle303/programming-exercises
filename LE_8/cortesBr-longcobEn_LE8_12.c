/*
===============================================================================
FILE        : cortesBr-longcobEn_LE8_11.c
AUTHOR      : Brylle Cortes & Enzo Longcob
DESCRIPTION : Program that allows a user to enter 10 numbers, then displays all
              of the numbers, the largest number, and the smallest.
COPYRIGHT   : November 24, 2024
REVISION HISTORY
Date:       By:             Description:
11/24/2024  Longcob         Created the program
11/25/2024  Cortes          Moved "int check[num]" from line 23 to line 27

===============================================================================
*/

#include <stdio.h>

int findmax(int *arr, int num);

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
    int num, i;

    printf("Enter number of entries: ");
    scanf("%d", &num);

    int check[num];

    for (i = 0; i < num; i++)
    {
        printf("Enter number: ");
        scanf("%d", &check[i]);
    }

    printf("\nMaximum Number: %d\n", findmax(check, num));

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

int findmax(int *arr, int num)
{
    int max = *arr;
    for (int i = 1; i < num; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}
