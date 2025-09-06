//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
    float A,P,R,N,T;
    float CI,SI;
    printf ("Enter the Principal:");
    scanf("%f", &P);
    printf("Enter the Rate of Interest:");
    scanf("%f", &R);
    printf("Enter the Time (in Years):");
    scanf("%f", &T);

    SI = (P*R*T)/100;

    A = P * pow(1 + R/100 , T);

    CI = A - P;
    printf("\nThe Simple Interest is: %f", SI);
    printf("\nThe Compund Interest is: %f", CI);
    return 0;

}
