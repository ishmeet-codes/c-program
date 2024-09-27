//sum of array
#include<iostream>
using namespace std;
int sum(int arr[],int n){
	if (n == 0) {
        return 0;
    }
    else {
        return arr[0] + sum(arr + 1, n - 1);
    }
}
int main(){
	int arr[]={1,4,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << sum(arr, n);
    return 0;
}
