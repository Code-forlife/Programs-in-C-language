#include <stdio.h>

//Function delcaration
int mobius(int num);
int is_prime(int num);
int main()
{
    int a,num;
    //Taking a number from User
    printf("Enter a number: ");
    scanf("%d",&num);
    a=mobius(num);
    printf("M(%d)= %d",num,a);
    return 0;
}
//Check a number is prime or not
int is_prime(int num){
    if (num<2)
        return 0;
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 0;   
    return 1;
}
//Function to check a number is Mobius or not
int mobius(int num){
    int count=0;
    for(int i=2;i<num;i++){
        if (num%i==0 && is_prime(i)){
            if (num%(i*i)==0)//to return 0 if number is repeated
                return 0;
            else
                count++;
        }
    }
    return (count%2==0)?1:-1;
}
