// Full Pyramid Pattern in C of ABC
#include<stdio.h>
int main(){
	int i,j,k;
	for( i = 0 ; i < 5 ; i++){
 		for(j = 0 ; j < 2 * (5-i) ; j++){
 			printf(" ");
		 
	 }
	 for(k = (2 * i + 1)-1;k>=0; k--){
	 	printf("%c ",'A'+k);
	 }printf("\n");
	 
}
	return 0;
}
