#include <stdio.h>

int main(){
	
	char x;
	printf("Caractere minusculos: ");
	x = getchar();	
	
	// Averigua se o caractere se encontra em determinada  posição na tabela ASCII, verificando assim se é uma letra
	if((int) x >= 97 && (int) x <= 122){
		printf("\n\tLetra valida");
	}else{
		printf("\n\tLetra invalida");
	}
	
	
	
	
	return 0;
}
