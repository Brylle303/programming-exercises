#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    int menuChecker = 0;
    char userSelection;

    do
    {
        printf("Problem Solver Menu v1.0 by Brylle \n----------------------------------------------\n");
        printf("[A] Power Solver \n[B] Factorial Solver \n[C] Quadratic Roots Solver");
        printf("\n==========================================\nChoose an operation from the list above\n\n[CHOICE]: ");
        scanf("%c", &userSelection);
        userSelection = toupper(userSelection);

        if (userSelection == 'A' || userSelection == 'B' || userSelection == 'C')
        {
            menuChecker = 1;
        }
        else
        {
            system("cls");
            printf("(Invalid option!)\n");
        }

    } while (menuChecker != 1);

    system("cls");
    printf("[Choice Confirmed] \n------------------\n");

    return 0;
}
