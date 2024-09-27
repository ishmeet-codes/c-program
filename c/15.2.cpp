#include <stdio.h>
int bs(int arr[], int l, int r, int x)
{
    while (l <= r) {
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
	     



int main(){ 
int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int n=sizeof(arr)/sizeof(arr[0]);
int x=5;
  int result = bs(arr, 0, n , x);
    (result == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            result+1);
    return 0;
}

