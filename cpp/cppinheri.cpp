#include<iostream>
using namespace std;
class school{
	public:
		int session;
		int schoolcd;
		string scname;
};
class Student: public school{
	public:
		string name;
		int std;
		int rollno;
		float marks;
};
int main(){
	Student st1;
	st1.name="Ishmeet";
	st1.std=12;
	st1.rollno=1;
	st1.marks=98;
	st1.scname="AICA";
	st1.schoolcd=20430;
	st1.session=2023;
	
	Student st2;
	st2.name="Iqbal";
	st2.std=12;
	st2.rollno=2;
	st2.marks=97;
	st2.scname="AICA";
	st2.schoolcd=20430;
	st2.session=2023;
	
	Student st3;
	st3.name="Anmol";
	st3.std=12;
	st3.rollno=3;
	st3.marks=95;
	st3.scname="AICA";
	st3.schoolcd=20430;
	st3.session=2023;
	cout<<"Roll no"<<"\t"<<"Name"<<"\t"<<"Class"<<"\t"<<"Marks"<<"\t"<<"Sc Name"<<"\t"<<"Sc Code"<<"\t"<<"Session\n";
	cout<<st1.rollno<<"\t"<<st1.name<<"\t"<<st1.std<<"\t"<<st1.marks<<"\t"<<st1.scname<<"\t"<<st1.schoolcd<<"\t"<<st1.session;
	cout<<"\n"<<st2.rollno<<"\t"<<st2.name<<"\t"<<st2.std<<"\t"<<st2.marks<<"\t"<<st2.scname<<"\t"<<st2.schoolcd<<"\t"<<st2.session;
	cout<<"\n"<<st3.rollno<<"\t"<<st3.name<<"\t"<<st3.std<<"\t"<<st3.marks<<"\t"<<st3.scname<<"\t"<<st3.schoolcd<<"\t"<<st3.session;

}
