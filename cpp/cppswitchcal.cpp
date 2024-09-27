//switch cpp cal
#include<iostream>
using namespace std;
int main(){
	float x,y,result;
	int ope;
	 cout<<"\nEnter Ist variable:- ";
	 cin>>x;
	 cout<<"\nEnter IInd variable:- ";
	 cin>>y;
	 cout<<"\n Select operation \"+=1,-=2,x=3,/=4\" :- ";
	 cin>>ope;
	 switch(ope){
	 	case 1:
	 		result =x+y;
	 		cout<<result;
	 		break;
	 	case 2:
	 		result =x-y;
	 		cout<<result;
	 		break;
	 	case 3:
	 		result=x*y;
	 		cout<<result;
	 		break;
	 	case 4:
	 		result=x/y;
	 		cout<<result;
	 		break;
	 	default :
	 		cout<<"Invalid Operation";
	 }
	 return 0;
}
