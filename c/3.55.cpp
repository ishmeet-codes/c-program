// salary on basis of yos,qua
#include <stdio.h>
int main(){
	char gen,qua;
	int yos;
	printf("\nEnter gender:-");
	scanf("%c",&gen);
	printf("\nEnter YOS:- ");
	scanf("%d",&yos);
	printf("\n Enter qualification:-");
	fflush(stdin);
	scanf("%c",&qua);
	
	
	if ( gen =='m'&& yos>=10 && qua=='p'){
		printf("\n Your salary will be 15000");
	}else if ( gen =='m'&& yos>=10 && qua=='g'||gen =='m'&& yos<10 && qua=='p'){
		printf("\n Your salary will be 10000");
	}else if ( gen =='m'&& yos<10 && qua=='g'){
		printf("\n Your salary will be 7000");
	}else if ( gen =='f'&& yos>=10 && qua=='p'){
		printf("\n Your salary will be 12000");
	}else if ( gen =='f'&& yos>=10 && qua=='g'){
		printf("\n Your salary will be 9000");
	}else if ( gen =='f'&& yos<10 && qua=='p'){
		printf("\n Your salary will be 10000");
	}else if ( gen =='f'&& yos<10 && qua=='p'){
		printf("\n Your salary will be 10000");
	}else if ( gen =='f'&& yos<10 && qua=='g'){
		printf("\n Your salary will be 6000");
	}
}
