#include <stdio.h>

int main(){
	
	char sexo;
	int idade;
	float peso;
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	printf("\nDigite seu peso: ");
	scanf("%f", &peso); fflush(stdin); // fflush(stdin) limpa o cash de memória
	printf("\nDigite seu sexo: [f/m]: ");
	sexo = getchar();
	
	printf("\n--------------------------------\n");
	printf("Seu peso: %.2f", peso);
	printf("\nSeu sexo: %c", sexo);
	printf("\nSua idade: %i", idade);
	
	return 0;
}
