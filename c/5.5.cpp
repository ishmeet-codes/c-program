//array sum 
#include <stdio.h>
int main(){
	int i,marks[5],sum;
	printf("Enter msrks :-");
	for(i=0;i<=4;i++){
		scanf("%d",&marks);
	}
	for (int i = 0; i <5 ; i++) {
    sum += marks[i];
  }
}
