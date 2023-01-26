#include<stdio.h>
int main() {
    int i,n,max=1,min=1,t;
    printf("Enter number of elements\n");//Taking the number of elements in an array 
    scanf("%d",&n);
    printf("Enter values\n");
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);// Values of each elements
        if(*(a+i)>=*(a+max))
        {
            max=i;//Maximum number in the array
        }
        else if(*(a+i)<=*(a+min))
        {
            min=i;//Minimum number in the array
        }
    }
    t = *(a+min);
    *(a+min) = *(a+max);
    *(a+max) = t;
    printf("------------------------------------------\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n------------------------------------------");
    return 0; 
}
