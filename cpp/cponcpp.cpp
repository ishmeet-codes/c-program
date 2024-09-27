//check no is prime or not
#include<iostream>
using namespace std;
int main(){
	int num,i,x=0;
	cout<<"Enter number to check:- ";
	cin>>num;
	for(i=1;i<=num;i++){
		if (num %i==0){
			x++;
		}
	}
	if (x==2){
		cout<<"\nEntered number is prime";
	}
	else{
	cout<<"\nEntered number is not prime";
	}
	return 0;
}


