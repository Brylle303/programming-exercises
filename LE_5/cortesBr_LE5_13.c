/*
===============================================================================
FILE        : cortesBr_LE5_13.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that lets the user choose an operation (power problem solver,
              factorial problem solver, or finding roots for quadratic equations using
              quadratic formula) from the menu.
COPYRIGHT   : October 1, 2024
REVISION HISTORY
Date:       By:             Description:
10/1/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

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
    int menuChecker = 0;
    char userSelection;

    do
    {
        system("cls");
        printf("Problem Solver Menu v1.0 by Brylle \n-------------------------------------------\n");
        printf("[A] Power Solver \n[B] Factorial Solver \n[C] Quadratic Roots Solver \n[D] EXIT");
        printf("\n==========================================\nChoose an operation from the list above\n\n[CHOICE]: ");
        scanf("%c", &userSelection);
        userSelection = toupper(userSelection);

        if (userSelection == 'A' || userSelection == 'B' || userSelection == 'C')
        {
            system("cls");
            printf("[Choice Confirmed] \n------------------\n");

            if(userSelection == 'A') // POWER SOLVER
            {
                int numP, numPow, answer, countPow = 0;

                printf("[POWER SOLVER]\nInput number: ");
                scanf("%d", &numP);
                printf("Input power: ");
                scanf("%d", &numPow);

                while(countPow != numPow)
                {
                    countPow++;
                    answer = numP * numP;
                }

                    printf("Answer: %d\n------\n", answer);
                    getche();
            }

            else if(userSelection == 'B') // FACTORIAL
            {
                int numFactorial, factorial = 1, i;

                printf("[FACTORIAL]\nInput integer: ");
                scanf("%d", &numFactorial);

                if(numFactorial < 0)
                {
                    printf("\nNO NEGATIVE!!!");
                    getche();
                }
                else
                {
                    for(i=1; i<=numFactorial; i++)
                    {
                        factorial = factorial * i;
                    }

                    printf("Factorial of %d is %d\n", numFactorial, factorial);
                    getche();
                }

            }

            else if(userSelection == 'C') // QUADRATIC
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
                    printf("\nThe root is %.2f (Only one root) \n", (-c / b) );

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
            }


        }
        else if (userSelection == 'D') // EXIT
        {
            system("cls");
            printf("\n[EXIT CONFIRMED!]\n");
            menuChecker = 1;
        }

    } while (menuChecker != 1);

    return 0;
}
