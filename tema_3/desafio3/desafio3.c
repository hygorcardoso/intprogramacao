#include <stdio.h>
#include <stdlib.h>

int main() {

    char peca = ' ';
    int i = 0;

    printf("Bem vindo ao simulador de movimentos.\n");
    printf("T - Torre.\n");
    printf("B - Bispo.\n");
    printf("R - Rainha.\n");

    scanf("%c", &peca);

    if(peca == 'T' || peca == 't') {   
        printf("Movendo 5 casa para a direita.\n");
        while(i != 5) {
            printf("Direita\n");
            i++;
        }
    } else if(peca == 'B' || peca == 'b') {
        printf("Movendo o Bispo 5 casas para a diagonal direito.\n");
        for(i = 0; i < 5; i++) {
            printf("Cima.\n");
            printf("Direita.\n");
        }
    } else if(peca == 'R' || peca == 'r') {
        printf("Movendo a Rainha 8 casa para a esquerda.\n");

        do {
            printf("Esquerda.\n");
            i++;
        } while (i < 8);
    }

    return 0;

}