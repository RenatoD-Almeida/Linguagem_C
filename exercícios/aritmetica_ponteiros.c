#include <stdio.h>
	
	/*
	Aritimética com ponteiro
	*/
	
	
	
int main(){
	void imprimir_vetor(int vet[], int tam);
	int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	imprimir_vetor(array, 10);
	
	return 0;
}



void imprimir_vetor(int vet[], int tam){
	int i;
	for (i = 0; i < tam; ++i){
		printf("%i ", *(vet + i));
	}
	
}
