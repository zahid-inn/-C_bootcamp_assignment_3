#include <stdio.h>

int main()
{
    int sp, cp;
    float p, l;

    printf("Enter Cost price\n");
    scanf("%d", &cp);
    printf("Enter Selling price price\n");
    scanf("%d", &sp);

    if (cp > sp)
    {
        l = cp - sp;
        l = l / cp * 100;
        printf("You have %f percent loss", l);
    }
    else
    {
        p = sp - cp;
        p = p / cp * 100;
        printf("You have %f percent profit", p);

    }

    return 0;
}