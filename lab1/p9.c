//program-9

/*Write a C program to find area and circumference of circle if radius is given.*/

int main()
{
    float r;
    printf("radius: ");
    scanf("%f", &r);

    printf("Area of circle : %f\nCircumference of Circle : %f\n", 3.14 * (r * r), 2 * 3.14 * r);
}
