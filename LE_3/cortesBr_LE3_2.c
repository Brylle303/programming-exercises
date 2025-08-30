/*
===============================================================================
FILE        : cortesBr_LE3_2.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that extracts and adds the two least significant digits of an integer.
COPYRIGHT   : September 10, 2024
REVISION HISTORY
Date:       By:             Description:
9/10/2024   Brylle Cortes   Created the program
===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

/*
===============================================================================
FUNCTION    : main
DESCRIPTION : Executes the program
ARGUMENTS   : None
RETURNS     : integer
              returns 0; program exits successfully
==============================================================================
*/

int main()
{
    int numSeq;
    int numSeq2;
    int numSeq3;

    printf("Enter a number sequence: ");
    scanf("%d", &numSeq);
    numSeq2 = numSeq % 10;
    numSeq3 = (numSeq / 10) % 10;

    printf("\nSum: %d + %d =", numSeq2, numSeq3);
    printf("\t %d", numSeq2 + numSeq3);

    return 0;
}
