#include <stdio.h>

int main(){
	
	/*
		1) toda variável possui um nome
		2) toda variável possui um tipo
		3) toda variável possui um tamanho
		4) toda variável possui um valor
	*/
	
	int num;
	float nump;
	char letra;
	
	printf("num = %i\n", num);
	printf("nump = %f\n", nump);
	printf("letra = %c\n", letra);
	
	num = 10;
	nump = num + 15;
	letra = 'c';
	
	printf("\n");
	printf("num = %i\n", num);
	printf("nump = %f\n", nump);
	printf("letra = %c\n", letra);
	
	
	return 0;
}
