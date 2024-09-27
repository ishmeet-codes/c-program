#include<iostream>
using namespace std;
class students {
	public:
	string name;
	int std;
	int rollno;
	float marks;
	students(string a,int b,int c,float d){
		name =a;
		std =b;
		rollno =c;
		marks =d;
	}
};
int main(){
	students s1("Ishmeet",12,1,99);
	students s2("Ansh",12,2,98);
	students s3("Iqbal",12,3,97);
	students s4("Tripan",12,4,96);
	students s5("Anmol",12,5,95);
	cout<<"Roll no\tName\tClass\tMarks";
	cout<<"\n"<<s1.rollno<<"\t"<<s1.name<<"\t"<<s1.std<<"\t"<<s1.marks;
	cout<<"\n"<<s2.rollno<<"\t"<<s2.name<<"\t"<<s2.std<<"\t"<<s2.marks;
	cout<<"\n"<<s3.rollno<<"\t"<<s3.name<<"\t"<<s3.std<<"\t"<<s3.marks;
	cout<<"\n"<<s4.rollno<<"\t"<<s4.name<<"\t"<<s4.std<<"\t"<<s4.marks;
	cout<<"\n"<<s5.rollno<<"\t"<<s5.name<<"\t"<<s5.std<<"\t"<<s5.marks;
}
