//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    int F,C;
    
    printf ("enter the temperature in Celsius:");
    scanf ("%d", &C);

    F=C * 1.8 + 32;
    printf ("the temperature in Fahrenheit is: %d", F);

    return 0;
}

