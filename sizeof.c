#include <stdio.h>

int main(){
	/*
	Operador sizeof para ver o tamanho dos tipos primitivos
	*/
	
	printf("Tamanho da memoria de um inteiro: %d bytes", sizeof(int));
	int tamanho_int = sizeof(int) * 8;
	printf("\nO tamanho em memoria de um int em bits: %d", tamanho_int);
	printf("\n-------------------------------------------");
	printf("\nTamanho da memoria de um float: %d bytes", sizeof(float));
	int tamanho_float = sizeof(float) * 8;
	printf("\nO tamanho em memoria de um float em bits: %d", tamanho_float);
	printf("\n-------------------------------------------");
	printf("\nTamanho da memoria de um double: %d bytes", sizeof(double));
	int tamanho_double = sizeof(double) * 8;
	printf("\nO tamanho em memoria de um int em bits: %d", tamanho_double);
	printf("\n-------------------------------------------");
	printf("\nTamanho da memoria de um inteiro: %d bytes", sizeof(char));
	int tamanho_char = sizeof(int) * 8;
	printf("\nO tamanho em memoria de um int em bits: %d", tamanho_char);

	return 0;
}
