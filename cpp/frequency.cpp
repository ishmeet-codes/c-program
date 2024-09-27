#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
void frequency(int arr[],int size){
	if(size ==0) {cout<<"array is empty";
	}
	int ce= arr[0],i;
	int fre = 1;
	for(i=1;i<size;i++){
		if(arr[i]==ce){
			++fre;
		}
		else{
			cout<<"Element  "<<ce<<" appears "<<fre<<" times \n";
			ce = arr[i];
			fre=1;
		}
	}

}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[] = { 9,7,4,5,3,2,5,8,7,6,9,1,2,8,55,33,5,6,7,3,2,6,7,8,97,43,32,45,78,98,11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    cout<<"\n";
    frequency(arr,n);
    return 0;
}
