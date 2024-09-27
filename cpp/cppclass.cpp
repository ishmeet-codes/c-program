#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int std;
	float marks;
};
int main(){
	student st1;
	st1.name="Ishmeet";
	st1.std=12;
	st1.marks=88.2;
	student st2;
	st2.name="Iqbal";
	st2.std=12;
	st2.marks=91;
	student st3;
	st3.name="Anmol";
	st3.std=12;
	st3.marks=85.7;
	
	
	
	cout<<"Name\tClass  Marks";
	cout<<"\n"<<st1.name<<"   "<<st1.std<<"    "<<st1.marks;
	cout<<"\n"<<st2.name<<"\t  "<<st2.std<<"    "<<st2.marks;
	cout<<"\n"<<st3.name<<"\t  "<<st3.std<<"    "<<st3.marks;
	
	
}
