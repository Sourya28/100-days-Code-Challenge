#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("the numbers before swapping are %d and %d\n", a,b);

    a= a + b;
    b= a - b;
    a = a - b; 

    printf("the numbers after swapping are %d and %d", a,b);

    return 0;
}