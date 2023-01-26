#include <stdio.h>
//Function to take values of element of matrices from the user
void read_matrix(int n,int mat[][n]){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
//Function to print the values of each element of matrices
void print_matrix(int n,int mat[][n]){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
//Checks whether matrix is upper trigular matrix
int upper_trigular_matrices(int n,int mat[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (i>j && mat[i][j]!=0)
                return 0;
        }
    }
    return 1;
}
//Checks whether matrix is Zero matrix
int zero_matrix(int n, int mat[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (mat[i][j]!=0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter the dimension of square matrics A: ");
    scanf("%d",&n);
    int matri1[n][n];
    read_matrix(n,matri1);
    printf("\nMatrix A is:\n");
    print_matrix(n,matri1);
    if (zero_matrix(n,matri1))
        printf("Matrix A is Zero Matrix");
    else if (upper_trigular_matrices(n,matri1))
        printf("Matrix A is Upper Trigular Matrix");
    else
        printf("Matrix A is not Upper Trigular Matrix");
    
    
    
    
    return 0;
}
