#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int input;
    int trials = 0;
    int trialsLeft = 3;
    int passcode = 12345;

    while (input != passcode && trials < 3)
    {
        ++trials;
        system("cls");

         if (trialsLeft == 2)
        {
            printf("(Try Again!)\n\n");
        }
        else if (trialsLeft == 1)
        {
            printf("(Last Chance!)\n\n");
        }

        printf("Input password: (%d Trials Left)\n--------------------------------\n", trialsLeft--);
        printf("[Input]: ");
        scanf("%d", &input);
    }

    if (trials == 3 && input != passcode)
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
