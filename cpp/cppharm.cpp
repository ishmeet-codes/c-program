//harmonic series
#include<iostream>
using namespace std;
int main(){
	int x,y,i,j;
	cout<<"Enter number of elements to display :- ";
	cin>>x;
	for(i=1;i<=x;i++){
		cout<<"1/"<<i<<"+";
		j+= 1/i;
	}
	cout<<"\n\n\nSum is "<<j;
	
	
	return 0;
}
