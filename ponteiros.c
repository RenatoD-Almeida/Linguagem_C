#include <stdio.h>
#include <locale.h>
		//O que é e como criar um ponteiro
	
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int num = 10; // região de memória para guardar um número inteiro. Possui um endereço único na memória 
	
	//variável do tipo ponteiro, é uma variável que guarda um endereço de memória
	
	int *p; // * é o tipo, variável p do tipo ponteiro, que mira em uma região que guarda um número inteiro
	p = &num; //Variável do tipo ponteiro, apenas guarda endereço de memória
	
	printf("Valor de num: %d", num);
	printf("\nEndereço de num: %p", &num);
	printf("\n----------------------------------\n");
	printf("Valor de \'p\': %d", *p); // * mostra o valor que a variável aponta
	printf("\nEndereço apontado por \'p\': %p", p); // variável p guarda o endereço de memória
	printf("\nEndereço de \'p\': %p", &p);
	
	
	
	
	return 0;
}
