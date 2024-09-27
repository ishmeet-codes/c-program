//greater or lesser
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter I number:- ");
	scanf("%d",&a);
	printf("Enter II number:- ");
	scanf("%d",&b);
	printf("Enter III number:- ");
	scanf("%d",&c);
	
    if(a>b && a>c)  
    {  
        printf("%d is largest",a);  
    }  
    if(b>a  && b > c)  
    {  
        printf("%d is largest",b);  
    }  
    if(c>a && c>b)  
    {  
        printf("%d is largest",c);  
    }  
      
 
	return 0;
}
