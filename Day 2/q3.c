//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int l,b,a,p;

    printf("The length of the rectangle is:");
    scanf("%d", &l);

    printf("The breadth of the rectangle is:");
    scanf("%d", &b);

    a = l * b;
    p = 2 * (l + b);

    printf("The area of the rectangle is:%d\n", a);
    printf("The perimeter of the rectangle is:%d\n", p);

    return 0;

}
