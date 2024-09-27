 //Inverted Right Half Pyramid Pattern in C ofABC
 #include<stdio.h>
 int main(){
 	int i,j;
 	for(i=0;i<=5;i++){
 		for(j=0;j<5-i;j++){
 			printf("%c",'A'+j);
		 }printf("\n");
	 }
 	return 0;
 }
