#include <stdio.h>
//Declaration of Fuction
int is_prime(int num);
void num_print();
int main()
{
    num_print();
    return 0;
}
//Check whether a number is prime or not
int is_prime(int num){
    if (num==1)
        return 0;
    for (int i=2; i<num;i++){
        if (num%i==0)
            return 0;
    }
    return 1;
}
//Print the desire result
void num_print(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i =1;i<num;i++){
        if (is_prime(i)==1)
            printf("%d* ",i);
        else
            printf("%d ",i);
        if (i%10==0)
            printf("\n");
    }
}
