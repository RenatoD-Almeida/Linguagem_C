#include <stdio.h>

int main(){
	
	/*
	5) Uma empresa contrata um encanador a RS 45,00 por dia. Faça um programa que solicite o
	número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
	sabendo que são descontados 8% para imposto de renda.
	*/
	int dias;
	printf("------ Encanador ------\n");
	printf("RS45,00 valor diario\n");
	printf("Quantos dias pende o contrato?\n");
	scanf("%i", &dias);
	float final_total = (float) dias * 45;
	float total_imposto = final_total - (final_total *(8/100));
	printf("-----------------------\n");
	printf("Com os 8%% de imposto de renda:\n");
	printf("Valor total: RS%.2f", total_imposto);
	
	
	return 0;
}
