#include <stdio.h>

int main()
{
    char Alpha;

    printf("Enter Anything\n");
    scanf("%c", &Alpha);

    if (Alpha >= 65 && Alpha <= 90)
    {
        printf("Alphabet in Uppercase");
    }
    else if (Alpha >= 97 && Alpha <= 122)
    {
        printf("ALphabet in Lowercase");
    }
    else if (Alpha > 31 && Alpha < 48 || Alpha > 57 && Alpha < 65 || Alpha > 90 && Alpha < 97 || Alpha > 122 && Alpha < 127)
    {
        printf("It is a Special character");
    }
    else
    {
        printf("It is a Digit");
    }
}