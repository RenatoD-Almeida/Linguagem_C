#include <stdio.h>
	
	
int main(){
	void copiar_string(char destino[], char origem[]);
	
	char palavra[20];
	
	copiar_string(palavra, "Eu sou muito bom");
	printf("No main: %s", palavra);
	
	
	return 0;
}

void copiar_string(char destino[], char origem[]){
	int i = 0;
	while(origem[i] != '\0'){
		destino[i] = origem[i];
		++i;
	}
}
