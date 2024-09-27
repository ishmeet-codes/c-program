 //Inverted Right Half Pyramid Pattern in C of 123
 #include<stdio.h>
 int main(){
 	int i,j;
 	for(i=0;i<=5;i++){
 		for(j=0;j<5-i;j++){
 			printf("%d",j+1);
		 }printf("\n");
	 }
 	return 0;
 }
