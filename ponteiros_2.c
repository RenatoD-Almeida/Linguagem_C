#include <stdio.h>
	
int main(){
	
	int num = 100; //serve para qualquer tipo primitivo.
	
	printf("\t\tVARIAVEL: NUM\n");
	printf("\nValor = %i", num);
	printf("\nEndereco = %p\n", &num);
	
	int *pont;
	pont = &num;
	
	printf("\n\t\tVARIAVEL: PONT\n");
	printf("\nEndereco apontado: %p", pont);
	printf("\nValor apontado: %d", *pont);
	printf("\nEndereco: %p", &pont);
	
	return 0;
}
