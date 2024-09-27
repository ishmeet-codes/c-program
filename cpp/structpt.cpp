#include<iostream>
#include<cstring>
using namespace std;
void printBook( struct office  *book );
struct office{
	char name[30];
	int emplyid;
	int salary;
	char post[30];
	int age;
};
int main(){
	struct office mem1;
	strcpy(mem1.name,"Ishmeet");
	mem1.age = 18;
	strcpy(mem1.post,"SJD");
	mem1.emplyid = 126542;
	mem1.salary = 10000000;


	   printBook(&mem1);
}
void printBook( struct office *book ) {
   cout << "Employee's name: " << book->name <<endl;
   cout << "Employee's age: " << book->age <<endl;
   cout << "Employee's post: " << book->post <<endl;
   cout << "Employee's ID: " << book->emplyid <<endl;
   cout << "Employee's salary: " << book->salary <<endl;
}
