#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number\n");
    scanf("%d", &month);

    if (month > 12 || month < 1)
    {
        printf("Error");
    }

    if (month == 2)
    {
        printf("This month may have 28 or 29 days");
    }

    if (month > 0 && month < 8)
    {
        month % 2 == 0 ? printf("This month has 30 days") : printf("This month has 31 days");
    }
    else if (month > 7 && month < 13)
    {
        month % 2 == 0 ? printf("This month has 31 days") : printf("This month has 30 days");
    }

    return 0;
}