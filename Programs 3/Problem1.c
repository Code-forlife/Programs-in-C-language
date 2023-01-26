#include <stdio.h>
int sum_divisor(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);//taking number from user
    int sum=sum_divisor(num);
    printf("Sum of divisor of %d is %d",num,sum);
    return 0;
}
// used this fuction to find Sum of divisor
int sum_divisor(int n){
    int sum=0;
    for (int i=1; i<n;i++){
        if (n%i==0){
            sum+=i;//finding the sum of divisor 
        }
    }
    return sum;
}
