/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
#include <stdio.h>

int main()
{
    int late, penalty;

    printf("Enter the number of late days:");
    scanf("%d", &late);

    if (0 <= late && late <= 5)
    {
        penalty = 2 * late;
        printf("The penalty is %d Rupees", penalty);
    }
    else if(late >= 5 && late <= 10)
    {
        penalty = 10 + (late - 5) * 4;
        printf("The penalty is %d Rupees", penalty);
    }
    else if(late >= 10 && late <= 30)
    {
        penalty = 10 + 20 + (late - 10) * 6;
        printf("The penalty is %d Rupees", penalty);
    }
    else 
    {
        printf ("The penalty is Membership Cancellation");
    }
    return 0;
}