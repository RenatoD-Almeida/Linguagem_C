#include <stdio.h>
	
int main(){
	
	char palavra[100];
	
	scanf("%100[^\n]", palavra);
	
	printf("\nvalor de \'palavra\': %s", palavra);
	
	printf("\n\n\t%p", palavra);
	printf("\n\t%p", &palavra);
	printf("\n\t%p", &palavra[0]);
	return 0;
}
