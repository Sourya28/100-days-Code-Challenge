#include <stdio.h>

int main()
{
    float r,a,c;
    float pi=3.14;

    printf("Enter the radius of the circle:");
    scanf("%f", &r);

    a = pi * r * r;
    c = 2 * pi * r;
    
    printf("The area of the circle is:%f\n", a);
    printf("the circumference of the circle is:%f", c);

    return 0;
}