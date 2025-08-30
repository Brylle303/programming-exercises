#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, a, b, limit, result = 1;

    printf("Fibonacci Number Sequencer (v1.0)\n-------\n");
    printf("Enter limit: ");
    scanf("%d", &limit);
    printf("\nSequence: ");

    for(i=0; i < limit; i++)
    {
        printf("%d ", result);
        a = b;
        b = result;
        result = a + b;
    }

    printf("\n");

    return 0;
}
