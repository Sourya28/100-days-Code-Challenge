#include <stdio.h>
int main ()
{
    float a,b,sum;

    printf("Input the first number:");
    scanf("%f", &a);

    printf("Input the second number:");
    scanf("%f", &b);

    sum = a + b;

    printf("The Sum of the two numbers is:%f", sum);

    return 0;
}