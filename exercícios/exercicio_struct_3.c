#include <stdio.h>
#include <string.h>

struct Idade{
	int dia;
	int mes;
	int ano;
	
};


struct Pessoa{
	char nome[30];
	struct Idade idade;
}p1 = {"Renato Mateus"};

	
int main(){
	
//declaração de função
void imprimir_pessoa(struct Pessoa p);
struct Idade cadastrar_data_nasc(void);


//Pograma...
p1.idade = cadastrar_data_nasc();
imprimir_pessoa(p1);	
	
	return 0;
}

struct Idade cadastrar_data_nasc(void){
	struct Idade p1_data;
	printf("Digite o dia: ");
	scanf("%i", &p1_data.dia);
	printf("Digite o mes: ");
	scanf("%i", &p1_data.mes);
	printf("Digite o ano: ");
	scanf("%i", &p1_data.ano);
	return p1_data;
}

void imprimir_pessoa(struct Pessoa p){
	printf("\n\tNome: %s", p.nome);
	printf("\tAno de nascimento: %2i/%2i/%4i", p.idade.dia, p.idade.mes, p.idade.ano);
}
