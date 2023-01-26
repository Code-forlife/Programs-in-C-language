#include <stdio.h>
//Structure taking information of player
typedef struct player {
    int ages;
    char name[100];
    char address[1000];
    int active;
    int married;
}player_t;
//Structure taking information of player's wife and kids if there is any
typedef struct players_married {
    int wife_ages;
    char wife_name[100];
    int no_of_child;
    char name_of_child[100];
    int age_of_child;
}married_t;
//Function to take player's informaton from user
void read_player(player_t pla[],int n,married_t p[]){
    for (int i=0;i<n;i++){
        printf("Enter the name of the player: ");
        scanf("%s",pla[i].name);
        printf("Enter the address: ");
        scanf(" %[^\n]",pla[i].address);
        printf("Enter the age of the player: ");
        scanf("%d",&pla[i].ages);
        printf("Enter 1 if the player is Active and 0 if he is not: ");
        scanf("%d",&pla[i].active);
        printf("Enter 1 if the player is married and 0 if he is not: ");
        scanf("%d",&pla[i].married);
        if (pla[i].married){
            printf("Enter wife name: ");
            scanf(" %[^\n]",p[i].wife_name);
            printf("Enter the age of wife: ");
            scanf("%d",&p[i].wife_ages);
            printf("Enter the no of kid of player: ");
            scanf("%d",&p[i].no_of_child);
            for (int i=0;i<p[i].no_of_child;i++){
                printf("Enter name of child: ");
                scanf(" %[^\n]",p[i].name_of_child);
                printf("Enter age of child: ");
                scanf("%d",&p[i].age_of_child);
            }
        }
    }
}
//Function to print the information of players
void print_player(player_t pla[],int n,married_t p[]){
    for (int i=0;i<n;i++){
        printf("Name of player: %s",pla[i].name);
        printf("\nAge of player: %d",pla[i].ages);
        printf("\nAddress of player: %s",pla[i].address);
        if (pla[i].active){
            printf("\nPlayer is Active");
        }
        else
            printf("\nPlayer is not active");
        if (pla[i].married){
            printf("\nHE IS MARRIED!");
            printf("\nName of wife: %s",p[i].wife_name);
            printf("\nNumber of child: %d",p[i].no_of_child);
            for (int i=0;i<p[i].no_of_child;i++){
                printf("\nName of child: %s",p[i].name_of_child);
                printf("\nEnter age of child: %d",p[i].age_of_child);
             }
         }
    }
}

int main()
{
    int no_of_player;
    printf("Enter the number of player: ");
    scanf("%d",&no_of_player);
    player_t pla[no_of_player];
    married_t p[no_of_player];
    read_player(pla,no_of_player,p);
    print_player(pla,no_of_player,p);
    return 0;
}
