#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    if (num>0)
    {
        printf("Number is positive");
    }
    if (num<=0)
    {
        printf("Number is non-positive");
    }

    return 0;
    
}