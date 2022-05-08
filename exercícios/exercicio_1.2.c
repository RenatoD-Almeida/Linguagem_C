#include <stdio.h>

int main(){
	
/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativo se quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.

SEM UTILIZAR LAÇOS DE REPETIÇÃO
*/


int a, b, c, d, e; 	// 5 números inteiros
int pos, neg; 		// quantidade de positivos e negativos

pos = neg = 0;

printf("Digite 5 numeros negativos: (separando-os por espaco)\n");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

a > 0 ? ++pos : ++neg;
b > 0 ? ++pos : ++neg;
c > 0 ? ++pos : ++neg;
d > 0 ? ++pos : ++neg;
e > 0 ? ++pos : ++neg;

printf("\nNumeros digitados: %i, %i, %i, %i, %i", a, b, c, d, e);
printf("\nNumeros positivos: %i\tNumeros negativos: %i", pos, neg);
	return 0;
}
