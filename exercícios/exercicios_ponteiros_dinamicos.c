#include <stdio.h>
#include <stdlib.h>

struct Pilha{
	struct NO *topo_da_lista;
	int tam;
};

struct NO{
	char nome[50];
	struct NO *anterior;
};
	
int main(){
	
	void iniciar_pilha(struct Pilha *pilha);
	void push(struct Pilha *pilha);
	void imprimir_pilha(struct Pilha *pilha);
		
	struct Pilha pilha_generica;
	iniciar_pilha(&pilha_generica);
	
	push(&pilha_generica);
	push(&pilha_generica);
	
	imprimir_pilha(&pilha_generica);
	
	
	return 0;
}

void iniciar_pilha(struct Pilha *pilha){
	pilha->topo_da_lista = NULL;
	pilha->tam = 0;
}

void push(struct Pilha *pilha){
	struct NO *novo_no;
	novo_no = (struct NO *)malloc(sizeof(struct NO));
	if(novo_no){
		printf("\n\tNovo Noh criado com sucesso");
		printf("\nDigite nome: ");
		scanf("%50[^\n]%*c", &novo_no->nome);
		novo_no->anterior = pilha->topo_da_lista;
		pilha->topo_da_lista = novo_no;
	}else{
		printf("Erro ao criar o Noh.");	
	}
}

void imprimir_pilha(struct Pilha *pilha){
	struct NO *aux;
	aux = pilha->topo_da_lista;
	while(aux){
		printf("\nNome: %s", aux->nome);
		aux = aux->anterior;
	}
}





