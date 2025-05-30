#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador, comparacao;
    char *resultado;

    //Jogador informa o número
    printf("*** Bem vindo ao jogo de adivinhação ***\n\n");
    printf("Entre com um número entre 1 e 100: ");
    scanf("%i", &escolhaJogador);
    
    //Compudor faz sua escolha de forma aleatória
    srand(time(0));
    escolhaComputador = rand() % 100 + 1;

    //Jogador decide 
    printf("Configuração comparação: \n");
    printf("1. Menor\n");
    printf("2. Igual\n");
    printf("3. Maior\n");
    printf("Escolha o tipo de comparação: ");
    scanf("%i", &comparacao);

    switch (comparacao) {
        case 1:
            resultado = escolhaJogador < escolhaComputador ? "Você ganhou" : "Você perdeu";
        break;

        case 2:
            resultado = escolhaJogador == escolhaComputador ? "Você ganhou" : "Você perdeu";
        break;

        case 3:
            resultado = escolhaJogador > escolhaComputador ? "Você ganhou" : "Você perdeu";
        break;

        default:
            printf("Opção inválida\n");
        break;
    }

    printf("%s\n", resultado);
}