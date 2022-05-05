#include <stdio.h>

int main(){
	
	/* 
	Da pra subentender que a var positivo tem o valor True, possibilidando assim
	que o ciclo while seja infinito até o momento do break
	*/
	int positivo = 1;
	int contador = 0;
	while(positivo){
		printf("contador menor que 50\n");
		++contador;
		if (contador > 50){
			printf("___ contador maior que 50 ___\n");
			break;
		}
	}
	printf("contador: %i", contador);	
	return 0;
}
