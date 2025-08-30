/*
===============================================================================
FILE        : cortesBr_LE6_11.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that extracts and adds the two least significant digits of an integer.
COPYRIGHT   : October 27, 2024
REVISION HISTORY
Date:       By:             Description:
10/27/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <conio.h>

int extractFirstLSD(int numSeq);
int extractSecondLSD(int numSeq);
int sumDigits (int x, int y);


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
    int numSeq;

    printf("Integer Extractor v1.0 by Brylle, Josh, & Carlos \n-------------------\n");
    printf("Enter a number sequence: ");
    scanf("%d", &numSeq);

    printf("\nSolution: %d + %d =", extractFirstLSD(numSeq), extractSecondLSD(numSeq));

    int x = extractFirstLSD(numSeq);
    int y = extractSecondLSD(numSeq);

    printf(" %d \n", sumDigits(x, y));

    return 0;
}
/*
===============================================================================
FUNCTION    : extractFirstLSD
DESCRIPTION : Extracts the first least significant digit from the sequence
ARGUMENTS   : int numSeq - inputted number sequence
RETURNS     : int - calculated value of numSeq2
==============================================================================
*/

int extractFirstLSD(int numSeq)
{
    int numSeq2 = numSeq % 10;

    return numSeq2;
}

/*
===============================================================================
FUNCTION    : extractSecondLSD
DESCRIPTION : Extracts the second least significant digit from the sequence
ARGUMENTS   : int numSeq - inputted number sequence
RETURNS     : int - calculated value of numSeq3
==============================================================================
*/

int extractSecondLSD(int numSeq)
{
    int numSeq3 = (numSeq / 10) % 10;

    return numSeq3;
}

/*
===============================================================================
FUNCTION    : sumDigits
DESCRIPTION : Compute the sum of the two least significant digits
ARGUMENTS   : int x - value of the first LSD, int y - value of the second LSD
RETURNS     : int - calculated value of the sum
==============================================================================
*/

int sumDigits(int x, int y)
{
    int sum = x + y;

    return sum;
}
