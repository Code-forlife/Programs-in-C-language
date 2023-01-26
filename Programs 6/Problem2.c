#include <stdio.h>
//Takes the employee id and current age from user and calculate the year of retirement 
void read_empl(int n, int ret_emp[][2]){
    int cur_yr;
    printf("Enter current year: ");
    scanf("%d",&cur_yr);
    for (int i=0;i<n;i++){
        printf("Enter employee number: ");
        scanf("%d",&ret_emp[i][1]);
        printf("Enter the current age of employee: ");
        scanf("%d",&ret_emp[i][0]);
        ret_emp[i][0]=cur_yr+65-ret_emp[i][0];
    }
}
//to swap two years and employee id 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
//To sort the year 
void selectionSort(int n, int arr[][2])
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j][0] < arr[min_idx][0])
            min_idx = j;
        swap(&arr[min_idx][0], &arr[i][0]);
        swap(&arr[min_idx][1], &arr[i][1]);
    }
}
//To print the desired the output
void print_empl(int n, int ret_emp[n][2]){
    selectionSort(n,ret_emp);
    printf("Year\tEmployee ID\n");
    for (int i=0;i<n;i++){
        if(i!=0 && ret_emp[i][0]==ret_emp[i-1][0])
            printf("\t%d\n",ret_emp[i][1]);
        else 
            printf("%d\t%d\n",ret_emp[i][0],ret_emp[i][1]);
    }
}
int main()
{
    int n;
    printf("Enter the number of employee: ");
    scanf("%d",&n);
    int ret_emp[n][2];
    read_empl(n,ret_emp);
    print_empl(n,ret_emp);
    return 0;
}

