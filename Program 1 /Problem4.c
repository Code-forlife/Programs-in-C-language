#include <stdio.h>
int main()
{
    int days, month, year, remaining_days, last_days;
    printf("Enter the days: ");
    scanf("%d",&days);
    year=days/365;
    remaining_days=days-year*365;
    month=remaining_days/30;
    last_days=remaining_days-month*30;
    printf("Number of Year is %d",year);
    printf("\nNumber of Month is %d",month);
    printf("\nNumber of Days is %d",last_days);
    return 0;
}
