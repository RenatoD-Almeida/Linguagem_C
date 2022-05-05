#include <stdio.h>


// leitura de char por getchar(), scanft("%c"), getche(), getc(stdin)
int main(){
	
	printf("Digite uma letra: (getche) \n"); // não é preciso dar "enter", porém como o enter não foi dado,
	char letra = getche();					// O proximo printf seguirá a mesmo linha
	printf("\nLetra digitada %c\n", letra);
	
	printf("\nDigite uma letra: (getchar) \n");
	char letra1 = getchar();
	printf("Letra digitada %c\n", letra1);
	
	printf("\nDigite uma letra: (scanf) \n");
	char letra2;		
	scanf("%c", &letra2);					// necessário integrar o fflush para limpar o cash de memória
	printf("Letra digitada %c\n", letra2);
	
	printf("\nDigite uma letra: (getc(stdin))");
	char letra3 = getc(stdin);
	printf("Letra digitada %c\n", letra3);
	
	
	return 0;
}
