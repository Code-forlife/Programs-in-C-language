#include <stdio.h>
//Declared the Function
int Ackerman(int,int);
int main()
{
    //Print all the ackerman function
    for (int i=1;i<=3;i++){
        for (int j=1;j<=6;j++)
            printf("Ackerman(%d,%d) is %d\n",i,j,Ackerman(i,j));
    }

    return 0;
}
int Ackerman(int m,int n){
    if (m==0)
        return n+1;
    else if (m!=0 && n==0)
        return Ackerman(m-1,1);
    else
        return Ackerman(m-1,Ackerman(m,n-1));
}
