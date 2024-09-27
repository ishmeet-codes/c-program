#include<iostream>
using namespace std;

void swap_numbers(int *a, int *b) {
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}


int main(){
	int x,y;
	  cout << "Enter value of Swap Number # 1: ";
   cin>>x;
   cout << "Enter value of Swap Number # 2: ";
   cin>>y;
    cout << "Before Swapping :  Number # 1= " <<x<< ",  Number # 2= " << y<< "\n";

   swap_numbers(&x, &y);
   cout << "After  Swapping :  Number # 1= " << x<< ",  Number # 2= " <<y<< "\n";

 
   return 0;

}
