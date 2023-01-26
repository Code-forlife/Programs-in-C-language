 #include <stdio.h>
//to Insert a element
void inserstion(int arr[], int n,int num, int index){
    int arr2[n+1];
    for (int i=0;i<=index;i++)
        arr2[i]=arr[i];
    arr2[index-1]=num;
    for(int i=index;i<=n;i++)
        arr2[i]=arr[i-1];
    for (int i=0;i<n+1;i++)
        printf("%d ",arr2[i]);
}
//to delete a element
void deletes(int arr[], int n,int pos){
    int arr2[n-1];
    for(int i=0;i<pos-1;i++)
        arr2[i]=arr[i];
    for(int i=pos;i<n;i++)
        arr2[i-1]=arr[i];
    for (int i=0;i<n-1;i++)
        printf("%d ",arr2[i]);
}
int main()
{
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n");
    printf("Enter the value and the index of a number you want to insert: ");
    int num, index;
    scanf("%d %d",&num,&index);
    inserstion(arr,n,num,index);
    printf("\n================================");
    printf("\nThe array is:\n");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nEnter the element to delete:");
    int pos;
    scanf("%d",&pos);
    deletes(arr,n,pos);
    return 0;
}
