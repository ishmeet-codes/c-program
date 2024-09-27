#include<iostream>
using namespace std;
int main(){
	struct{
		int rollno;
		string name;
		float perc;
		char grade;
	}strd;
	cout<<"Enter student's roll no :- ";
	cin>>strd.rollno;
	cout<<"\nEnter student's name :- ";
	cin>>strd.name;
	cout<<"\nEnter student's percentage :- ";
	cin>>strd.perc;
	cout<<"\nEnter student's grades :- ";
	cin>>strd.grade;
	
	cout<<"\n"<<"\n"<<"\n"<<strd.rollno<<"\n"<<strd.name<<"\n"<<strd.perc<<"\n"<<strd.grade;
	
	return 0;
};
