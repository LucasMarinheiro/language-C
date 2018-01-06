#include <stdio.h>

int main(){

	int multiplicador1;
	int multiplicador2;

	printf("Escolha um multiplicador para a multiplicação ");
	scanf("%d", &multiplicador1);
	printf("Escolha um multiplicando para a multipolicação ");
	scanf("%d", &multiplicador2);

	int produto = multiplicador1 * multiplicador2;

	printf("O resultado da mulplicação é %d \n", produto);

}