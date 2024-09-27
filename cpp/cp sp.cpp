//profit or loss calculation , User input:- Selling price ,cost price 
#include<stdio.h>
int main()
{
	int a,b,c,profit,loss;
	
	printf("selling price");
	scanf("%d",&a);
	
	printf("cost price");
	scanf("%d",&b);
	 
	if(a>b)
			{  
				profit=a-b;
				printf("profit=%d",profit);	
			}
	else
			{
				loss=b-a;
				printf("loss=%d",loss);
				
			}

	return 0;
}
	
	
	
	
