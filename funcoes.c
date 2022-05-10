#include <stdio.h>
	
int main(){
	int parOuImpar(int x), dobro(int x);
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	parOuImpar(numero) ? printf("Numero %i eh par", numero) : printf("Numero %i eh impar", numero);
	
	printf("\n\ndobro de %d: %d", numero, dobro(numero));
	return 0;
}


int parOuImpar(int x){
	if (x % 2 == 0){
		return 1;
	}else{
		return 0;
	}
}

int dobro(int x){
	return x*2;
}
