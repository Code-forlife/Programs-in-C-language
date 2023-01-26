#include <stdio.h>
//Finds the lenght of a strings
int len_string(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}
//Copys a string 
void copying(char str1[], char str2[]){
    for(int i=0;i<len_string(str1);i++){
        str2[i]=str1[i];
    }
    printf("%s",str2);
}
//Compares two strings
int compare(char str1[], char str2[]){
   for(int i=0;i<len_string(str1);i++){
       if (str1[i]>str2[i])
            return -1;
        else if (str1[i]<str2[i])
            return 1;
        else
            continue;
    }
    return 0;
}
//Reverses strings
void reverse(char str[],int n){
    char str_new[n];
    int j=len_string(str)-1;
   for(int i=0;i<=len_string(str);i++){
        str_new[i]=str[j];
        --j;
    }
    printf("%s",str_new);
}
//Concatenate Two strinngs
void Concatenate(char str1[], char str2[]){
    char str3[len_string(str1)+len_string(str2)];
    for(int i=0;i<len_string(str1);i++){
        str3[i]=str1[i];
    }
    int j=0;
    for(int i=len_string(str1);i<(len_string(str1)+len_string(str2));i++){
        str3[i]=str2[j];
        j++;
    }
   
    printf("%s",str3);
}
//Changes from lower caase to upper
void lower(char str1[]){
     for (int i = 0; str1[i]!='\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z') 
            str1[i] = str1[i] - 32;
     }
    printf("%s",str1);
}
int main()
{
    char str1[10]="My life ",str2[10];
    printf("Copying First String to another: ");
    copying(str1,str2);
    printf("\nLenght of string: %d",len_string(str1));
    printf("\nComparing two String:");
    char str3[]="joyous",str4[]="joy";
    if (compare(str3,str4))
        printf(" They are different");
    else
        printf("Equal");
    printf("\nReversing string 1: ");
    reverse(str1,10);
    printf("\nConcatenate: ");
    Concatenate(str1, str2);
    printf("\nChanging Lower to upper case: ");
    lower(str1);
    return 0;
}
