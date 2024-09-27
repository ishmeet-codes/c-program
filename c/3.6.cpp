//cp - sp =p&l
#include <stdio.h>
int main(){
	float cp,sp,x,y;
	printf("\nEnter cost price :-");
	scanf("%f",&cp);
	printf("\nEnter selling price :-");
	scanf("%f",&sp);
	
	if(sp>cp){x=sp-cp;
		printf("\nYou made profit of %f",x);
	}else if (cp>sp){y=cp-sp;
	printf("\nYou made loss of %f",y);
	}else if (cp=sp){printf("\nNO P&L ");
	}
}
