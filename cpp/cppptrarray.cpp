#include<iostream>
using namespace std;
int main(){
	int n=9;
	int x[]={1,2,3,4,5,6,7,8,9};
	int i=0,sum=0;
	int *pt;
	pt = &x[0];

   while (i < n) {
      i++;
      sum = sum + *pt;
      pt++;
   }
   cout << "Sum of Array : " << sum;
return 0;
}
