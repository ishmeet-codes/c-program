 //Inverted Right Half Pyramid Pattern in C of CBA
 #include<stdio.h>
 int main(){
 	int i,j;
 	for(i=0;i<=6;i++){
 		for (j = 6-i; j >= 0; j--) {
            printf("%c", 'A' + j);
        }printf("\n");
	 }
 	return 0;
 }
 
 
