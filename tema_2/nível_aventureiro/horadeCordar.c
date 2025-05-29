#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /* Fazer um jogo de jokepol. O jogado irá escolher pedra papel ou tesoura. E o computador, irá escolher aleatóriamente. 
    
    Regras:
    Pedra ganha de tesoura
    Tesoura ganha de papel
    papel ganha de pedra
    */

    int escolhaJogador = 0;
    int escolhaPc = 0;

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra.\n");
    printf("2. Papel.\n");
    printf("3. Tesoura.\n");
    printf("Escolha: ");
    scanf("%i", &escolhaJogador);

    srand(time(0));
    escolhaPc = 2;
    // escolhaPc = rand() % 3 + 1;

    printf("Escolha do PC: %i\n", escolhaPc);

    system("clear");

    switch (escolhaJogador) {
        case 1: 
            printf("Escolha do Jogador: Pedra\n");
        break;

        case 2:
            printf("Escolha do Jogador: Papel\n");
        break;

        case 3:
            printf("Escolha do Jogador: Tesoura\n");
        break;

        default:
            printf("Escolha inexistente,\n");
        break;
    
    }

    switch (escolhaPc)
    {
        case 1:
            printf("Escolha do Computador: Pedra\n");
        break;
        
        case 2:
            printf("Escolha do Jogador: Papel\n");
        break;
        
        case 3:
            printf("Escolha do Tesoura\n");
        break;
    }

    if(escolhaJogador == escolhaPc) {
        printf("Empate.\n");
    } else{
        if(escolhaJogador == 1) {
            if(escolhaPc == 2) {
                printf("Papel embrulha Pedra. Você perdeu");
            } else if(escolhaPc == 3) {

            }
        }
    }
}   