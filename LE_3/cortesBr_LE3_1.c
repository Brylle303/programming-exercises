/*
===============================================================================
FILE        : cortesBr_LE3_1.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that asks for user�s yearly pay and displays his weekly pay
COPYRIGHT   : September 10, 2024
REVISION HISTORY
Date:       By:             Description:
9/10/2024   Brylle Cortes   Created the program
9/10/2024   Brylle Cortes   Replaced "yearlyPay" data type to float from
                            int (line 31)
9/10/2024   Brylle Cortes   Specified decimal point in format specifier
                            (line 35)
===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

/*
===============================================================================
FUNCTION    : main
DESCRIPTION : Executes the program
ARGUMENTS   : None
RETURNS     : float
              returns 0; program exits successfully
==============================================================================
*/

int main()
{
    const int weeksPerYear = 52;
    float yearlyPay;

    printf("Input your yearly pay: \n");
    scanf("%f", &yearlyPay);

    printf("Your weekly pay is: %.2f\n", yearlyPay / weeksPerYear);

    return 0;
}
