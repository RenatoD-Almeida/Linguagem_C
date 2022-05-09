#include <stdio.h>
	
int main(){
	int verifica = 1, i = 0;
	char nome1[20] = {"Renato Mateus"}, nome2[20] = {"Renato Matheus"};
	
	while(nome1[i] != '\0'){
		if(nome1[i] == nome2[i]){
			++i;
			continue;
		}else{
			verifica = 0;
			break;
		}
	}
	
	verifica ? printf("Strings iguais") : printf("String diferentes");
	
	
	return 0;
}
