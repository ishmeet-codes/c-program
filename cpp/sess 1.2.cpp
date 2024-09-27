#include <stdio.h>
int main(){
	
	
	float sub1_m,sub2_m,sub3_m,sub4_m,sub5_m,tot_m,perc;

	printf("Marks in subject 1:-");
	scanf("%f",&sub1_m);
	printf("\nMarks in subject 2:-");
	scanf("%f",&sub2_m);
	printf("\nMarks in subject 3:-");
	scanf("%f",&sub3_m);
	printf("\nMarks in subject 4:-");
	scanf("%f",&sub4_m);
	printf("\nMarks in subject 5:-");
	scanf("%f",&sub5_m);
	tot_m = sub1_m+sub2_m+sub3_m+sub4_m+sub5_m;
	printf("Total marks obtained:- %f",tot_m);
	perc = tot_m/500*100;
	printf("\nPercentage obtained:- %f",perc);
	return 0;
}
