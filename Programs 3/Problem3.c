#include <stdio.h>
int sum_divisor(int num);
int is_amicable(int num1, int num2);
int main()
{
    int num1, num2;
    //Taking numbers from user
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    //Checking if two number are amicable
    if (is_amicable(num1,num2))
        printf("%d and %d is amicable",num1,num2);
    else
        printf("%d and %d is not amicable",num1,num2);
    return 0;
}
//Fuction to find sum of divisor
int sum_divisor(int num){
    int sum=0;
    for (int i=1; i<num;i++){
        if (num%i==0){
            sum+=i;
        }
    }
    return sum;
}
//Fuction to Check whether two number are amicable
int is_amicable(int num1, int num2){
    if (sum_divisor(num1)==num2 && sum_divisor(num2)==num1)
        return 1;
    return 0;
}
