#include <stdio.h>

int main(){
	
	char palavra[20];
	int contador = 0, i = 0;
	
	printf("\nDigite uma frase: ");
	fgets(palavra, 20, stdin);
	printf("\n\n\tFrase digitada %s", palavra);
	
	while((int) palavra[i] != 0){
		++contador;
		++i;
	}
	
	printf("\n\nEssa string tem %i caracteres", contador); // nunca terá 20 caracteres devido ao /0
	
	
	
	return 0;
}
