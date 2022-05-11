#include <stdio.h>

//como passar um ponteiro como fun��o

//linguagem c n�o suporta a passagem de par�metro por referencia
	
int main(){
//declara��o de fun��o
	void imprimir(int num);
	void imprimir_ponteiro(int *num);
//vari�veis
	int idade = 35;
	
// script
	imprimir(idade);
	imprimir_ponteiro(&idade);
	printf("\nimprimir no main: %i", idade);
	return 0;
}

void imprimir(int num){ 	// passagem de par�metro por valor
	printf("%i", num);
	num = 80;
}

void imprimir_ponteiro(int *num){ 	// passagem de par�metro por "refer�ncia"
	printf("\nvalor do ponteiro de num: %d", *num);
	*num = 80; 
}
