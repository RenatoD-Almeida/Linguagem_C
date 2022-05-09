#include <stdio.h>

int main(){
	float peso, h, imc;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);	
	printf("\nDigite seu altura: ");
	scanf("%f", &h);
	
	imc = peso/(h*h);
	
	printf("\n\t- IMC: %.1f", imc);
	
	if(imc < 18.5){
		printf("\n\t- Abaixo do peso");
	}else if(imc >= 18.5 && imc < 25){
		printf("\n\t- Peso normal");
	}else if(imc >= 25 && imc < 30){
		printf("\n\t- Sobrepeso");
	}else if(imc >= 30 && imc < 35){
		printf("\n\t- Obesidade grau 1");
	}else if(imc >= 35 && imc < 40){
		printf("\n\t- Obesidade grau 2");
	}else{
		printf("\n\t- Obesidade grau 3");
	}
	
	
	return 0;
}
