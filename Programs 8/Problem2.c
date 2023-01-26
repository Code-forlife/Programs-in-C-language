#include <stdio.h>
#include<string.h>
#include <stdbool.h>
//Structure whcih stores the information of flights
typedef struct airline{
    char STARTING_POINT[4];
    char DESTINATION[4];
    int ARRIVAL_TIME;
    int STARTING_TIME;
    int no_of_seats;
}airline_t;
//Struture which stores the information of query
typedef struct queries{
    char STARTING_POINT[4];
    char DESTINATION[4];
    int book;
}queries_t;
//To read tha no of flight
void read_arline(airline_t f[],int n){
    for (int i=0;i<n;i++){
        printf("Enter the starting point of flight(3 Code): ");
        scanf("%s",f[i].STARTING_POINT);
        printf("Enter the destination of the flight(3 Code): ");
        scanf("%s",f[i].DESTINATION);
        printf("Enter the departure time in hhmm form: ");
        scanf("%d",&f[i].STARTING_TIME);
        printf("Enter the arrival time in hhmm form: ");
        scanf("%d",&f[i].ARRIVAL_TIME);
        printf("Enter the number of seats available: ");
        scanf("%d",&f[i].no_of_seats);
    }
}
//To take query
void queries(airline_t f[],int n,queries_t q){
    bool availability=false;
    printf("============================================");
    printf("\nQuery");
    printf("\nEnter the starting point of flight(3 Code): ");
    scanf("%s",q.STARTING_POINT);
    printf("Enter the destination of the flight(3 Code): ");
    scanf("%s",q.DESTINATION);
    for(int i=0;i<n;i++){
        if (strcmp(f[i].STARTING_POINT,q.STARTING_POINT) && strcmp(q.DESTINATION,f[i].DESTINATION)){
            availability=true;
            printf("These are the flight for you:");
            printf("\nDeparture Time: %d",f[i].STARTING_TIME);
            printf("\nArrival Time: %d",f[i].ARRIVAL_TIME);
            printf("\nDo you want to book this flight. Enter 1 for Yes and 0 for No: ");
            scanf("%d",&q.book);
            if(q.book==1 && f[i].no_of_seats!=0){
                f[i].no_of_seats--;
                printf("Your flight has been booked");
            }
            else
                break;
        }
    }
    if (!availability)  
        printf("Sorry we do not have any flight");
    printf("\n============================================");
}
int main()
{
    int no_of_flight;
    airline_t f[no_of_flight];
    queries_t q;
    printf("Enter the number of flight: ");
    scanf("%d",&no_of_flight);
    read_arline(f,no_of_flight);
    queries(f,no_of_flight,q);
    return 0;
}
