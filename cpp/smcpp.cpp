#include<iostream>
using namespace std;
int main(){
	int i,j,a[2][2],b[2][2];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Enter element A"<<i+1<<j+1<<" of array a :- ";
			cin>>a[i][j];
		}
	}
	
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++)
	{b[i][j]=a[i][0]+a[i+1][1]+a[i+2][2];
	}}

for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout<<b[i][];
		}cout<<"\n";
	}
	return 0;
}
