#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int userNum, i;
    int evenCounter = 0, oddCounter = 0;
    int oddNum, sumEven = 0, productOdd = 1;
    float evenAverage;

    printf("Even / Odd Calculator (v1.0.0) \n----------------------------\n");
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
