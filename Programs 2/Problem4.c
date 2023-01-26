#include <stdio.h>
#include<math.h>
int main()
{
    int number,square_num,sum=0;
    printf("Enter a number:");
    scanf("%d",&number);
    square_num=number*number;
    int cout_digit=0;
    while (square_num!=0){
        cout_digit++;
        square_num/=10;
    }
    square_num=number*number;
    for (int r_digit=1;r_digit<cout_digit;r_digit++){
        int eq_parts = pow(10, r_digit);
 
        if (eq_parts == number)
            continue;
        sum = square_num / eq_parts + square_num % eq_parts;
        if (sum == number){
            printf("%d is a Kaprekar number",number);
            break;
        }
    }
    if (sum!=number)
        printf("%d is not a Kaprekar number",number);
    return 0;
}
