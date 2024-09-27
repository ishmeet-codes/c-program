#include<iostream>
using namespace std;
int main(){
	int marks[5];
	int n = sizeof(marks) / sizeof(int);
	int i,sum=0,perc;
	for(i=0;i<n;i++){
		cout<<"Enter marks of subject "<<i+1<<" :-";
		cin>>marks[i];
	}
	for (int i = 0; i < n; ++i)
	{
    	sum += marks[i];
    }
    perc=sum/n;
    cout<<perc<<"%\n";
    if(perc>59){
    	cout<<"First division";
	}
	else if(perc<=59&&perc>=50){
		cout<<"Second division";
	}
	else if(perc<50&&perc>=40){
		cout<<"Third division";
	}
	else if(perc<40){
		cout<<"Fail";
	}
	return 0;
}
