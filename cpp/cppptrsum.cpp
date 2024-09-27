#include<iostream>
using namespace std;
int main(){
	int i ,x,sum=0;
	int *pt;
	pt = &i;
for(i=1;i<=10;i++){
	cout<<"\n I = "<<*pt;
	sum = sum+i;
}
cout<<"\n sum till now is "<<sum;
return 0;	
}

