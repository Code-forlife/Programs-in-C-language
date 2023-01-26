#include <stdio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}
int binary_search(int arr[],int n, int key){
    int low=0;
    int high=n-1;
    if (arr[low]==key)
        return low;
    else if (arr[high]==key)
        return high;
    while(low<=high){
        int midd=low+(high-low)/2;
        if (arr[midd]==key)
            return midd;
        else if(arr[midd]<key)
            high=midd-1;
        else
            low=midd+1;
    }
    return -1;
}
// Driver program to test above functions
int main()
{
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n");

     selectionSort(arr, n);
    //Taking key from user
    printf("Enter the number you want to search in array: ");
    int key;
    scanf("%d",&key);
    int index=binary_search(arr,n,key);
    if (index>=0)
        printf("Found");
    else
        printf("Not Found");
	return 0;
}
