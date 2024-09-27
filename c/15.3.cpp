#include<stdio.h>
#include <stdbool.h>
 void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble(int arr[],int n)
{
	int i,j;
	bool swapped;
	for (i = 0; i < n - 1; i++) 
	{
    	    swapped = false;
    	for (j = 0; j < n - i - 1; j++) 
		{
    	    if (arr[j] > arr[j + 1]) 
			{
    	        swap(&arr[j], &arr[j + 1]);
    	        swapped = true;
    	    }
    	}
		if (swapped == false)
    	break;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
int bs(int arr[], int l, int r, int x)
{
    while (l <= r) 
	{
		int m = l + (r - l) / 2;
		if (arr[m] == x)
            return m;
 		if (arr[m] < x)
            l = m + 1;
		else
            r = m - 1;
    }
return -1;
}


int main()
{
	int n,arr[100],i,x;
	printf("Enter size of array:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d of array :- ",i+1);
		scanf("%d",&arr[i]);
	}
	bubble(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("\nEnter number whose sorted location u have to find:- ");
    scanf("%d",&x);
    int result = bs(arr, 0, n ,x);
    (result == -1)
	? printf("Element is not present in array")
    : printf("Element is present at index %d",result+1);
    return 0;
}
