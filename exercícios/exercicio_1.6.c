#include <stdio.h>

int main(){
	
	
	/*
	7) Fa�a um programa que pe�a ao usu�rio um caracter e diga se � vogal ou n�o.
	*/
	char letra;
	printf("Digite uma letra: ");
	letra = getchar();
	
	letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ?
	printf("Vogal") : printf("Consoante");
	
	return 0;
}
