#include <stdio.h>
int celsius(float fa){
	return(5.0/9.0)* (fa - 32.0);
}
int main() {
float fa;
printf("\n Enter temperature in Fahrenheit:- ");
scanf("%f",&fa);
  float result = celsius(fa);
   printf("Fahrenheit: %.2f\n", fa);
   printf("Convert Fahrenheit to Celsius: %.2f\n", result);

}
