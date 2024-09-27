//library
#include <stdio.h>
int main(){
	int days;
	printf("\n Enter number of days late:- ");
	scanf("%d",&days);
	if (days<=5){
		printf("Your total fine is 50 paise");
	}else if(days>5&&days<=10){ 
	printf("Your total fine is 1 rupees");
	} else if(days>10){
		printf("Your total fine is 5 rupees");
	}
	return 0;
}
