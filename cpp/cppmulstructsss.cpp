#include<iostream>
using namespace std;
int main(){
	struct{
		int rollno;
		string name;
		float perc;
		char grade;
	}class1,class2,class3;
	cout<<"\nEnter student's rollno :- ";cin>>class1.rollno;
	cout<<"\nEnter student's name :- ";cin>>class1.name;
	cout<<"\nEnter student's percentage :- ";cin>>class1.perc;
	cout<<"\nEnter student's grades :- ";cin>>class1.grade;
	cout<<"\nEnter student's rollno :- ";cin>>class2.rollno;
	cout<<"\nEnter student's name :- ";cin>>class2.name;
	cout<<"\nEnter student's percentage :- ";cin>>class2.perc;
	cout<<"\nEnter student's grades :- ";cin>>class2.grade;
	cout<<"\nEnter student's rollno :- ";cin>>class3.rollno;
	cout<<"\nEnter student's name :- ";cin>>class3.name;
	cout<<"\nEnter student's percentage :- ";cin>>class3.perc;
	cout<<"\nEnter student's grades :- ";cin>>class3.grade;
	cout<<"\n\n\nStudent's rollno :- "<<class1.rollno<<"\n"<<"student's name :- "<<class1.name<<"\n"<<"student's percentage :- "<<class1.perc<<"\n"<<"student's grades :- "<<class1.grade<<"\n"<<"\n";
	cout<<"\n\n\nStudent's rollno :- "<<class2.rollno<<"\n"<<"student's name :- "<<class2.name<<"\n"<<"student's percentage :- "<<class2.perc<<"\n"<<"student's grades :- "<<class2.grade<<"\n"<<"\n";
	cout<<"\n\n\nStudent's rollno :- "<<class3.rollno<<"\n"<<"student's name :- "<<class3.name<<"\n"<<"student's percentage :- "<<class3.perc<<"\n"<<"student's grades :- "<<class3.grade<<"\n"<<"\n";
	return 0;
};
