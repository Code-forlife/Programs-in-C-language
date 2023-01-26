#include <stdio.h>
//Declared Fuction 
int print_num_reverse(int);
int print_num_for(int,int);
int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    int last_num=print_num_reverse(num);//storing the negative value or 0 to last_num
    print_num_for(last_num,num);
    return 0;
}
//This function will print till negavtive fuction
int print_num_reverse(int num){
     if (num<=0)
        return num;
    printf("%d, ",num);
    return print_num_reverse(num-5);
}
//This function will print from negative number to entered number
int print_num_for(int num, int max){
    printf("%d, ",num);
    if (num==max)
        return 1; 
    return print_num_for(num+5,max);
}
