#include <stdio.h>

int main(){
	
	/*
	6) Fa�a um programa para ler um n�mero inteiro e verificar se corresponde a um m�s v�lido no
	calend�rio. Caso corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem 'M�s
	Inv�lido'.		
	*/
	
	int num;
	printf("Digite um numero relativo a um mes:\n");
	scanf("%i", &num);
	switch(num){
		case 1:
			printf("\n\tJaneiro");
			break;
		case 2:
			printf("\n\tFevereiro");
			break;
		case 3:
			printf("\n\tMar�o");
			break;
		case 4:
			printf("\n\tAbril");
			break;
		case 5:
			printf("\n\tMaio");
			break;
		case 6:
			printf("\n\tJunho");
			break;
		case 7:
			printf("\n\tJulho");
			break;
		case 8:
			printf("\n\tAgosto");
			break;
		case 9:
			printf("\n\tSetembro");
			break;
		case 10:
			printf("\n\tOutubro");
			break;
		case 11:
			printf("\n\tNovembro");
			break;
		case 12:
			printf("\n\tDezembro");
			break;
		default:
			printf("\n\tMes invalido");
		
	}
	
	
	
	return 0;
}
