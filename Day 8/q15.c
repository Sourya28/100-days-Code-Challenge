//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main()
{
    char character;
    printf("Enter the Chracter:");
    scanf("%c", &character);

    if (character>='A' && character<='Z')
    {
        printf("THe character is in upercase.\n");
    }
    else if(character>='a' && character<='z')
    {
        printf("The character is in lowercase.\n");
    }
    else if (character>='0' && character<='9')
    {
        printf("The character is a digit.\n");
    }
    else
    printf("The character is a special character.\n");

    return 0;
}