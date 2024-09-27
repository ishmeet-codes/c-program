#include<stdio.h>
int main()
{
int a,b,c,d,max;
printf("\nenter the value of a");
scanf("%d",&a);
printf("\nenter the value of b");
scanf("%d",&b);
printf("\nenter the value of c");
scanf("%d",&c);
printf("\nenter the value of d");
scanf("%d",&d);

max=a>b?a:b && a>c?a:c && a>d?a:d;
printf("max=%d",max);

	return 0 ;
}

















