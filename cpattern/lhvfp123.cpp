//left hand vertical full pyramid of 123
#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<i;j++){
			printf("%d ",j+1);
		}printf("\n");
	}
	for(i=0;i<=4;i++){
 		for(j=0;j<4-i;j++){
 			printf("%d ",j+1);
		 }printf("\n");
	 }
	return 0;
}
