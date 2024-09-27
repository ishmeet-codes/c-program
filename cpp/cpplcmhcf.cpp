//lcm\hcf
#include<iostream>
using namespace std;
int main(){
	int n1,n2,i,j,a,b;
	cout<<"Enter first number :- ";
	cin>>n1;
	cout<<"\nEnter secind number :- ";
	cin>>n2;
	j=(n1<n2 )?n1:n2;
	for(i=1;i<=j;i++)
	{
		if(n1%i==0&&n2%i==0){
			b =i;
		}
	}
	a=n1+n2/b;
	cout<<"\nLcm of entered numbers is "<<a;
}
