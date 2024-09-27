//1+11+111_______n
#include<iostream>
using namespace std;
int main(){
	int n,i,s,t=1;
	cout<<"Enter number of terms :- ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<t<<" ";
		if(i<n-1){cout<<"+";}
		s = s + t;
        t = (t * 10) + 1;
       
	}
	cout<<"\n\n\nsum of series:- "<<s;
	return 0;
}
