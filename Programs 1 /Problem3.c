#include <stdio.h>
int main()
{
    float Fahrenheit, Celsius;
    printf("Enter temp in Farenheit: ");
    scanf("%f",&Fahrenheit);
    Celsius=(Fahrenheit-32)*5/9;
    printf("Temp %.2f in Farenheit = %.2f Centigrade",Fahrenheit,Celsius);
    return 0;
}