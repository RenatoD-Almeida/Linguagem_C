#include <stdio.h>

int main(){
	
	/*
	2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a vari�vel �a" e um
	para a vari�vel �b". Em seguida, fa�a os passos que julgar necess�rio para que ao final,a vari�vel
	"a" possua o valor que inicialmente estava em "b" e a vari�vel �b" possua o valor que inicialmente
	estava em "a". Traduza seu algoritmo para a linguagem C e exiba os valores na tela.	
	*/
	
	int a, b, aux;
	printf("Digite o valor da variavel a: ");
	scanf("%i", &a);
	
	printf("\nDigite o valor da variavel b: ");
	scanf("%i", &b);
	
	printf("A = %i\nB = %i", a, b);
	
	printf("\n------ invertendo valores ------\n");
	
	aux = a;
	a = b;
	b = aux;
	printf("A = %i\nB = %i", a, b);
	
	
	
	return 0;
}
