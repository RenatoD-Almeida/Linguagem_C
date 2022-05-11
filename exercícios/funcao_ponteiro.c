#include <stdio.h>
	
int main(){
	void incrementa(int *p);
	int num = 100, *pont;
	pont = &num;
	printf("antes da funcao: %i", num);
	incrementa(pont);
	printf("\tDepois da funcao: %i", num);
	
	
	return 0;
}


void incrementa(int *p){
	++*p;
}


