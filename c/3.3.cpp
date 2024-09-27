//driver insured
#include <stdio.h>
int main() {
	int age;
	char gen,ms;
	printf("\n Enter Gender:- ");
	scanf("%c",&gen);
	printf("\n Enter status(m/u):- ");
	fflush(stdin);
	scanf("%c",&ms);
	printf("\n Enter Age:- ");
	scanf("%d",&age);
	if(ms=='m'){		
	  printf("\ninsured");
	} else if(gen=='m' && ms=='u' && age>30) {
		printf("\ninsured");
	} else if(gen=='f'&&ms=='u' && age>25){
		printf("\ninsured");
	} else{
		printf("\nnot insured");
	}
	
}
