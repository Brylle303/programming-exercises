/*
===============================================================================
FILE        : cortesBr_LE4_2.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that computes the real roots of a quadratic equation.
COPYRIGHT   : September 23, 2024
REVISION HISTORY
Date:       By:             Description:
9/23/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

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
    float a, b, c;
    float discriminant;

    printf("Enter value for a \n");
    scanf("%f", &a);
    printf("Enter value for b \n");
    scanf("%f", &b);
    printf("Enter value for c \n");
    scanf("%f", &c);

   // printf("Here are the values %d %d %d", a, b, c);

    discriminant = (b * b) - ( 4 * (a * c) );

    if (a == 0 && b == 0)
    {
        printf("\nNo solution \n");
    }
    else if (a == 0)
    {
        printf("\nThe root is %.2f (Only one root) \n", (-c / b);

    }
    else if (discriminant < 0)
    {
        printf("\nNo real roots \n");
    }
    else
    {
        printf("\nThe roots are: %.2f and %.2f \n", (-b - sqrt(discriminant)) / (2 * a) , (-b + sqrt(discriminant)) / (2 * a) );
    }

    getche();
    return 0;
}

