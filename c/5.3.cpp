//array avg
#include <stdio.h>
int main(){
	
	float avg,sum=0;
	int marks[] = {99,99,99,99,99};
	for (int i = 0; i <5 ; i++) {
    sum += marks[i];
  }
	
	printf("\n Sum =%f",sum);
	avg = sum / 5;
	printf("\n average =%f",avg);
	return 0;
}
