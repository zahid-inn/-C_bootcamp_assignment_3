#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter 1st Number\n");
    scanf("%d", &a);
    printf("Enter 2st Number\n");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if (b > a)
    {
        printf("%d is greater than %d", b, a);
    }
    else
    {
        printf("Both numbers are same");
    }

    return 0;
}