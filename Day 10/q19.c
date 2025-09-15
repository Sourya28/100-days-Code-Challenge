//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    float a, b , c;
    printf("enter the first side :");
    scanf("%f", &a);
    printf("enter the second side :");
    scanf("%f", &b);
    printf("enter the third side :");
    scanf("%f", &c);
    if("a + b > c && b + c > a && a + c > b")
    {
        if (a == b && b == c && a == c)
        {
            printf("it is a valid equilateral triangle ");
        }
        else if("a == b && b != c")
        {
            printf("it is a valid isoceles triangle ");
        }
        else if(" a != b && a != c && b != c")
        {
            printf("it is a valid scalene triangle");
        }
        else if(" a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b")
        {
            printf("it is a valid right angled triangle");
        }
    }
    else
    {
        printf("this triangle is not valid");
    }
    return 0;
}