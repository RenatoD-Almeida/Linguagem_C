#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x;
	
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	printf("\nO dobro de %i eh %i", x, x*2);
	printf("\na metade de %i eh %.2f", x, (float)x/2);
	printf("\nO quadrado de %i eh %i", x, x*x);
	
	
	
	return 0;
}
