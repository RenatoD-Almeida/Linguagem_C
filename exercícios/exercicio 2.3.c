#include <stdio.h>
	
int main(){
	
	int i = 1, par, impar;
	
	while(i < 1000){
		i % 2 == 0 ? (++par) : (++impar);
		++i;
	}
	
	printf("entre 0 e 1000 ha: ");
	printf("\n\t%i numeros pares", par);
	printf("\n\t%i numeros impares", impar);
	
	
	return 0;
}
