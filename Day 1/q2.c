//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main ()
{
    int a,b,sum,diff,prod,quot;

    printf("Input the first number:");
    scanf("%d", &a);

    printf("Input the second number:");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;

    printf("The sum of the numbers is:%d\n", sum);
    printf("The difference of the numbers is:%d\n", diff);
    printf("The product of the numbers is:%d\n", prod);
    printf("The quotient of the numbers is:%d\n", quot);
    
    return 0;

}
