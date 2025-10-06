//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
    float cp, sp , margin, profit,loss;
    printf("Enter the Selling Price and Cost Price:");
    scanf("%f %f", &sp,&cp);

    margin = sp - cp;

    if (margin>0)
    {
        profit= (margin/cp)*100;
        printf("The profit percentage is %.2f percent", profit);
    }
    else if(margin<0)
    {
        loss = (-margin/cp)*100;
        printf("The loss percentage is %.2f percent", loss);
    }
    return 0;
}