#include <stdio.h>

int main(){
	/*
	6) Crie um programa emCque permita fazeraconvers�o cambial entre ReaiseD�lares. Considere
	como taxa de c�mbio US$1,0=R$5,30. Leia um valor em Reais e mostre o correspondente em
	D�lares.	
                                    
	
	*/
	float real, dolar;
	
	printf("------ CONVERSAO REAL-DOLAR ------\n");
	printf("Real: ");
	scanf("%f", &real);
	printf("\n----------------------------------");
	dolar = real * 5.30;
	printf("\nDolar: %.2f", dolar);
	
	
	return 0;
}
