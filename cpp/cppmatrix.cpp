#include<iostream>
using namespace std;
int main(){
	int m1[3][3],m2[3][3],result[3][3],i,j,x;
	cout<<"Enter elements of matrix 1 :-";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>m1[i][j];
		}
	}
	cout<<"\n\nEnter elements of matrix  2:-";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>m2[i][j];
		}
	}
	cout<<"\n Select operation (+=1,-=2,/=3,x=4) :- ";
	cin>>x;
	switch(x){
		case 1:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					result[i][j]=m1[i][j]+m2[i][j];
				}
			}
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<result[i][j];
				}
			}
		case 2:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					result[i][j]=m1[i][j]-m2[i][j];
				}
			}
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<result[i][j];
				}
			}
		case 3:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					result[i][j]=m1[i][j]/m2[i][j];
				}
			}
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<result[i][j];
				}
			}
			case 4:
				for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					result[i][j]=m1[0][j]*m2[0][j]  +m1[1][j]*m2[1][j]+m1[2][j]*m2[2][j];
				}
			}
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					cout<<result[i][j]<<" ";
				}cout<<"\n";
			}
	}
	return 0;
}
