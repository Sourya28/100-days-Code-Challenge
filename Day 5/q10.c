#include <stdio.h>

int main ()
{
    int s, H,M,S;
    printf("ENter the time in seconds:");
    scanf("%d", &s);
    H = s/3600;
    M = (s % 3600) / 60;
    S = s % 60;

    printf("\nThe time is %d hrs %d mins %d secs", H ,M, S);
    return 0;
}