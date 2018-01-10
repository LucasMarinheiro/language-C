#include <stdio.h>


int main(){

	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numeroSecreto = 42;
	int chute;
	int ganhou = 0;
	int tentativa = 0;

	while(ganhou == 0){
		printf("Tentativa %d\n", tentativa + 1);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("seu chute foi %d\n", chute);

		if(chute < 0){
			printf("Você não pode chutar numeros negativos\n");

			continue;
		}

		int acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;
		int menor = chute < numeroSecreto;

		if(acertou){
			printf("Parabens você acertou!\n");
			printf("Jogue de novo, você é um bom jogador\n");

			ganhou = 1;

		}else if(maior){
				printf("Seu chute foi maior que o numero secreto.\n");
		} else {
				printf("Seu chute foi menor que o numero secreto.\n");		
			}
			tentativa++;
		}
	printf("Fim de jogo!\n");
	printf("Você acertou na tentativa %d\n", tentativa);
}