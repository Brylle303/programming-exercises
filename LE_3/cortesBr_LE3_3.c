/*
===============================================================================
FILE        : cortesBr_LE3_3.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that prints the tuition for 2 semesters alongside the
              registration fee, unit fee and penalty fee (for each 12 units).
COPYRIGHT   : September 10, 2024
REVISION HISTORY
Date:       By:             Description:
9/10/2024   Brylle Cortes   Created the program
9/10/2024   Brylle Cortes   Replaced format specifier in line 41 & 43 to float
                            specifier
9/10/2024   Brylle Cortes   Casted "float" data type on variables "penaltyFee",
                            "firstSem", and "secondSem" in line 46 and 47 in
                            order to output a floating point
===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

/*
===============================================================================
FUNCTION    : main
DESCRIPTION : Executes the program
ARGUMENTS   : None
RETURNS     : constant
              integer
              float
              returns 0; program exits successfully
==============================================================================
*/

int main()
{
    const int penaltyFee = 2260;
    const int unitFee = 450;
    const int regFee = 450;
    int firstSem, secondSem;
    float firstTuition, secondTuition;

    printf("Welcome to Tuition Fee Calculator! \n");
    printf("Enter first sem units\t: ");
    scanf("%d", &firstSem);
    printf("Enter second sem units\t: ");
    scanf("%d", &secondSem);

    firstTuition = firstSem * unitFee + regFee + ((float)penaltyFee * ((float)firstSem / 12));
    secondTuition = secondSem * unitFee + regFee + ((float)penaltyFee * ((float)secondSem / 12));

    printf("Tuition fee for first sem\t: %.2f \n", firstTuition);
    printf("Tuition fee for second sem\t: %.2f \n", secondTuition);
    printf("Total tuition fee\t: %.2f \n", firstTuition + secondTuition);

    return 0;
}
