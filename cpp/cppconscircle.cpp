#include<iostream>
using namespace std;
class coord{
	public:
		float radius;
		coord(float x){
			radius =x;
			cout<<"\nArea of circle = "<<(22*x*x)/7;
			cout<<"\nPerimeter of circle = "<<(2*22*x)/7;
		}
};
int main(){
	int y;
	cout<<"Enter radius :- ";
	cin>>y;
	coord c1(y);
}
