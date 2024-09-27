//left hand vertical full pyramid of 321
#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}printf("\n");
	}
	for(i=0;i<=5;i++){
 		for(j=4-i;j>0;j--){
 			printf("%d ",j+1);
		 }printf("\n");
	 }
	return 0;
}
