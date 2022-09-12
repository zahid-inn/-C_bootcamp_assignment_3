#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    num %3 == 0 && num %2 == 0 ? printf("Number is divisible"): printf("Number is not divisible");

    return 0;
}