//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main ()
{
    int a;
    printf ("Enter the Integer:");
    scanf("%d",&a);
    if (a%2 == 0)
    {
       printf("The entered number is even.");
    }
    else
    printf("The entered number is odd.");
    return 0;
}
