#include <stdio.h>


// leitura de char por getchar(), scanft("%c"), getche(), getc(stdin)
int main(){
	
	printf("Digite uma letra: (getche) \n"); // n�o � preciso dar "enter", por�m como o enter n�o foi dado,
	char letra = getche();					// O proximo printf seguir� a mesmo linha
	printf("\nLetra digitada %c\n", letra);
	
	printf("\nDigite uma letra: (getchar) \n");
	char letra1 = getchar();
	printf("Letra digitada %c\n", letra1);
	
	printf("\nDigite uma letra: (scanf) \n");
	char letra2;		
	scanf("%c", &letra2);					// necess�rio integrar o fflush para limpar o cash de mem�ria
	printf("Letra digitada %c\n", letra2);
	
	printf("\nDigite uma letra: (getc(stdin))");
	char letra3 = getc(stdin);
	printf("Letra digitada %c\n", letra3);
	
	
	return 0;
}
