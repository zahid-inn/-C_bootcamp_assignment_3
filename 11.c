#include <stdio.h>

int main()
{
    int eng, math, sci, hin, cp;

    printf("Enter English marks\n");
    scanf("%d", &eng);
    printf("Enter Mathematics marks\n");
    scanf("%d", &math);
    printf("Enter Science marks\n");
    scanf("%d", &sci);
    printf("Enter Hindi marks\n");
    scanf("%d", &hin);
    printf("Enter C programming marks\n");
    scanf("%d", &cp);

    if (eng <= 100 && math <= 100 && sci <= 100 && hin <= 100 && cp <= 100)
    {

        if (eng < 33)
        {
            printf("You have failed in English hence you have failed overall\n");
        }
        else if (math < 33)
        {
            printf("You have failed in Mathematics hence you have failed overall\n");
        }
        else if (sci < 33)
        {
            printf("You have failed in Science hence you have failed overall\n");
        }
        else if (hin < 33)
        {
            printf("You have failed in Hindi hence you have failed overall\n");
        }
        else if (cp < 33)
        {
            printf("You have failed in Computer programming hence you have failed overall\n");
        }
        else
        {
            printf("You have passed");
        }
    }
    else
    {
        printf("You have entered wrong marks");
    }

    return 0;
}