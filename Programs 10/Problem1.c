#include<stdio.h>
void categorise_books(char file_b[],char file_h[],char file_p[])
{
    char type,title[30],author[20];
    float price;
    FILE*fp1,*fp2,*fp3;
    fp1=fopen(file_b,"r");//Opening the file
    fp2=fopen(file_h,"w");
    fp3=fopen(file_p,"w");
    while(fscanf(fp1,"%c,%[^,],%[^,],%f\n",&type,title,author,&price)!=EOF)
    {
        if(type=='h')//To check if the book is hardback
            fprintf(fp2,"%s,%s,%.2f\n",title,author,price);
        if(type=='p') )//To check if the book is paperback
            fprintf(fp3,"%s,%s,%.2f\n",title,author,price);
        if(type=='b')
        {
            fprintf(fp2,"%s,%s,%.2f\n",title,author,price);
            fprintf(fp3,"%s,%s,%.2f\n",title,author,price);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
int main()
{
    categorise_books("all_books.txt","hardbacks.txt","paperbacks.txt");
    return 0;
}
