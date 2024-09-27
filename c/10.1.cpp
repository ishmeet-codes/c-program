#include <stdio.h>
#include <string.h>
int main(){
	char text[51];
	int i,lenght=strlen(text);
	printf("Enter any text");
	scanf("\t%s",&text[0]);
 for(i=0;i<lenght;i++){
 	printf("\n%c",text[i]);
 }
}
