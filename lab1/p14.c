// program - 14

/*Write a C program to calculate a bike’s average consumption from the given total
distance (integer value) travelled (in km) and spent fuel (in liters, float number – 2
decimal point).*/

int main()
{
    int distance;
    float fuel;

    printf("Distance travelled ( in Km ): ");
    scanf("%d", &distance);

    printf("Fuel Spent (in Litres) : ");
    scanf("%2f", &fuel);

    printf("Average consumption of bike : %2f", distance / fuel);
}
