#include <stdio.h>

struct Pessoa{
	char nome[30];
	int idade;
}pessoas[10];

	
int main(){
	void cadastra_pessoa(struct Pessoa x[], int *i);
	void imprimir_vetor_pessoas(struct Pessoa x[], int *p);
	int i = 0;
	
	cadastra_pessoa(pessoas, &i);
	cadastra_pessoa(pessoas, &i);
	imprimir_vetor_pessoas(pessoas, &i);
	
	return 0;
}

void cadastra_pessoa(struct Pessoa x[], int *i){
	printf("Digite o valor do nome:\n\t");
	fgets(x[*i].nome, 30, stdin); fflush(stdin);
	printf("Digite a idade:\n\t");
	scanf("%i", &x[*i].idade); fflush(stdin);
	++*i;
}

void imprimir_vetor_pessoas(struct Pessoa x[], int *p){
	int i;
	for (i = 0; i < *p; ++i){
		printf("\n\tNome: %s", x[i].nome);
		printf("\tIdade: %i\n", x[i].idade);
	}
}
