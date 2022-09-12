#include <stdio.h>

int main()
{
    int year;

    printf("Enter year\n");
    scanf("%d", &year);

    year % 4 == 0 ? printf("It is a Leap Year"): printf("It is not a Leap Year");
    return 0;
}