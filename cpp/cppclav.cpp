#include<iostream>
using namespace std;
class Room {
	public:
	float l;
	float b;
	float h;
	void area(float x,float y);
	void volume(float x,float y,float z);
};
void Room::area(float x,float y) {
  cout<<"\n Area is "<<x*y;
}
void Room::volume(float x,float y,float z){
	cout<<"\tVolume is "<<x*y*z;
}
int main(){
	Room room1;
	room1.l=12;
	room1.b=13;
	room1.h=10;
	
	Room room2;
	room2.l=13;
	room2.b=13;
	room2.h=10;
	
	Room room3;
	room3.l=11;
	room3.b=13;
	room3.h=10;
	
	Room room4;
	room4.l=12;
	room4.b=12;
	room4.h=11;
	
	Room room5;
	room5.l=13;
	room5.b=11;
	room5.h=11;
	
	room1.area(12,13);
	room1.volume(12,13,10);
	room2.area(13,13);
	room2.volume(13,13,10);
	room3.area(11,13);
	room3.volume(11,13,10);
	room4.area(12,12);
	room4.volume(12,12,11);
	room5.area(13,11);
	room5.volume(13,11,11);
}
