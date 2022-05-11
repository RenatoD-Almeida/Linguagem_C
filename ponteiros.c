#include <stdio.h>
#include <locale.h>
		//O que � e como criar um ponteiro
	
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int num = 10; // regi�o de mem�ria para guardar um n�mero inteiro. Possui um endere�o �nico na mem�ria 
	
	//vari�vel do tipo ponteiro, � uma vari�vel que guarda um endere�o de mem�ria
	
	int *p; // * � o tipo, vari�vel p do tipo ponteiro, que mira em uma regi�o que guarda um n�mero inteiro
	p = &num; //Vari�vel do tipo ponteiro, apenas guarda endere�o de mem�ria
	
	printf("Valor de num: %d", num);
	printf("\nEndere�o de num: %p", &num);
	printf("\n----------------------------------\n");
	printf("Valor de \'p\': %d", *p); // * mostra o valor que a vari�vel aponta
	printf("\nEndere�o apontado por \'p\': %p", p); // vari�vel p guarda o endere�o de mem�ria
	printf("\nEndere�o de \'p\': %p", &p);
	
	
	
	
	return 0;
}
