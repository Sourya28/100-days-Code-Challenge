//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        sum += (2 * i); 
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}