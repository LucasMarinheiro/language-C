#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int operacao = 1;
	double n1;
	double n2;
	double resultado;

	while(operacao != 0){
		printf("Escolha uma operação\n");
		printf(" 0:Desligar\n 1:Soma\n 2:Subtração\n 3:Divisão\n 4:Multiplicação\n");
		scanf("%d", &operacao);

		if(operacao == 1){
			printf("Digite o 1º numero\n");
			scanf("%f", &n1);
			printf("Digite o 2º numero\n");
			scanf("%f", &n2);
			resultado = n1 + n2;
		}else if(operacao == 2){
			printf("Digite o 1º numero\n");
			scanf("%f", &n1);
			printf("Digite o 2º numero\n");
			scanf("%f", &n2);
			resultado = n1 - n2;
		}else if(operacao == 3){
			printf("Digite o 1º numero\n");
			scanf("%f", &n1);
			printf("Digite o 2º numero\n");
			scanf("%f", &n2);
			resultado = n1 / n2;
		}else if(operacao == 4){
			printf("Digite o 1º numero\n");
			scanf("%f", &n1);
			printf("Digite o 2º numero\n");
			scanf("%f", &n2);
			resultado = n1 * n2;
		}else{
			printf("Escolha uma operação entre as opções validas");
		}
		printf("O Resultado da sua operação é\n");
		printf("%f\n", resultado);
	}
}