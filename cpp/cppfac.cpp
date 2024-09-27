//factorial
#include<iostream>
using namespace std;
int main(){
	
    int num1, x=1,y; 
	cout << " Input a number to find the factorial: ";
	cin >> num1;
	for ( y = 1; y <= num1; y++)
    {
        x= x*y;
    }
	cout << " The factorial of the given number is: " << x;
    return 0; 
}
