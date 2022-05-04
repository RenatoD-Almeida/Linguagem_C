#include <stdio.h>

int main(){
	
	/*
		1) char -> 1 byte (8 bits) (%c)
		2) int -> -32768 a 32767 - 2 bytes (%i ou %d)
		3) float -> 7 a 8 casas decimais - 4 bytes (%f)
		4) void -> vazio 
		1) double -> vazio - 8 bytes (%f)
	*/
	
	int num = 11;
	printf("%i", num);
	printf("\n");
	
	/*
		Tipos de saída:
			int					%i ou %d
			float / double		%f
			char				%c
			string				%s
			
	endereçamento de memória	%p
	módulo de um número			%u
	N° com notação Científica	%e ou %E
	*/
	
	float ff = 4.12;
	printf("%f", ff);
	printf("\n");
	
	printf("%i - %f", num, ff);
	
	
	return 0;
}
