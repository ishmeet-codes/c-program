//lhdfullpyramid 0f *
#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<i;j++){
			printf("* ");
		}printf("\n");
	}
	for(i=0;i<=4;i++){
 		for(j=0;j<4-i;j++){
 			printf("* ");
		 }printf("\n");
	 }
	return 0;
}
