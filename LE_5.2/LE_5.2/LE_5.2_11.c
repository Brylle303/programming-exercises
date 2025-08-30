#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, column, row, product;
    int line;

    printf("Input number of column: ");
    scanf("%d", &column);
    printf("Input number of rows: ");
    scanf("%d", &row);

    for(line=0; line <= column; line++)
    {
        printf(" ----\t");
    }

    printf("\n");

    for(i=1; i <= row; i++)
    {
        printf("| %d\t", i);

        for(a=1; a <= column; a++)
        {
            product = a * i;
            printf("%d\t", product);

        }
        printf("\n| \n");
    }


    return 0;
}
