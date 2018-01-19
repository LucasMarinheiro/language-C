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
                    

	printf("          ???????     	\n");
	printf("        ??:::::::??   	\n");
	printf("      ??:::::::::::?  	\n");
	printf("     ?:::::????:::::? 	\n");
	printf("     ?::::?    ?::::? 	\n");
	printf("     ?::::?     ?::::?	\n");
	printf("     ??????     ?::::?	\n");
	printf("               ?::::? 	\n");
	printf("              ?::::?  	\n");
	printf("             ?::::?   	\n");
	printf("            ?::::?    	\n");
	printf("           ?::::?     	\n");
	printf("           ?::::?     	\n");
	printf("           ??::??     	\n");
	printf("            ????      	\n");
	printf("                      \n\n");
	printf("            ???       	\n");
	printf("           ??:??      	\n");
	printf("            ???       	\n");


	int chute;
	int numerodetentativas;
	int nivel;
	int acertou;
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
		case 3:
			numerodetentativas = 6;
			break;
		default:
			printf("Esta não é uma opção valida\n");
			numerodetentativas = -1;
			break;
	}

	for(int i = 1; i <= numerodetentativas; i++){
		printf("Tentativa %d de %d\n", tentativa, numerodetentativas);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);

		if(chute < 0){
			printf("Você não pode chutar numeros negativos\n");
			i--;
			continue;
		}

		acertou = (chute == numeroSecreto);
		int maior = chute > numeroSecreto;
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

		printf("                    ***********************							\n");
		printf("               *********************************					\n");
		printf("           *******   *     *       *    *    *******				\n");
		printf("        *******   ***      **     **     ***   *******				\n");
		printf("      ******   *****       *********      *****    *****			\n");
		printf("    ******  ********       *********       ******    *****			\n");
		printf("   ****   **********       *********       *********   *****		\n");
		printf("  ****  **************    ***********     ************   ****		\n");
		printf(" ****  *************************************************  ****		\n");
		printf("****  ***************************************************  ****		\n");
		printf("****  ****************************************************  ****	\n");
		printf("****  ****************************************************  ****	\n");
		printf(" ****  ***************************************************  ****	\n");
		printf("  ****  *******     ****  ***********  ****     *********  ****		\n");
		printf("   ****   *****      *      *******      *      ********  ****		\n");
		printf("    *****   ****             *****             ******   *****		\n");
		printf("      *****   **              ***              **    ******			\n");
		printf("       ******   *              *              *   *******			\n");
		printf("         *******                                *******				\n");
		printf("            ********                         *******				\n");
		printf("               *********************************					\n");
		printf("                    *********************** 						\n");


		printf("Parabens você ganhou!\n");
		printf("Você acertou na tentativa %d\n", tentativa);
		printf("Pontos: %.1f\n", pontos);
	}
	else{
		printf("tente novamente!\n");

		printf("LLLLLLLLLLL                                                                         \n");
		printf("L:::::::::L                                                                         \n");
		printf("L:::::::::L                                                                         \n");
		printf("LL:::::::LL                                                                         \n");
		printf("  L:::::L                  ooooooooooo       ssssssssss       eeeeeeeeeeee      	\n"); 	
		printf("  L:::::L                oo:::::::::::oo   ss::::::::::s    ee::::::::::::ee    	\n");
		printf("  L:::::L               o:::::::::::::::oss:::::::::::::s  e::::::eeeee:::::ee  	\n");
		printf("  L:::::L               o:::::ooooo:::::os::::::ssss:::::se::::::e     e:::::e      \n");
		printf("  L:::::L               o::::o     o::::o s:::::s  ssssss e:::::::eeeee::::::e      \n");
		printf("  L:::::L               o::::o     o::::o   s::::::s      e:::::::::::::::::e       \n");
		printf("  L:::::L               o::::o     o::::o      s::::::s   e::::::eeeeeeeeeee       	\n");
		printf("  L:::::L         LLLLLLo::::o     o::::ossssss   s:::::s e:::::::e                	\n");
		printf("LL:::::::LLLLLLLLL:::::Lo:::::ooooo:::::os:::::ssss::::::se::::::::e               	\n");
		printf("L::::::::::::::::::::::Lo:::::::::::::::os::::::::::::::s  e::::::::eeeeeeee       	\n");
		printf("L::::::::::::::::::::::L oo:::::::::::oo  s:::::::::::ss    ee:::::::::::::e       	\n");
		printf("LLLLLLLLLLLLLLLLLLLLLLLL   ooooooooooo     sssssssssss        eeeeeeeeeeeeee       	\n");
          

	}
}