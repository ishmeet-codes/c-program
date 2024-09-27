#include<iostream>
using namespace std;
int main(){
	struct{
		int rollno;
		string name;
		float perc;
		char grade;
	}class1,class2,class3;
	class1.rollno = 3;
	class1.name = "ishmeet";
	class1.perc =97;
	class1.grade ='A';
	class2.rollno = 2;
	class2.name = "ishmeet";
	class2.perc = 98;
	class2.grade = 'A';
	class3.rollno = 1;
	class3.name = "ishmeet";
	class3.perc = 99;
	class3.grade = 'A';
	cout<<class1.rollno<<"\n"<<class1.name<<"\n"<<class1.perc<<"\n"<<class1.grade<<"\n"<<"\n";
	cout<<class2.rollno<<"\n"<<class2.name<<"\n"<<class2.perc<<"\n"<<class2.grade<<"\n"<<"\n";
	cout<<class3.rollno<<"\n"<<class3.name<<"\n"<<class3.perc<<"\n"<<class3.grade<<"\n"<<"\n";
	
	
	
	return 0;
};
