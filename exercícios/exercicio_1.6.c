#include <stdio.h>

int main(){
	
	
	/*
	7) Faça um programa que peça ao usuário um caracter e diga se é vogal ou não.
	*/
	char letra;
	printf("Digite uma letra: ");
	letra = getchar();
	
	letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ?
	printf("Vogal") : printf("Consoante");
	
	return 0;
}
