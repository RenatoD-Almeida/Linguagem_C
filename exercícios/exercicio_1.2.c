#include <stdio.h>

int main(){
	
/*
2) Escreva um programa em C que l� 5 n�meros inteiros, um por vez. Conte quantos destes valores
s�o negativo se quantos s�o positivos. Ao final, imprima na tela a quantidade de n�meros negativos
e positivos.

SEM UTILIZAR LA�OS DE REPETI��O
*/


int a, b, c, d, e; 	// 5 n�meros inteiros
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
