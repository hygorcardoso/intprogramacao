#include <stdio.h>
#include <stdlib.h>

int main() {

    char peca = ' ';
    int i = 0, j = 0;

    printf("Desafio Xadrez.\n");
    printf("T - Torre.\n");
    printf("B - Bispo.\n");
    printf("R - Rainha.\n");
    printf("C - Cavalo.\n");

    scanf("%c", &peca);

    if(peca == 'T' || peca == 't') {   
        printf("Movendo 5 casas para a direita.\n");
        while(i != 5) {
            printf("Direita\n");
            i++;
        }
    } else if(peca == 'B' || peca == 'b') {
        printf("Movendo o Bispo 5 casas para a diagonal direitaa.\n");
        for(i = 0; i < 5; i++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    } else if(peca == 'R' || peca == 'r') {
        printf("Movendo a Rainha 8 casas para a esquerda.\n");

        do {
            printf("Esquerda\n");
            i++;
        } while (i < 8);
    } else if(peca == 'C' || peca == 'c') {
        printf("\nMovendo o cavalo 2 casas para baixo.\n");
        j = 0;
        for(i = 0; i < 1; i++) {
            while(j < 2) {
                printf("Baixo\n");
                j++;
            }
            printf("Esquerda\n");
        }
    } else {
        printf("Entrada inválida. Tente novamente.\n");
    } 

    return 0;

}