#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2;
	num1 = 15; 
	num2 = 20;
	
	int soma = num1 + num2;
	
	printf("%i + %i = %i\n", num1, num2, soma);
	
	int subtrai = num1 - num2;
	
	printf("%i - %i = %i\n", num1, num2, subtrai);
	
	int multi = num1 * num2;
	
	printf("%i * %i = %i\n", num1, num2, multi);

	float div = (float) num1 / num2;
	
	printf("%i / %i = %f\n", num1, num2, div);
	
	return 0;
}
