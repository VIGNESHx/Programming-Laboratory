//program - 16

/*Write a C Program where to enter two numbers & check if the 2nd number is a
multiple of first or not*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number a : ");
    scanf("%d", &a);

    printf("Enter a number b : ");
    scanf("%d", &b);

    if (b % a == 0)
    {
        printf("b is a multiple of a");
    }
    else
    {
        printf("b is not a multiple of a");
    }
}
