#include <stdio.h>
	
	
/*
Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços
de duas variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior
valor do vetor.
*/

int main(){

// Declaração das funções
	void cadastrar_vetor(int vetor[], int *i);
	void imprimir_vetor(int vetor[], int j);
	void menor_maior(int vetor[], int j, int *maior, int *menor);
	
// Declaração das variáveis
	int vet[10] = {0};
	int tam = 0, maior, menor;	
	
// Script:
	cadastrar_vetor(vet, &tam);
	cadastrar_vetor(vet, &tam);
	cadastrar_vetor(vet, &tam);
	menor_maior(vet, tam, &maior, &menor);
	imprimir_vetor(vet, tam);
	printf("\n\n\tMaior valor: %i\n\tMenor valor: %i", maior, menor);
	
	return 0;
}


void cadastrar_vetor(int vetor[], int *i){
	printf("Digite o valor de vetor[%i]: ", *i);
	scanf("%i", &vetor[*i]);
	++*i;
}


void imprimir_vetor(int vetor[], int j){
	int i;
	printf("[ ");
	for (i = 0; i < j; ++i){
		printf("%i ", vetor[i]);
	}
	printf("]");
}

void menor_maior(int vetor[], int j, int *maior, int *menor){
	int i;
	*maior = vetor[0];
	*menor = vetor[0];
	for (i = 0; i < j; ++i){
		if(vetor[i] > *maior){
			*maior = vetor[i];
		}
		if(vetor[i] < *menor){
			*menor = vetor[i];
		}
	}
}




