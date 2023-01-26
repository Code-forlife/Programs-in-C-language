#include <stdio.h> 
int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("sample.txt", "r"); // opening in read mode
    fp2 = fopen("temp.txt", "w"); // opening in write mode
    char character;
    while (fscanf(fp1, "%c", &character) != EOF)
    {
    if (character >= 97 && character <= 122) 
    {
    fprintf(fp2, "%c", character - 32); 
    }
    else
    {
    fprintf(fp2, "%c", character);
    }
    }
    fclose(fp1); // closing files before removing and renaming
    fclose(fp2);
    remove("sample.txt"); // deleting file
    rename("temp.txt", "sample.txt"); // renaming file
    return 0;
}
