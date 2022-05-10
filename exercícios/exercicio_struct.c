#include <stdio.h>
#include <string.h>


struct Pessoa{
	char nome[15];
	int idade;
	float peso, altura;
};
	
int main(){
	
	struct Pessoa pessoa;
	void imprimirPessoa(struct Pessoa p1);
	
	strcpy(pessoa.nome, "Renato Mateus");
	pessoa.idade = 22;
	pessoa.peso = 79;
	pessoa.altura = 1.79;
	imprimirPessoa(pessoa);
	return 0;
}

void imprimirPessoa(struct Pessoa p1){
	printf("nome: %s\nidade: %d\npeso: %.1f\n altura: %.1f", p1.nome, p1.idade, p1.peso, p1.altura);
}


