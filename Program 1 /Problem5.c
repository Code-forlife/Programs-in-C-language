#include <stdio.h>
int main()
{
    int user_minutes, hours, minutes;
    printf("Enter the number of minutes: ");
    scanf("%d",&user_minutes);
    hours=user_minutes/60;
    minutes=user_minutes-hours*60;
    printf("Number of hours is: %d",hours);
    printf("\nNumber of minutes is : %d",minutes);
    return 0;
}
