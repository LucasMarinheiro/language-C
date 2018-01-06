#include <stdio.h>

int main() {
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;
	int chute;

	for(int i = 1; i <= 3; i++){
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("seu chute foi %d \n", chute);

		if(chute == numeroSecreto){
			printf("Parabens você acertou!\n");
			printf("Jogue de novo, você é um bom jogador\n");
		} else{
			if(chute > numeroSecreto){
				printf("Seu chute foi maior que o numero secreto.\n");
			}
			if (chute < numeroSecreto){
				printf("Seu chute foi menor que o numero secreto.\n");		
			}
		}
	}

}