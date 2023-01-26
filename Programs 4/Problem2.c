#include <stdio.h>
//Declared the function
int fibonacci(int num);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        printf("%d, ",fibonacci(i));
    }
    return 0;
}
//function which calculate the nth term of fibonacci series
int fibonacci(int num){
    if (num==1)
        return 0;
    else if (num==2)
        return 1;
    else 
        return fibonacci(num-1)+fibonacci(num-2);
}
