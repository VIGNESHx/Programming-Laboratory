//program- 17

/*Write a C program to print the following 3 digit number in a reverse way.
Test integer: 321
Expected Output:
The reverse of 321 is 123*/

#include <stdio.h>

int main()
{
    int r = 0, a, d;
    printf("Enter a number : ");
    scanf("%d", &a);
    while (a > 0)
    {
        d = a % 10;
        r = r * 10 + d;
        a = a / 10;
    }
    printf("%d", r);
}
