#include <stdio.h>
	
int main(){
	
	int numeros[5] = {1, 2, 3, 4, 5};
	int i;
	
	for (i = 0; i <= 4; ++i){
		printf("numeros[%i] = %i\n", i, numeros[i]);
		
	}
	
	return 0;
}
