#include <stdio.h>
	
typedef struct Pessoa{
	char nome[30];
	int idade;
}Pessoa;
	
	
int main(){

//fun��es declaradas
	Pessoa cadastro(void);
	void imprimir_pessoa(struct Pessoa X);
	
//Vari�veis cadastradas	escopo local
	Pessoa p1;
	
//Execu��o das fun��es
	p1 = cadastro();
	imprimir_pessoa(p1);
	
	return 0;
}



Pessoa cadastro(){
	struct Pessoa p;
	printf("Digite o nome: ");
	fgets(p.nome, 30, stdin); fflush(stdin);
	printf("Digite a idade: ");
	scanf("%i", &p.idade);
	return p;
}

void imprimir_pessoa(Pessoa X){
	printf("\n\tNome: %s", X.nome);
	printf("\tIdade: %i", X.idade);
}


