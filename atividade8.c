#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	printf("********************************************\n");
	printf("** Bem Vindo ao nosso jogo de adivinhação **\n");
	printf("********************************************\n");

	int segundos = time(0);
	srand(segundos);
	int numerosecreto = rand() % 100;

	int nivel;
	int acertou;
	int numerodetentativas;
	int chute;
	int tentativas = 1;
	double pontos = 1000;

	printf("escolha o nivel:\n");
	printf("(1)Facil (2)Medio (3)Dificil\n");
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
			break;
	}

	for(tentativas; tentativas <= numerodetentativas; tentativas++){
		printf("Tentativa %d de %d\n", tentativas, numerodetentativas);
		printf("Qual o seu chute? ");
		scanf("%d", &chute);

		int maior = (chute > numerosecreto);
		acertou = (chute == numerosecreto);

		if(acertou){

			break;
		}

		if(chute < 0){
			printf("Numeros negativos não são validos. Tente novamente\n");
			tentativas--;
			continue;
		}
		else if(maior){
			printf("Seu chute foi maior que o numero secreto\n");
		}
		else {
			printf("Seu chute foi menor que o numero secreto\n");
		}

		double pontosperdidos = abs(chute - numerosecreto) / (double)2;
		pontos = pontos - pontosperdidos;
	}

	if(acertou){
		printf("****************************\n");	
		printf("*** Parabens você acertou **\n");
		printf("****************************\n\n");
		printf("** Você fez %.2lf pontos **\n", pontos);
	}
	else{

		printf("*** Você perdeu!! Tente novamente ***\n");
	}
}