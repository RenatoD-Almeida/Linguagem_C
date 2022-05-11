#include <stdio.h>
#include <string.h>
	
/*
crie uma função que receba parâmetro por referencia, popule uma struct e outra que a imprima;
*/

struct Pessoa{
	char nome[30];
	int idade;
	float peso, altura;
};


int main(){

// Declaração das funções
	void cadastrar_pessoa(struct Pessoa *p);
	void imprimir_pessoa(struct Pessoa p);
	

// Declaração das variáveis
	struct Pessoa pessoa;


// Script:
	cadastrar_pessoa(&pessoa);
	imprimir_pessoa(pessoa);
	
	
	return 0;
}

void cadastrar_pessoa(struct Pessoa *p){
	char nome[30];
	int idade;
	float peso, altura;
	
	printf("Digite seu nome: ");
	scanf("%30[^\n]", nome);
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	strcpy(p->nome, nome);
	p->idade = idade;
	p->peso = peso;
	p->altura = altura;
	
}

void imprimir_pessoa(struct Pessoa p){
	printf("\n\tNome: %s", p.nome);
	printf("\n\tIdade: %i", p.idade);
	printf("\n\tPeso: %.2f", p.peso);
	printf("\n\tAltura: %.2f", p.altura);
}





