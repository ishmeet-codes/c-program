#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char name[30];
	float std,m1,m2,m3,m4,total,perc;
	cout<<"Enter name :- ";
	cin>>name;
	cout<<"Enter class:- ";
	cin>>std;
	cout<<"Enter marks in subject 1 :- ";
	cin>>m1;
	cout<<"Enter marks in subject 2 :- ";
	cin>>m2;
	cout<<"Enter marks in subject 3 :- ";
	cin>>m3;
	cout<<"Enter marks in subject 4 :- ";
	cin>>m4;
	total = m1+m2+m3+m4;
	perc = total/4;
	cout<<"Total percentage is :- "<<perc;
	if(perc>=91){
		cout<<"\nYour grade is A";
	}else if(perc>81){
		cout<<"\nYour grade is B";
	}else if(perc>71){
		cout<<"\nYour grade is C";
	}else if(perc>61){
		cout<<"\nYour grade is D";
	}else if(perc>51){
		cout<<"\nYour grade is E";
	}else{
	try {

    if (perc>40) {
      cout << "\nAccess granted - you are good to go.";
    } else {
      throw 505;
    }
  }
  catch (...) {
    cout << "\nAccess denied - You must give test again.\n";
  }
	}
}
