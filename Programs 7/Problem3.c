#include <stdio.h>
 //To check if a string is palindrome or not 
int palindrome(char str[],int l){
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            return 0;
            break;
            }
    }
    return 1;
}
int main() {
    char str[200]; 
    scanf("%[^\n]",str);
    char string[200]; 
    int b=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){ 
            string[b]=str[i]; 
            b++;
        }
        if(str[i]==' '){
            string[b]='\0';
            int n=palindrome(string,b); 
            if(n==1){
                printf("%s ",string);
            }
            b=0;
        }
        if(str[i+1]=='\0'){
            string[b]='\0';
            int n=palindrome(string,b);
            if(n==1){
                printf("%s ",string);
            }
            b=0;
        } 
    }
    return 0; 
}
