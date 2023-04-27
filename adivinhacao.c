#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil \n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerosdetentativas;

    switch(nivel){
        case 1:
            numerosdetentativas = 20;
            break;
        case 2:
            numerosdetentativas = 15;
            break;
        default:
            numerosdetentativas = 6;
            break;
    }


    for(int i = 1; i <= numerosdetentativas; i++){
        printf("Tentativa %d \n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou){

            break;
        }else if(maior){
                printf("Seu chute foi maior que o numero secreto\n");
        }else{
                printf("Seu chute foi menor que o numero secreto\n");
            
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto/2.0);
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo\n");

    if(acertou){
        printf("Voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);
    }else{
        printf("Voce perdeu! Tente denovo!\n");
    }

    
    
}