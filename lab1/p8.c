//program-8

/*Program to add, subtract, multiply and divide two numbers entered by the user.*/

#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter number a : ");
    scanf("%f", &a);

    printf("Enter number b : ");
    scanf("%f", &b);

    printf("add : %f\nsubtract : %f\nmultiply : %f\ndivide : %f\n", a + b, a - b, a * b, a / b);
}
