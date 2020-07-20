/* Program to convert temperature Fahrenheit to Celcius */
#include<stdio.h>

int main()
{
    float fCel, fFahren;
    printf("Enter temperature in Fahrenhiet\n");
    scanf("%f", &fFahren);
    fCel = (5.0 / 9.0) * (fFahren - 32);
    printf("Temperature in Celsius is %f\n", fCel);
    return 0;
}