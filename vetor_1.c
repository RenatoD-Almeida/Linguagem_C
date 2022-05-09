#include <stdio.h>
#include <time.h>

int main(){
	
	
	int i, vet[10] = {0};
	
	srand(time(NULL));
	for (i = 0; i < 10; ++i){
		vet[i] = 1 + rand() % 10;
	}
	
	for(i = 0; i < 10; ++i){
		printf("%i\n", vet[i]);
	}
	
	return 0;
}
