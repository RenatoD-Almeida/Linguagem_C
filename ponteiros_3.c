#include <stdio.h>
	
int main(){
	
	int *d;
	char *c;
	float *f;
	
	printf("Tamanho do ponteiro do para inteiro: %d", sizeof(d)); // diretamante relacionado com a memória em seu computador
	printf("\nTamanho do ponteiro para char: %d", sizeof(c));
	printf("\nTamanho do ponteiro para float: %d", sizeof(f));
	
	return 0;
}
