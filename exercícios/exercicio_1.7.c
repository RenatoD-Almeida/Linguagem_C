#include <stdio.h>

int main(){
	/*
	8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
	isso a estrutura de seleção switch.
	Obs.: Considere fevereiro como tendo 28 dias.
	*/
	
	int num;
	printf("Digite um numero relativo a um mes:\n");
	scanf("%i", &num);
	switch(num){
		case 1:
			printf("\n\tJaneiro");
			printf("\n\t31 dias");
			break;
		case 2:
			printf("\n\tFevereiro");
			printf("\n\t28 dias");
			break;
		case 3:
			printf("\n\tMarço");
			printf("\n\t31 dias");
			break;
		case 4:
			printf("\n\tAbril");
			printf("\n\t30 dias");
			break;
		case 5:
			printf("\n\tMaio");
			printf("\n\t31 dias");
			break;
		case 6:
			printf("\n\tJunho");
			printf("\n\t30 dias");
			break;
		case 7:
			printf("\n\tJulho");
			printf("\n\t31 dias");
			break;
		case 8:
			printf("\n\tAgosto");
			printf("\n\t31 dias");
			break;
		case 9:
			printf("\n\tSetembro");
			printf("\n\t30 dias");
			break;
		case 10:
			printf("\n\tOutubro");
			printf("\n\t31 dias");
			break;
		case 11:
			printf("\n\tNovembro");
			printf("\n\t30 dias");
			break;
		case 12:
			printf("\n\tDezembro");
			printf("\n\t31 dias");
			break;
		default:
			printf("\n\tMes invalido");
			printf("\n\tNao ha dias no mes invalido");
	}
	return 0;
}
