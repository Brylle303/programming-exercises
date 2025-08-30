#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, i, b;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    int space = rows - 1;

    for(i = 0; i < rows; i++)
    {
        for(b = 0; b < space; b++)
        {
            printf(" ");
        }

        for(b = 0; b < i + 1; b++)
        {
            printf("%d", b + 1);
        }

        for(b = i; b != 0; b--)
        {
            printf("%d", b);
        }

        space--;
        printf("\n");
    }

    return 0;
}
