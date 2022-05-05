#include <stdio.h>

int main(){
	/*
	utilizar o ffflush(stin para limpar o buffer do teclado ou o caractere
	"space" no scanf também funciona, como no exemplo abaixo:
	*/
	
	char sexo;
	int idade;
	float peso, altura;
	
	printf("Digite a idade, sexo, peso e altura:\n");
	scanf("%i %c%f%f", &idade, &sexo, &peso, &altura);
	
	printf("\nidade: %i\nSexo: %c\nPeso: %.2f\nAltura: %.2f", idade, sexo, peso, altura);
	
	return 0;
}
