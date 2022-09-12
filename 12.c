#include <stdio.h>

int main()
{
    char Alpha;

    printf("Enter one alphabet\n");
    scanf("%c", &Alpha);

    if (Alpha >= 65 && Alpha <= 90)
    {
        printf("Alphabet is in Uppercase");
    }
    else if (Alpha >= 97 && Alpha <= 122)
    {
        printf("ALphabet is in Lowercase");
    }
    else
    {
        printf("It is not an Alphabet");
    }
    return 0;
}