#include<stdio.h>
int check(int x){
	if(x%2 ==0){
		printf("\nNumber is even");
		
	}else {
		printf("\nNumber is odd");
	}
}

int main(){
	int x;
	printf("Enter number to check:-");
	scanf("%d",&x);
	check(x);
	
	return 0;
}
