#include <stdio.h>

struct Data{
	int dia;
	int mes;
	int ano;
}data;

	
int main(){
	
	void imprimir_data(struct Data *x);
	struct Data *p;
	p = &data;
	
	
	data.dia = 19;
	data.mes = 01;
	data.ano = 2000;
	
	imprimir_data(p);
	printf("\nNo main: %2i/%2i/%4i", data.dia, data.mes, data.ano);
	
	return 0;
}

void imprimir_data(struct Data *x){
	printf("\nNa funcao: %2i/%2i/%4i", x->dia, x->mes, x->ano);
}
