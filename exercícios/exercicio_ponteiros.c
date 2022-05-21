#include <stdio.h>
#include <stdlib.h>
	
int main(){
	
	int *ptr;
	
	ptr = (int*)malloc(sizeof(int));
	*ptr = 54;
	
	printf("Valor alocado ao endereco:\n%p: \t%i", ptr, *ptr);
	
	free(ptr);
	return 0;
}
