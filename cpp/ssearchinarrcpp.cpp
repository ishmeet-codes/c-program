#include<iostream>
using namespace std;
int main()
{
	int i,j,x;
	int arr[3][3]={
	{1,2,3},{4,5,6},{7,8,9}
	};
	cout<<"Enter number to find :- ";
	cin>>x;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			if(arr[i][j]==x)
				cout<<"Element found at "<<i<< " " <<j;
			
	}
		
	
	
	
	
	return 0;
}
