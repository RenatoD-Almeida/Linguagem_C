#include <stdio.h>

int main(){
	/*
	6) Crie um programa emCque permita fazeraconversão cambial entre ReaiseDólares. Considere
	como taxa de câmbio US$1,0=R$5,30. Leia um valor em Reais e mostre o correspondente em
	Dólares.	
                                    
	
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
