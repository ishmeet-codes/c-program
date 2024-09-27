//gp series
#include<iostream>
using namespace std;
int main(){
	int x,y,z,i,j;
	cout<<"Enter first element :- ";
	cin>>x;
	cout<<"\nEnter ratio :- ";
	cin>>y;
	cout<<"\nEnter number of turns :- ";
	cin>>z;
	for(i=1;i<=z;i++){
		cout<<x<<" ";
		x *=y;
	}return 0;
}
