#include <stdio.h>

int main(){
	// 1) Escreva um programa em C que leia tr�s valores e apresente qual � o maior e qual � o menor.
	int a, b, c, maior, menor;
	
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("\nDigite o valor de B: ");
	scanf("%i", &b);
	printf("\nDigite o valor de C: ");
	scanf("%i", &c);
	
	
	a < b ? (maior = b) : (menor = b);
	b < c ? (maior = c): (menor = c);
	
	printf("Maior: %i\n", maior);
	printf("Menor: %i", menor);
	
	
	
	
	return 0;
}
