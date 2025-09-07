//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main ()
{
    int a;
    printf ("Enter the Integer:");
    scanf("%d",&a);
    if (a >= 0)
    {
        if (a == 0)
        {
            printf("The entered number is Zero.");
        }
        if (a>0)
        {
            printf("The entered number is Positive.");
        }
    }
    else
    {
    printf("The entered number is Negative.");
    }
    return 0;
}
