#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int segundos = time(0);
	srand(segundos);

	int numeroSecreto = rand() % 100;
	int chute;
	int ganhou = 0;
	int tentativa = 1;
	double pontos = 1000;

	while(1){
		printf("Tentativa %d\n", tentativa);
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
		double pontosperdidos;

		if(acertou){
			printf("Parabens você acertou!\n");
			printf("Jogue de novo, você é um bom jogador\n");

			break;

		}else if(maior){
				printf("Seu chute foi maior que o numero secreto.\n");
		} else {
				printf("Seu chute foi menor que o numero secreto.\n");
			}
			tentativa++;
			pontosperdidos = abs(chute - numeroSecreto) / (double)2;
			pontos = pontos - pontosperdidos;
		}
	printf("Fim de jogo!\n");
	printf("Você acertou na tentativa %d\n", tentativa);
	printf("Pontos: %.1f\n", pontos);
}