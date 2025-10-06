/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>

int main()
{
    int unit, cost;

    printf("Enter the number of units consumed:");
    scanf("%d", &unit);

    if (0 <= unit && unit <= 100)
    {
        cost = 5 * unit;
        printf("The electricity bill is %d Rupees", cost);
    }
    else if(unit > 100 && unit <= 200)
    {
        cost = 500 + (unit - 100) * 7;
        printf("The electricity bill is %d Rupees", cost);
    }
    else if(unit > 200 && unit <= 300)
    {
        cost = 500 + 700 + (unit - 200) * 10;
        printf("The electricity bill is %d Rupees", cost);
    }
    else 
    {
        cost = 1000 + 500 + 700 + (unit - 300) * 12;
        printf("The electricity bill is %d Rupees", cost);
    }
    return 0;
}