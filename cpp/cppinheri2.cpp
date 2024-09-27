#include<iostream>
using namespace std;
class Vehicle {
	public:
		string brand="Ford";
		
};
class Car: public Vehicle {
  public:
    string model;
	int year;
	
};
int main(){
	Car c1;
	c1.model="Raptor";
	c1.year=2024;
	cout<<"\n"<<c1.brand<<"\t"<<c1.model<<"\t"<<c1.year;
	Car c2;
	
	c2.model="supra";
	c2.year=2006;
	cout<<"\n"<<"\t"<<c2.model<<"\t"<<c2.year;
}
