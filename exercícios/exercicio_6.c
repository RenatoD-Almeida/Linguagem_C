#include <stdio.h>

int main(){
	
	int segundos, h, m, s, resto;
	
	printf("Quantos segundos?\n");
	scanf("%i", &segundos);
	
	h = segundos / 3600;
	resto = segundos % 3600;
	m = resto / 60;
	s = resto % 60;
	
	printf("%i:%i:%i", h, m, s); 
	
	return 0;
}
