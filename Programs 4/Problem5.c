#include <stdio.h>
//Declared The function 
int power_fuc(int num,int power);
int main()
{
    printf("Enter the number and power: ");
    int num,power;
    scanf("%d %d",&num,&power);
    int result=power_fuc(num,power);
    printf("%d raise to power %d is: %d",num,power,result);
    return 0;
}
//Fuction which Calculate the power of a number
int power_fuc(int num,int power){
    if (power==0)
        return 1;
    return num*power_fuc(num,power-1);
}
