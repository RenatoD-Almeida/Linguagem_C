#include <stdio.h>
#include <time.h>
	
int main(){
	int vet1[25][25], vet2[25][25], vet3[25][25], i, j;
	
	srand(time(NULL));
	
	for (i = 0; i < 25; ++i){
		for (j = 0; j < 25; ++j){
			vet1[i][j] = rand() % 10;
			vet2[i][j] = rand() % 10;
			vet3[i][j] = vet1[i][j] + vet2[i][j];
		}
	}
	printf("\t\tPRIMEIRA MATRIZ\n");
	for (i = 0; i < 25; ++i){
		for (j = 0; j < 25; ++j){
			printf("%i ", vet1[i][j]);
		}
		printf("\n");	
	}
	printf("\t\tSEGUNDA MATRIZ MATRIZ\n");
	for (i = 0; i < 25; ++i){
		for (j = 0; j < 25; ++j){
			printf("%i ", vet2[i][j]);
		}
		printf("\n");	
	}
	
	printf("\t\tTERCEIRA MATRIZ\n");
	for (i = 0; i < 25; ++i){
		for (j = 0; j < 25; ++j){
			printf("%i ", vet3[i][j]);
		}
		printf("\n");	
	}
	
	
	return 0;
}
