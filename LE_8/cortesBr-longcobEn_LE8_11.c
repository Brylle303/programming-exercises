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

===============================================================================
*/



#include <stdio.h>

char *daysName(int day);

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
    int day;
    printf("Enter day: ");
    scanf("%d", &day);

    if (day < 1 || day > 7)
    {
        printf("\nINVALID INPUT\n");
    }
    else
    {
        char *dayName = daysName(day);
        printf("\nDay of the week: %s\n", dayName);
    }

    return 0;
}

/*
===============================================================================
FUNCTION    : *daysName
DESCRIPTION : Stores the array of days
ARGUMENTS   : None
RETURNS     : int - exit code
==============================================================================
*/

 char *daysName(int day)
 {
    char *days[] =
    {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    return days[day - 1];
}
