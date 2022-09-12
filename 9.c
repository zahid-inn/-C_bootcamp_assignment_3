#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three digits\n1st 2nd 3rd\n");
    scanf("%d %d %d", &a, &b, &c);

    // if (a>=b && a>=c)
    // {
    //     printf("%d is greater than other numbers", a);
    // }
    // else if(b>=a && b>=c)
    // {
    //     printf("%d is greater than other numbers", b);
    // }
    // else if(c>=a && c>=b)
    // {
    //     printf("%d is greater than other numbers", c);
    // }

    // OR

    printf("%d", a>b ? a>c ? a:c : b>c ? b:c );
    
    return 0;
}