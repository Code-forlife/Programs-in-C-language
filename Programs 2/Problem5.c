#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++)
            printf("*");
        for (int j = 0; j < 2 * i + 1; j++)
            printf(" ");
        for (int j = i; j < n; j++)
            printf("*");
        printf("\n");
    }
    for (int i=0; i<n-1;i++){
        for(int j=0;j<i+2;j++)
            printf("*");
        for(int j=0;j<2*(n-i-1)-1;j++)
            printf(" ");
        for(int j=0;j<i+2;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}