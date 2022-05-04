#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int x, y;
	
	printf("Digite o valor de um numero:\n");
	scanf("%i", &x);
	printf("Digite o valor de outro numero:\n");
	scanf("%i", &y);
	printf("\n\n");
	printf("%i + %i = %i", x, y, x + y);
	printf("\n%i - %i = %i", x, y, x - y);
	printf("\n%i * %i = %i", x, y, x * y);
	printf("\n%i / %i = %f", x, y, (float)x / y);
	printf("\n%i ^ %i = %f", x, y, pow(x, y)); // função pow retorna um número do tipo double
	
	
	return 0;
}
