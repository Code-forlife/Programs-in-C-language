#include <stdio.h>
#include<math.h>
int main()
{
    int principal=500000,time=10;
    float rate=3.5,n;
    float interest,compond_interest;
    interest=principal*rate*10/100;
    printf("Simple interest on Rs. 500000.00 in 10 years = Rs. 175000.00%.2f",interest);
    
    n=1;
    compond_interest=principal*pow(1+rate/100/n,n*time)-principal;
    printf("\nInterest on Rs. 500000.00 in 10 years compounded annually = Rs%.2f",compond_interest);
    
    n=2;
    compond_interest=principal*pow(1+rate/100/n,n*time)-principal;
    printf("\nInterest on Rs. 500000.00 in 10 years compounded semi-annually = Rs.%.2f",compond_interest);
    
    
    n=4;
    compond_interest=principal*pow(1+rate/100/n,n*time)-principal;
    printf("\nInterest on Rs. 500000.00 in 10 years compounded quarterly = Rs. %.2f",compond_interest);
    
    
    n=12;
    compond_interest=principal*pow(1+rate/100/n,n*time)-principal;
    printf("\nInterest on Rs. 500000.00 in 10 years compounded monthly = Rs. %.2f",compond_interest);
    
    n=365;
    compond_interest=principal*pow(1+rate/100/n,n*time)-principal;
    printf("\nInterest on Rs. 500000.00 in 10 years compounded daily = Rs. %.2f",compond_interest);
    
    return 0;
}