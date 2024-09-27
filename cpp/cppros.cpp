//reverse order + sum
#include<iostream>
using namespace std;
int main(){
	int x,y,r,sum=0,i=0;
	cout<<"Enter  number :- ";
	cin>>x;
	for (y = x; x != 0; x = x / 10) 
    {
        r = x % 10; 
        i = i * 10 + r;   
	
    }
    
    cout<<i;


}
