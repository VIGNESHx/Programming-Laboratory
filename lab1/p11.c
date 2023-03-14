//program- 11

/*Write a C program that accepts two integers from the user and calculate the sum &
product of the two integers.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a : ");
    scanf("%d", &a);

    printf("Enter number b : ");
    scanf("%d", &b);

    printf("Sum = %d\nProduct = %d\n", a + b, a * b);
}
