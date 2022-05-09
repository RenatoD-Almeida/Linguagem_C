#include <stdio.h>
	
int main(){
	int i;
	printf("Digite um valor: ");
	scanf("%i", &i);
	
	if(i > 100){
		do{
			printf("%i\n", i--);
		}while(i != 100);
	}else{
		do{
			printf("%i\n", i++);
		}while(i != 100);
	}
	
	
	return 0;
}
