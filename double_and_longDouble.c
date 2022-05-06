#include <stdio.h>

int main(){
	 
	double y = 19.234123;
	long double x = 3.1415589658745896;
	printf("O tamanho em bytes de um float: %i", sizeof(float));
	printf("\nO tamanho em bytes de um double: %i", sizeof(double));
	printf("\nO tamanho em bytes de um long double: %i", sizeof(long double));
	printf("\nNumero double: %lf", y); // por padr�o imprime 6 casas decimais
	
	
	// para imprimir um long double � necess�rio uma fun��o do compilador __minw_printf()
	// para o long double, usar %Lf
	// Windows n�o imprimi um n�mero com 16 caracteres
	
	__mingw_printf("\nNumero long double: %.16Lf", x);
	
	return 0;
}
