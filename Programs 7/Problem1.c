#include <stdio.h>
//Function to find the lenght of string
int len_string(char str[]){
    int i;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}
//Function which will find all things
void vowels_CONS(char str[])
{
    int vowels1=0;
    for (int i =0;i<len_string(str);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U' ){
            vowels1++;// add 1 to vowels when it encounter a vowel
        }
    }
    
    int remaing=len_string(str)-vowels1;
    int spaces=0;
    for (int i =0;i<len_string(str);i++){
        if (str[i]==' '){
            spaces++;
        }
    }
    //Calculation part
    int cons=remaing-spaces;
    int chars;
    chars=cons+vowels1;
    int words;
    words=spaces+1;
    //Print all the desire answer
    printf("Vowels: %d",vowels1);
    printf("\nConsonants: %d",cons);
    printf("\nCharacter: %d",chars);
    printf("\nWords: %d",words);
}
int main()
{
    char str[100];
    //Finish a sentence with a character not space otherwise it will show wrong number of words.
    printf("Enter a sentence: ");
    scanf("%[^\n]",str);
    vowels_CONS(str);

    return 0;
}
