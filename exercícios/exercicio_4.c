#include<stdio.h>

int main(){

/*
	4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
	porcentagem e o número de pessoas para dividira conta. Imprima o valor que cada um deve pagar.
	Assuma que a conta sera dividida igualmente.
*/

float despesa, gorjeta;
int num_pessoas;


printf("Quanto foi a conta no restaurante? \n");
scanf("%f", &despesa);
printf("\nQuantos por cento de gorjeta voces vao pagar?\n");
scanf("%f", &gorjeta);

despesa += (despesa * (gorjeta/100));

printf("\nQuantas pessoas vao dividir a conta?\n");
scanf("%i", &num_pessoas);

printf("\n\nO valor da conta: RS%.2f", despesa);
printf("\nNumero de pessoas a dividir a conta: %i", num_pessoas);
printf("\nO valor final a ser pago por pessoa: RS%.2f", (despesa/num_pessoas));



}
