#include <stdio.h>
#include <stdlib.h>

int main(){

	int multiplicador;
	printf("escolha um numero para ver a tabuada\n");
	scanf("%d", &multiplicador);
	
	for(int i = 1; i <= 10; i++){
		printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);

	}
}