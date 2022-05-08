#include <stdio.h>

int main(){
	
	char letra;
	printf("Validando informacao.\n\n\tApenas caracteres minusculos\n");
	printf("\nDigite um caractere: ");
	letra = getchar(); fflush(stdin);
	
	(int) letra >= 97 && (int) letra <= 122 ?
	printf("\n\tLetra valida") :
	printf("\n\tLetra invalida");
	 
	return 0;
}
