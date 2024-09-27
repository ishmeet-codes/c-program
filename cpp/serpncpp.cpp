//prime number in given range
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int snum,ennum,i,j,x,y,fnd=0;
	cout<<"\nEnter starting number:- ";
	cin>>snum;
	cout<<"\nEnter ending number:- ";
	cin>>ennum;
	for(i=snum;i<=ennum;i++)
	{
	for (int j = 2; j <= sqrt(i); j++) 
        {
            if (i % j == 0) 
                x++;
        }
        if (x == 0 && i != 1) 
        { 
            fnd++; 
            cout << i << " "; 
        }
        x = 0; 
    }
    cout << "\n\n The total number of prime numbers between " << snum << " to " << ennum << " is: " << fnd << endl;
    return 0; 
}
