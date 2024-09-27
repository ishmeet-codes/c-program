//left hand vertical full pyramid of CBA
#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%c ",'A'+j);
		}printf("\n");
	}
	for(i=0;i<=5;i++){
 		for(j=4-i;j>0;j--){
 			printf("%c ",'A'+j);
		 }printf("\n");
	 }
	return 0;
}
