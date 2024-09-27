#include<iostream>
using namespace std;
int main(){
	int x=100;
	int *pt;
	int **dpt;
	cout << "Address of x [&x ]	:" << &x << "\n";
	cout << "Value   of x [x ]	:" << x << "\n\n";
	pt=&x;
	cout << "Address of Pointer [pt  ] 	:" << pt << "\n";
    cout << "Value of Pointer [*pt ] 	:" << *pt << "\n\n";
    dpt = &pt;
	cout << "Address of Double Pointer 	[dpt  ] 	:" << dpt << "\n";
   	cout << "Value of Double Pointer 	[*dpt ] 	:" << *dpt << "\n\n";
   	cout << "Double Pointer Value 		[**dpt] 	:" << **dpt << "\n";
}
