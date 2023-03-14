//Program-6

/*Write a C program to find largest among two numbers*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Number a : ");
    scanf("%d", &a);

    printf("Enter Number b : ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a is greater than b");
    }
    else
    {
        printf("b is greater than a");
    }
}
