#include <stdio.h>
	
/*
faça um script que tenha uma variável vetor, e crie uma função que sempre que chamada preencha apenas uma 
casa do vetor e a imprima;

*/
	
int main(){
	
	void insereVet(int vetor[], int *i);
	void imprimirVetor(int vetor[]);
	int vet[10] = {0}, i = 0;
	
	insereVet(vet, &i);
	insereVet(vet, &i);
	
	
	
	imprimirVetor(vet);
	
	
	
	
	return 0;
}

void insereVet(int vetor[], int *i){
	void imprimirCasaVetor(int vetor[], int i);
	
	printf("Digite o valor da posicao %i: ", *i);
	scanf("%i", &vetor[*i]);
	imprimirCasaVetor(vetor, *i);
	++*i;
}

void imprimirVetor(int vetor[]){
	int i = 0;
	printf("Vetor Completo: [");
	while(vetor[i] != '\0'){
		if(vetor[i+1] == '\0'){
			printf(" %i ", vetor[i]);
		}else{
			printf(" %i -", vetor[i]);
		}
		++i;
	}
	printf("]");
}

void imprimirCasaVetor(int vetor[], int i){
	printf("Vetor[%i] = %i\n", i, vetor[i]);
}
