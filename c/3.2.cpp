//marks
#include <stdio.h>
int main() {

	float m1,m2,m3,m4,m5,x,y,marks;
	char stnm;
/*	printf("Enter student name:- ");
	scanf("%c ",&stnm);*/
	
	printf("\n Enter marks in subject I");
	scanf("%f",&m1);
	printf("\n Enter marks in subject II :-");
	scanf("%f",&m2);
	printf("\n Enter marks in subject III :-");
	scanf("%f",&m3);
	printf("\n Enter marks in subject IV :-");
	scanf("%f",&m4);
	printf("\n Enter marks in subject V :-");
	scanf("%f",&m5);
	x=m1+m2+m3+m4+m5;
	y=x/500;
	marks=y*100;
	  if(marks > 85 && marks <= 100)  
    {  
        printf("Congrats ! you scored grade A ...");   
    }  
    else if (marks > 60 && marks <= 85)   
    {  
        printf("You scored grade B + ...");  
    }  
    else if (marks > 40 && marks <= 60)   
    {  
        printf("You scored grade B ...");  
    }  
    else if (marks > 30 && marks <= 40)   
    {  
        printf("You scored grade C ...");   
    }  
    else   
    {  
        printf("Sorry you are fail ...");   
    }  
	return 0;
}
