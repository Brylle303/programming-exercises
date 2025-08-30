/*
===============================================================================
FILE        : cortesBr_LE5_12.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that will ask the correct numeric passcode before the user
              can continue his task.
COPYRIGHT   : October 1, 2024
REVISION HISTORY
Date:       By:             Description:
10/1/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
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
    int input;
    int trials = 3;
    int passcode = 12345;

    while (input != passcode && trials > 0)
    {
        system("cls");
        printf("Input password: (%d Trials Left)\n--------------------------------\n", trials--);
        printf("[Input]: ");
        scanf("%d", &input);
    }

    if (trials == 0 && input != passcode)
    {
        system("cls");
        printf("\n[ACCESS DENIED]\n--------------\n");
    }
    else
    {
        system("cls");
        printf("\n[ACCESS GRANTED]\n-----------------\n");
    }

    getche();
    return 0;
}
