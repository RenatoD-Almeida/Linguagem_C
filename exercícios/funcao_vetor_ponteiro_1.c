#include <stdio.h>
	
/*
Refor�ando fun��es que cadastram vetores em C
*/


	
int main(){
	
// Declara��o de fun��es:
	void cadastraCasaVetor(int vetor[], int *x), imprimir_vetor_inteiro(int vetor[]);
	

// Declara��o das vari�veis:
	int array[10] = {0};
	int i = 0;

// Script:	Cadastrar 3 casas do vetor e depois imprimir todo o vetor
	cadastraCasaVetor(array, &i);
	cadastraCasaVetor(array, &i);
	cadastraCasaVetor(array, &i);
	imprimir_vetor_inteiro(array);

	return 0;
}

void cadastraCasaVetor(int vetor[], int *x){
	printf("Digite o valor para a casa %i do vetor: ", *x);
	scanf("%i", &vetor[*x]);
	++*x;
}

void imprimir_vetor_inteiro(int vetor[]){
	int i = 0;
	printf("[");
	while(vetor[i] != '\0'){
		(vetor[i + 1] == '\0') ? printf(" %i ", vetor[i]) : printf(" %i -", vetor[i]);
		++i;
	}
	printf("]");
}
