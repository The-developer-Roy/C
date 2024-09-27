#include<stdio.h>

int main()
{
    float farenheit, celcius;
    printf("Enter the Temperature (in farenheit): ");
    scanf("%f", &farenheit);
    celcius = (((farenheit - 32.0)/9.0)*5.0);
    printf("The converted temperature into celcius is: %f", celcius);
    return 0;
}