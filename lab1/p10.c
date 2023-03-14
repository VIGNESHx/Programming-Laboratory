//program-10

/*Write a C program to compute the perimeter and area of a rectangle with a height of 7
inches. and width of 5 inches.*/

#include <stdio.h>

int main()
{
    int h = 7, w = 5;

    printf("Perimeter : %d inches\nArea : %d sq. inches\n", 2*(h + w), h * w );
}
