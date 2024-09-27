#include<stdio.h>
int main()
{
	int sal,hra,ta,da,pf,gross,net;
	
	
	printf("salary",sal);
	scanf("%d",&sal);
	
	hra=sal*8.5/100;
	ta=sal*8/100;
	da=sal*7.5/100;
	pf=sal*9.5/100;
	
	printf(" \nhra is %d ",hra);
	printf(" \nta is %d" ,ta );
	printf(" \nda is %d", da);
	printf(" \npf is %d", pf);
	
	gross=hra+ta+da+pf+sal;
	net=sal-pf;
	
	printf("\ngross salary is %d",gross);
	printf("\nnet salary is %d",net);

	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
   
