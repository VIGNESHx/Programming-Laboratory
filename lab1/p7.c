//program-7

/*Write a C program to find simple interest. Principal amount, Rate of interest and
duration (in years) must be entered by the user.*/

#include <stdio.h>

int  main()
{
    int p,t,r;
    printf("Principal: ");
    scanf("%d", &p);

    printf("Rate of Interest: ");
    scanf("%d", &r);

    printf("Duration in years: ");
    scanf("%d", &t);

    printf("Simple Interest : %d", (p*t*r)/100);
}
