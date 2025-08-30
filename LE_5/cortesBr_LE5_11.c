/*
===============================================================================
FILE        : cortesBr_LE5_11.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that will ask 10 integers and display the average of all
              even numbers and the product of all odd numbers entered by the user.
COPYRIGHT   : October 1, 2024
REVISION HISTORY
Date:       By:             Description:
10/1/2024   Brylle Cortes   Created the program

===============================================================================
*/

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
    int userNum, i;
    int evenCounter = 0, oddCounter = 0;
    int sumEven = 0, productOdd = 1;
    float evenAverage;

    printf("Even / Odd Calculator (v1.0) by Brylle \n----------------------------\n");

    //Loop for entering 10 integers
    for (i=1; i<=10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &userNum);

        if(userNum %2 == 0)
        {
            evenCounter++;
            sumEven = sumEven + userNum;
        }
        else
        {
            oddCounter++;
            productOdd = productOdd * userNum;
        }
    }

    //Check if there are values and print the respective output if there is
    evenAverage = (float)sumEven / (float) evenCounter;

    if(oddCounter != 0)
    {
        printf("\n\nProduct of odd numbers: %d ", productOdd);
    }
    else
    {
        printf("\n\n[No odd numbers found!]");
    }


    if(evenCounter > 0)
    {
        printf("\nAverage of even numbers: %.2f", evenAverage);
    }
    else
    {
        printf("\n[No even numbers found!]\n");
    }

    getche();
    return 0;
}
