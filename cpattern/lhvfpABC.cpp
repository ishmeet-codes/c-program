//left hand vertical full pyramid of ABC
#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<i;j++){
			printf("%c ",'A'+j);
		}printf("\n");
	}
	for(i=0;i<=4;i++){
 		for(j=0;j<4-i;j++){
 			printf("%c ",'A'+j);
		 }printf("\n");
	 }
	return 0;
}
