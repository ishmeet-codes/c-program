//gcd of any two numbers
#include<iostream>
using namespace std;
int main(){
	int a,b,i,j;
	cout<<"\nEnter first number :- ";
	cin>>a;
	cout<<"\nEnter second number :- ";
	cin>>b;
	for (i = 1 ; i <= a && i <= b ; i++){
		if (a  % i == 0 && b % i == 0){
			j = i;
		}
	}
	cout<<"GCD of given numbers is "<< j; 
	return 0;
}
