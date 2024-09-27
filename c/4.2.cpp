//switch month
#include <stdio.h>
int main(){
	int month;
	printf("Enter number of month :- ");
	scanf("%d",&month);
	switch (month){
		
	case 1:
	printf("\n It's January");
	
	case 2:
	printf("\n It's February");
	break;
	case 3:
	printf("\n It's March");
	break;
	case 4:
	printf("\n It's April");
	break;
	case 5:
	printf("\n It's May");
	break;
	case 6:
	printf("\n It's June");
	break;
	case 7:
	printf("\n It's July");
	break;
	case 8:
	printf("\n It's August");
	break;
	case 9:
	printf("\n It's September'");
	break;
	case 10:
	printf("\n It's October");
	break;
	case 11:
	printf("\n It's November");
	break;
	case 12:
	printf("\n It's December");
	break;
	default:
		printf("\n It's invalid");   
		
	}
}
