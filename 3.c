#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    if (num % 2 != 0)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is Even");
    }
    
    return 0;
}
