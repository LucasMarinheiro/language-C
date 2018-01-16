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
	int numerodetentativas;
	int nivel;
	int acertou;
	// int ganhou = 0;
	int tentativa = 1;
	double pontos = 1000;

	printf("(1) Facil (2) Medio (3) Dificil\n");
	printf("Escolha um nivel: ");
	scanf("%d", &nivel);

	switch(nivel){
		case 1:
			numerodetentativas = 20;
			break;
		case 2:
			numerodetentativas = 15;
			break;
		default:
			numerodetentativas = 6;
	}

	for(int i = 0; i <= numerodetentativas; i++){
		printf("Tentativa %d de %d\n", tentativa, numerodetentativas);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("seu chute foi %d\n", chute);

		if(chute < 0){
			printf("Você não pode chutar numeros negativos\n");

			continue;
		}

		acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;
		int menor = chute < numeroSecreto;
		double pontosperdidos;

		if(acertou){
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
	if(acertou){
		printf("Parabens você ganhou!\n");
		printf("Você acertou na tentativa %d\n", tentativa);
		printf("Pontos: %.1f\n", pontos);
	}
	else{
		printf("tente novamente!\n");
	}
}