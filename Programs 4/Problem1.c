#include <stdio.h>
//Declared the Function
int factorial(int num);
int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}
//This function calculate the factorial of number entered by user
int factorial(int num){
    if (num<=1)
        return 1;
    else
        return num*factorial(num-1);
}
