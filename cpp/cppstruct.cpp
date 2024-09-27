#include<iostream>
using namespace std;
int main(){
	struct{
		int rollno;
		string name;
		float perc;
		char grade;
	}strd;
	strd.rollno = 23;
	strd.name = "ishmeet";
	strd.perc = 93.6;
	strd.grade = 'A';
	cout<<strd.rollno<<"\n"<<strd.name<<"\n"<<strd.perc<<"\n"<<strd.grade;
	
	
	
	return 0;
};
