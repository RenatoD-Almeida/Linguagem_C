#include <stdio.h>

int main(){
	
	char c;
	printf("Digite um caractere em letra minuscula: ");
	scanf("%c", &c);
	
	if(c >= 'a' && c <= 'z'){
		printf("Segue a letra digitada em maiuscula: %c", toupper(c));
	}else{
		printf("esse caractere eh invalido");
	}
	
	
	return 0;
}
