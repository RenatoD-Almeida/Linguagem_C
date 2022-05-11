#include <stdio.h>

//como passar um ponteiro como função

//linguagem c não suporta a passagem de parâmetro por referencia
	
int main(){
//declaração de função
	void imprimir(int num);
	void imprimir_ponteiro(int *num);
//variáveis
	int idade = 35;
	
// script
	imprimir(idade);
	imprimir_ponteiro(&idade);
	printf("\nimprimir no main: %i", idade);
	return 0;
}

void imprimir(int num){ 	// passagem de parâmetro por valor
	printf("%i", num);
	num = 80;
}

void imprimir_ponteiro(int *num){ 	// passagem de parâmetro por "referência"
	printf("\nvalor do ponteiro de num: %d", *num);
	*num = 80; 
}
