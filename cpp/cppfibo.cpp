//fibonacci series
#include<iostream>
using namespace std;
int main(){
	int x,y,i,j,a;
	cout<<"Enter number of terms u wanna see :- ";
	cin>>x;
	cout<<"\nFibonacci series :- ";
	i=0;
	j=1;
	cout<<i<<' '<<j<<' ';
	for( y = 3 ; y <= x ; y++)
	{
	a = i + j;
        cout << " " << a;
       i = j;
        j = a;
	}

}
