//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main()
{
    int a,b,c;
    printf ("Enter three numbers:\n ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c)
    {
        printf("First number is the greatest number of the three.\n");
    }
    else if (b>a && b>c)
    {
        printf("Second number is the greatest number of the three.\n");
    }
    
    else if (c>a && c>b)
    {
        printf("Third number is the greatest number of the three.\n");
    }
    return 0;  
}