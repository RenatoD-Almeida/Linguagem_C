#include <stdio.h>

int main(){
	
	int x;
	
	printf("Digite um valor: ");
	scanf("%i",  &x);
	
	if(x > 10){
		if(x % 2 == 0){
			printf("O numero %i eh par e maior que 10", x);	
		}else{
			printf("O numero %i eh impar e maior que 10", x);
		}
	}else{
		if(x % 2 == 0){
			printf("O numero %i eh par e menor que 10", x);			
		}else{
			printf("O numero %i eh impar e menor que 10", x);			
		}
		
	}
	
	return 0;
}
