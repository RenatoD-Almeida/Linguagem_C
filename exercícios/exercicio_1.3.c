#include <stdio.h>

int main(){
	
	int num;
	short int div2, div3, div5;
	
	printf("Digite um numero: \n");
	scanf("%i", &num);
	printf("Divisivel por:");
	
	num % 2 == 0 ? (div2 = 1) : (div2 = 0); 
	num % 3 == 0 ? (div3 = 1) : (div3 = 0);
	num % 5 == 0 ? (div5 = 1) : (div5 = 0);
	
	if(div2)
		printf(" 2,");
	if(div3)
		printf(" 3,");
	if(div5)
		printf(" 5.");
		
	return 0;
}
