#include <stdio.h>
//Structure declartion
typedef struct player{
    char name[100];
    int matches_played;
    int goals_scored;
}player_t;
//to take player information from user
void read_player(player_t p[], int no_of_player){
    for(int i=0;i<no_of_player;i++){
        printf("Enter the name of player: ");
        scanf("%s",p[i].name);
        printf("Enter the matches played by %s :",p[i].name);
        scanf("%d",&p[i].matches_played);
        printf("Enter the number of goals scored by %s :",p[i].name);
        scanf("%d",&p[i].goals_scored);
    }
}
//To sort the player
void sort_player(player_t p[],int no_of_player){
    int i,j,min_index;
    player_t t;
    for(i=0;i<no_of_player-1;i++){
        min_index=i;
        for(j=i+1;j<no_of_player;j++){
            if (p[j].goals_scored>p[min_index].goals_scored){
                min_index=j;
            }
        }
        t=p[min_index];
        p[min_index]=p[i];
        p[i]=t;
    }
}
//To print the information of players
void print_player(player_t p[],int no_of_player){
    printf("\n");
    printf("\n-----------------------------------------------------------");
    printf("\nNAMES\tMATCHES\tGOALS");
    printf("\n-----------------------------------------------------------");
    for(int i=0;i<no_of_player;i++){
        printf("\n%s\t%d\t%d",p[i].name,p[i].matches_played,p[i].goals_scored);
    }
}
int main()
{
    int no_of_player;
    printf("Enter the number of players: ");
    scanf("%d",&no_of_player);
    player_t p[no_of_player];
    read_player(p,no_of_player);
    sort_player(p,no_of_player);
    print_player(p,no_of_player);
   

    return 0;
}
