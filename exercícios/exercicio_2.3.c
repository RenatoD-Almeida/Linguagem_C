#include <stdio.h>
	
int main(){
	int op, vet[10], i;
	
	while(i < 10){
		printf("Digite o valor da posicao %i\n\t-> ", i);
		scanf("%i", &vet[i]);
		++i;
	}
	
	do{
		fflush(stdin);
		printf("\n=====================================\n");
		printf("1 - Finalizar o programa\n");
		printf("2 - imprimir o vetor na ordem normal\n");
		printf("3 - imprimir o vetor na ordem inversa\n");
		printf("=====================================\n");
		printf("\t-> ");
		op = getchar();
		switch(op){
			case '1':
				printf("\n\n\t----- Ate logo -----");
				break;
			case '2':
				printf("\nVetor na posicao original: [ ");
				for (i = 0; i < 10; ++i){
					printf("%i ", vet[i]);
				}
				printf("]");
			case '3':
				printf("\nVetor na posicao inversa: [ ");
				for (i = 10; i > 0; ++i){
					printf("%i ", vet[i]);
				}
				printf("]");
		}
	}while(op == 1);
	
	return 0;
}
