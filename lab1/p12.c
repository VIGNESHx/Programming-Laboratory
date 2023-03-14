//program-12

/*Write a C program that accepts two item’s weight (floating points' values ) and
number of purchase (floating points' values) and calculate the average value of the
items.*/

#include <stdio.h>

int main()
{
    float w1, w2, n1, n2;

    printf("Weight of item 1 : ");
    scanf("%f", &w1);

    printf("Weight of item 2 : ");
    scanf("%f", &w2);

    printf("number of item 1 : ");
    scanf("%f", &n1);

    printf("number of item 2 : ");
    scanf("%f", &n2);

    printf("Average Value = %f\n", ((n1 * w1) + (n2 * w2))/ (n1 + n2) );
}
