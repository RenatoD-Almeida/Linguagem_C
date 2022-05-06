#include <stdio.h>

int main(){
	// operador long para aumentar em bytes a memória de armazenamento
	
	
	long int x;
	printf("Tamanho da varivavel x em memoria: %i bytes\n", sizeof(x));
	// não há diferença atualmente entre o long int e o int
	
	// possibilidade de ter dois longs antes da variável
	
	long long y = 2147483647;
	printf("Tamanho da variavel Y em memoria: %i bytes", sizeof(y));
	
	/* 
	Para imprimir uma variavel do tipo long long int, é necessário acrescentar o 'll' no 
	Operador de saída
	*/
	++y;
	printf("\n\nPara demonstrar o valor de Y: %lli", y);
	
	return 0;
}
