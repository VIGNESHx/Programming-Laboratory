//program- 13

/*Write a C program that accepts three integers and find the maximum of three.*/

#include <stdio.h>

int main()
{

    int a, b ,c;

    printf("Enter Number a : ");
    scanf("%d", &a);

    printf("Enter Number b : ");
    scanf("%d", &b);

    printf("Enter Number c : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("Maximum : %d", a);
    }
    else if (b > a && b > c)
    {
        printf("Maximum : %d", b);
    }
    else
    {
        printf("Maximum : %d", c);
    }
}
