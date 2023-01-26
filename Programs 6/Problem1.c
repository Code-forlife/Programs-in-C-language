#include <stdio.h>
#include<math.h>
//Function to take values of element of matrices from the user
void read_matrix(int row, int colums,int mat[][colums]){
    for (int i=0;i<row;i++){
        for(int j=0;j<colums;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
//Function to print the values of each element of matrices
void print_matrix(int row, int colums,int mat[][colums]){
    for (int i=0;i<row;i++){
        for(int j=0;j<colums;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
//Function to add two matrices 
void add_matrix(int row1,int col1, int mat1[][col1],int row2, int col2, int mat2[][col2],int res[][col1]){
    if (row1!=row2 || col1!=col2){
        printf("\nAddition of this matrix is not possible");
        printf("========================");
    }
    else{
        printf("\nA+B: \n");
        for (int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                res[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        print_matrix(row1,col1,res);
        printf("========================");
    }
}
//Function to subtract two matrices 
void sub_matrix(int row1,int col1, int mat1[][col1],int row2, int col2, int mat2[][col2],int res[][col1]){
    if (row1!=row2 || col1!=col2){
        printf("\nSubtraction of this matrix is not possible");
        printf("========================");
    }
    else{
        printf("\nA-B: \n");
        for (int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                res[i][j]=mat1[i][j]-mat2[i][j];
            }
        }
        print_matrix(row1,col1,res); 
        printf("========================");
    }
}
//Function to multiply two matrices
void multi_matrix(int row1,int col1, int mat1[][col1],int row2, int col2, int mat2[][col2],int res[][col1]){
    if(col1==row1){
        printf("\nA X B: \n");
        for(int i=0;i<row1;i++)    
        {    
            for(int j=0;j<col2;j++)    
            {    
                res[i][j]=0;    
                for(int k=0;k<col1;k++)    
                {    
                    res[i][j]+=mat1[i][k]*mat2[k][j];    
                }    
            }    
        }
        print_matrix(row1,col2,res); 
        printf("========================");
    }
    else{
        printf("Multiplication of this matrix is not possible");
        printf("========================");
    }
}
//Function to find a norm of a matrix
void norm_matrix(int row1, int col1, int mat1[][col1]){
    float sum=0;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            sum+=pow(mat1[i][j],2);
        }
    }
    sum=pow(sum,0.5);
    printf("\nNorm of matrix A is: ");
    printf("%.2f",sum);
    printf("\n========================");
}

int main()
{
    int row1,col1;
    printf("Enter the number of rows of matrics A: ");
    scanf("%d",&row1);
    printf("Enter the number of colums of matrics A: ");
    scanf("%d",&col1);
    int matri1[row1][col1];
    read_matrix(row1,col1,matri1);
    
    int row2,col2;
    printf("Enter the number of rows of matrics B: ");
    scanf("%d",&row2);
    printf("Enter the number of colums of matrics B: ");
    scanf("%d",&col2);
    int matri2[row2][col2];
    read_matrix(row2,col2,matri2);
    printf("========================");
    printf("\nMatrix A is:\n");
    print_matrix(row1,col1,matri1);
    printf("========================");
    printf("\nMatrix B is:\n");
    print_matrix(row2,col2,matri2);
    printf("========================");
    
    int res[row1][col1];
    
    add_matrix(row1,col1,matri1,row2,col2,matri2,res);
    
    sub_matrix(row1,col1,matri1,row2,col2,matri2,res);
    
    multi_matrix(row1,col1,matri1,row2,col2,matri2,res);
    
    norm_matrix(row1,col1,matri1);
    
    return 0;
}
