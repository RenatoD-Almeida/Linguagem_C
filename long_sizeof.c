#include <stdio.h>

int main(){
	// operador long para aumentar em bytes a mem�ria de armazenamento
	
	
	long int x;
	printf("Tamanho da varivavel x em memoria: %i bytes\n", sizeof(x));
	// n�o h� diferen�a atualmente entre o long int e o int
	
	// possibilidade de ter dois longs antes da vari�vel
	
	long long y = 2147483647;
	printf("Tamanho da variavel Y em memoria: %i bytes", sizeof(y));
	
	/* 
	Para imprimir uma variavel do tipo long long int, � necess�rio acrescentar o 'll' no 
	Operador de sa�da
	*/
	++y;
	printf("\n\nPara demonstrar o valor de Y: %lli", y);
	
	return 0;
}
