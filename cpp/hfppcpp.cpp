//hollow full pyramid
#include<iostream>
using namespace std;
int main(){
	int i,j,k,n =5;
	for(i=0;i<n;i++){
		for(j=0;j<2*(n-i)-1;j++){
			cout<<" ";
		}
		for(k=0;k<2*i+1;k++){
			if(k==0 ||k==2*i || i==n-1)	{
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		
		cout<<"\n";
		
	}
	return 0;
}
