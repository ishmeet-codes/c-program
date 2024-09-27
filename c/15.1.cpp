#include<stdio.h>
int linearsearch(int arr[],int n,int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i+1;
    return -1;
}


int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int x=6;
	int n=sizeof(arr)/sizeof(arr[0]);
	int result = linearsearch(arr,n,x);
	(result==-1)
	?printf("\nNO LOCATION")
	:printf("\nLOCATION IS %d",result);
	return 0;
	
}
