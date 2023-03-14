//Program-5

/*Write a C program to convert temperature from degree centigrade to Fahrenheit.*/
#include <stdio.h>

int main()
{
    int c, f;
    printf("Enter temperature in centigrade: ");
    scanf("%d", &c);

    f = (c*1.8)+32;

    printf("%d centigrade is equal to %d Fahrenheit", c, f);

}
