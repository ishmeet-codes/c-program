#include <stdio.h>
int main(){
	float a1,a2,a3,x;
	printf("\nEnter angle1 :-");
	scanf("%f",&a1);
	printf("\nEnter angle2 :-");
	scanf("%f",&a2);
	printf("\nEnter angle3 :-");
	scanf("%f",&a3);
	x=a1+a2+a3;
	if (x==180){printf("\n Triangle is valid");
	}else {printf("\n Triangle is not valid");
	}
	return 0;
}
