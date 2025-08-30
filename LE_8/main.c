#include <stdio.h>

char *daysName(int day);


int main(void)
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
