#include <stdio.h>

struct Idade{
	int dia;
	int mes;
	int ano;
	
};

struct Pessoa{
	char nome[30];
	struct Idade idade;
};

	
int main(){
	
	//declarações de funções
	struct Pessoa cadastrar_pessoa(void);
	void imprimir_pessoa(struct Pessoa p);
	
	//declaração de variáveis
	struct Pessoa p1;
	
	//início do programa
	p1 = cadastrar_pessoa();
	imprimir_pessoa(p1);
	return 0;
}

struct Pessoa cadastrar_pessoa(void){
	struct Pessoa p;
	printf("Digite o nome: ");
	fgets(p.nome, 30, stdin); fflush(stdin);
	printf("Digite o dia/mes/ano nesse formato: dd mm aaaa: ");
	scanf("%i %i%i", &p.idade.dia, &p.idade.mes, &p.idade.ano);
	return p;
	
}

void imprimir_pessoa(struct Pessoa p){
	printf("\n\tNome: %s", p.nome);
	printf("\tAno de nascimento: %2i/%2i/%4i", p.idade.dia, p.idade.mes, p.idade.ano);
}
