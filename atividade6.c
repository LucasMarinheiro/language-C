#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int operacao;
	double n1, n2;

	while(1){
		printf("Escolha uma operação\n");
		printf(" 0:Desligar\n 1:Soma\n 2:Subtração\n 3:Divisão\n 4:Multiplicação\n");
		scanf("%d", &operacao);

		if(operacao == 0){
			printf("Obriago\n");
			break;
		}
		printf("Digite o 1º numero\n");
		scanf("%lf", &n1);
		printf("Digite o 2º numero\n");
		scanf("%lf", &n2);

		if(operacao == 1){
			printf("** Resultado: %.2lf **\n\n", n1 + n2);
		}
		else if(operacao == 2){
			printf("** Resultado: %.2lf **\n\n", n1 - n2);
		}
		else if(operacao == 3){
			printf("** Resultado: %.2lf **\n\n", n1 / n2);
		}
		else if(operacao == 4){
			printf("** Resultado: %.2lf **\n\n", n1 * n2);
		}
		else{
			printf("Escolha uma operação entre as opções validas\n");
			continue;
		}
	}
}