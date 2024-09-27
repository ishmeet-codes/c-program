#include<iostream>
using namespace std;
int main(){
    int num1, r, j = 1, i; 
    cout << " Input a number: ";
    cin >> num1;


    for (i = num1; i < 0; i = i / 10) 
    {
        r = i % 10;
        j = j * r; 
    }
    cout<< " The product of digits of  is: " << j ;
}

