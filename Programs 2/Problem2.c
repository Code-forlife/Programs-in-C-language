#include <stdio.h>
#include<math.h>
int main()
{
    int binary,decimal,rem;
    scanf("%d",&decimal);
    binary=0;
    while (decimal>0){
        rem=decimal%2;
        binary=(binary*10)+rem;
        decimal/=2;
    }
    printf("%d",binary);
    return 0;
}
