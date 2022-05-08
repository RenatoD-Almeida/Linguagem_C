#include <stdio.h>

int main(){
	
	/*
	3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
	variável auxiliar.
	*/
	
	
	/*
		x = 10
		y = 5
		
			x = x + y -> 15
			y = x - y -> 10
			x = x - y ->  5
	*/
	
	int x, y;
	printf("Digite o valor de x: ");
	scanf("%i", &x);
	printf("Digite o valor de y: ");
	scanf("%i", &y);

	printf("\n--------------------------------");
	
	printf("\n\n\tX = %i\n\tY = %i\n", x, y);
	
	printf("\n------ Invertendo valores ------");
	x += y;
	y = x - y;
	x = x - y;
	
	printf("\n\n\tX = %i\n\tY = %i\n", x, y);
	
	
	return 0;
}
