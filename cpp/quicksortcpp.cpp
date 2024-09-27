#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int x,int y)
{
	int pivot=arr[y];
	int i=(x-1);
	for(int j=x;j<=y;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[y]);
	return (i+1);
}
void quicksort(int arr[],int low,int high){
	if(low<high){
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
int main(){
	int arr[]={19,17,15,13,11,9,7,5,3,1,18,16,14,12,10,8,6,4,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	cout<<"Sorted array\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
