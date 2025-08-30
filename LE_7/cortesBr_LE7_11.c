/*
===============================================================================
FILE        : cortesBr_LE7_11.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that allows a user to enter 10 numbers, then displays all
              of the numbers, the largest number, and the smallest.
COPYRIGHT   : November 11, 2024
REVISION HISTORY
Date:       By:             Description:
11/11/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareLarge(int num[]);
int compareSmall(int num[]);



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
    int num[10];

    for(int i=0; i < 10; i++)
    {
        printf("Enter number #%d \t: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nAll numbers: ");

    for(int i=0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\nLargest: %d ", compareLarge(num));
    printf("\nSmallest: %d \n", compareSmall(num));

    return 0;
}

/*
===============================================================================
FUNCTION    : compareLarge
DESCRIPTION : Compares the inputed numbers and finds the largest one.
ARGUMENTS   : int num[] - array of inputted numbers
RETURNS     : int - largest number out of all inputted numbers
==============================================================================
*/

int compareLarge(int num[])
{
    int largest = num[0];

    for(int i = 0; i < 10; i++)
    {
        if(num[i] > largest)
        {
            largest = num[i];
        }
    }

    return largest;
}

/*
===============================================================================
FUNCTION    : compareSmall
DESCRIPTION : Compares the inputted numbers and finds the smallest one.
ARGUMENTS   : int num[] - array of inputted numbers
RETURNS     : int - smallest number out of all inputted numbers
==============================================================================
*/

int compareSmall(int num[])
{
    int smallest = num[0];

    for(int i=0; i < 10; i++)
    {
        if(num[i] < (smallest))
        {
            smallest = num[i];
        }
    }

    return smallest;
}
