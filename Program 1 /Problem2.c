#include <stdio.h>
int main()
{
    float a,b;
    int sum,multi,sub;
    float division,modt;
    printf("Enter the First Number:");
    scanf("%f",&a);
    printf("Enter the Second Number:");
    scanf("%f",&b);
    int c=a,d=b;
    sum=a+b;
    sub=a-b;
    multi=a*b;
    division=a/b;
    modt=c%d;
    printf("Sum of %d and %d is %d  ",c,d,sum);
    printf("\nSubtraction of %d and %d is %d",c,d,sub);
    printf("\nMultiplication of %d and %d is %d",c,d,multi);
    printf("\nDivision of %d and %d is %.2f",c,d,division);
    printf(" \nModulus of %d and %d is %.2f",c,d,modt);
    return 0;
}
