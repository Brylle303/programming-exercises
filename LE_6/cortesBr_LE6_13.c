/*
===============================================================================
FILE        : cortesBr_LE6_13.c
AUTHOR      : Brylle Gilbert F. Cortes
DESCRIPTION : Program that lets the user choose an operation (power problem solver,
              factorial problem solver, or finding roots for quadratic equations using
              quadratic formula) from the menu.
COPYRIGHT   : October 27, 2024
REVISION HISTORY
Date:       By:             Description:
10/27/2024   Brylle Cortes   Created the program

===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>

void displayMenu ();
int powerSolver (int base, int p);
int factorialSolver (int num);
float quadraticSolver (float a, float b, float c);

float root1, root2;
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
        displayMenu();

        scanf("%c", &userSelection);
        userSelection = toupper(userSelection);

        if (userSelection == 'A' || userSelection == 'B' || userSelection == 'C')
        {
            system("cls");
            printf("[Choice Confirmed] \n------------------\n");

            if(userSelection == 'A') // POWER SOLVER
            {
                int base, p;

                printf("[POWER SOLVER]\nInput number: ");
                scanf("%d", &base);
                printf("Input power: ");
                scanf("%d", &p);

                printf("\nAnswer: %d\n------\n", powerSolver(base, p));

                getche();
            }

            else if(userSelection == 'B') // FACTORIAL
            {
                int num;

                printf("[FACTORIAL]\nInput integer: ");
                scanf("%d", &num);

                if(num < 0)
                {
                    printf("\nNO NEGATIVE!!!");
                    getche();
                }
                else
                {
                    printf("\nFactorial is: %d", factorialSolver(num));
                }

                getche();
            }

            else if(userSelection == 'C') // QUADRATIC
            {
                float a, b, c;

                printf("Enter value for a \n");
                scanf("%f", &a);
                printf("Enter value for b \n");
                scanf("%f", &b);
                printf("Enter value for c \n");
                scanf("%f", &c);

                int flag = quadraticSolver(a, b, c);

                if (flag == 1)
                {
                    printf("\nNo solution \n");
                }
                else if (flag == 2)
                {
                    printf("\nThe root is %.2f (Only one root) \n", (-c / b) );

                }
                else if (flag == 3)
                {
                    printf("\nNo real roots \n");
                }
                else if (flag == 4)
                {
                    printf("\nThe roots are: %.2f and %.2f \n", root1 , root2);
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


/*
===============================================================================
FUNCTION    : displayMenu
DESCRIPTION : Displays the problem solver menu
ARGUMENTS   : void
RETURNS     : void
==============================================================================
*/

void displayMenu()
{
    system("cls");
    printf("Problem Solver Menu v1.0 by Brylle, Josh, & Carlos \n-------------------------------------------\n");
    printf("[A] Power Solver \n[B] Factorial Solver \n[C] Quadratic Roots Solver \n[D] EXIT");
    printf("\n==========================================\nChoose an operation from the list above\n\n[CHOICE]: ");

    return;
}


/*
===============================================================================
FUNCTION    : powerSolver
DESCRIPTION : Calculates for the result of a base raised to a certain power
ARGUMENTS   : int base - inputted base, int p - inputted power
RETURNS     : int - calculated result
==============================================================================
*/

int powerSolver(int base, int p)
{
    int answer = pow(base, p);

    return answer;
}


/*
===============================================================================
FUNCTION    : factorialSolver
DESCRIPTION : Calculates for the factorial of a number
ARGUMENTS   : int num - inputted number
RETURNS     : int - calculated factorial of the number
==============================================================================
*/

int factorialSolver(int num)
{
    int factorial = 1, i;

    for(i=1; i<=num; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}


/*
===============================================================================
FUNCTION    : quadraticSolver
DESCRIPTION : Solves for the value of the discriminant and flags if there are roots or not
ARGUMENTS   : float a - inputted number, float b - inputted number, float c - inputted number
RETURNS     : int - calculated factorial of the number
==============================================================================
*/

float quadraticSolver(float a, float b, float c)
{
     int flag;
     int discriminant = (b * b) - ( 4 * (a * c) );

      if (a == 0 && b == 0)
        {
            flag = 1;
        }
        else if (a == 0)
        {
            flag = 2;

        }
        else if (discriminant < 0)
        {
            flag = 3;
        }
        else
        {
            flag = 4;
            root1 = (-b - sqrt(discriminant)) / (2 * a);
            root2 = (-b + sqrt(discriminant)) / (2 * a);
        }

    return flag;
}
