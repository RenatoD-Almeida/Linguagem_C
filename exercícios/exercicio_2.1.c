#include <stdio.h>
	
int main(){
	int num, i;
	printf("---- Tabuada ----\n\n");
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	for (i = 0; i <= 10; ++i){
		printf("%i x %i = %i\n", num, i, (num*i));
	}
	
	
	
	return 0;
}
