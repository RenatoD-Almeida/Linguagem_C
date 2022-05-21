#include <stdio.h>
#include <stdlib.h>
	
struct Valor{
	int dado;
};	
	
int main(){
	
	struct Valor *ptr;
	ptr = (struct Valor *)malloc(sizeof(struct Valor));
	
	if(ptr){
		printf("\nMemoria alocada com sucesso\n");
		printf("Digite um valor: ");
		scanf("%d", &ptr->dado);
		printf("\n%p: %d\n", ptr, ptr->dado);
	}else{
		printf("Erro ao alocar memoria");
	}
	
	free(ptr);
	return 0;
}
