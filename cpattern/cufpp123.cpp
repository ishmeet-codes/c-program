//upward Full Pyramid Pattern in C with 123
#include<stdio.h>
int main(){
	int i,j,k;
	for( i = 0 ; i < 5 ; i++){
 		for(j = 0 ; j < 2 * (5-i) ; j++){
 			printf(" ");
		 
	 }
	 for(k = 0 ; k < 2 * i + 1; k++){
	 	printf("%d ",k+1);
	 }printf("\n");
	 
}
	return 0;
}
