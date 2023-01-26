#include<stdio.h>
int main(int argc, char const *argv[]) {
    int i,n;
    printf("Enter number of elements\n");//Taking the number of elements in an array
    scanf("%d",&n);
    printf("Enter values\n");
    int a[n],b[n];
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);// Values of each elements
    }
    printf("Reversed array\n");
    for ( i = 0; i < n; i++)
    {
       *(b+i) = *(a+n-1-i);//Storing the revese of array one to other array
        printf("%d ",b[i]);//printing reverse of an array
        }
    return 0;
}
