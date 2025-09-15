/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/
#include <stdio.h>
int main()
{
    int percentage;

    printf("Enter the percentage achieved:");
    scanf("%d", &percentage);

    if (percentage>=90 && percentage<=100)
    {
        printf("They have achieved A grade.");
    }
    else if (percentage>=80 && percentage<=89)
    {
        printf("They have achieved B grade.");
    }
    else if (percentage>=70 && percentage<=79)
    {
        printf("They have achieved C grade.");
    }
    else if (percentage>=60 && percentage<=69)
    {
        printf("They have achieved D grade.");
    }
    else
    printf("THey have achieved F grade.");

    return 0;
}