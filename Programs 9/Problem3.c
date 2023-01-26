#include<stdio.h>
#include<stdlib.h>
int main()
{
	int matrix[10][10],i,j,r,c;
	printf("How many rows and columns in the matrix:- ");
	scanf(" %d %d",&r,&c);//Taking number of rows and columns
	printf("Enter the elements:- ");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++) 
	{
	scanf("%d",&matrix[i][j]);//Taking values of each elements
	}
	printf("------------------------------------------\n");
	printf("The transpose of matrix is:- \n");
	for(i=0;i<c;i++)
	{
    	for(j=0;j<r;j++)
    		printf("%5d",matrix[j][i]);//Printing the Transpose
    	printf("\n");
	}
	printf("------------------------------------------");
	return 0; 
}
