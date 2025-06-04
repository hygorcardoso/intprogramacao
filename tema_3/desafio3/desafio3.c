#include <stdio.h>
#include <stdlib.h>

void moveTorre(int quantidade) {
    if( quantidade > 0) {
        moveTorre(quantidade - 1);
        printf("Direita\n");
    }
}

void moveBispo(int quantidade) {
    if (quantidade > 0) {
        for (int i = 0; i < 1; i++) {   // Apenas 1 movimento para "Cima" por repetição
            printf("Cima\n");
            for (int j = 0; j < 1; j++) {  // Apenas 1 movimento para "Direita" por repetição
                printf("Direita\n");
            }
        }

        // Chamada recursiva para repetir o movimento
        moveBispo(quantidade - 1);
    }
}

void moveRainha(int quantidade) {
    if (quantidade > 0) {
        for(int i = 0; i < 1; i++){
            printf("Cima\n");
        }
    }

    moveRainha(quantidade - 1 );
}

void moveVertical( int quantidade) {
    if ( quantidade > 0) {
        moveVertical(quantidade - 1);
        printf("Cima\n");
    }
}

void moveHorizontal( int quantidade) {
    if ( quantidade > 0) {
        printf("Direita\n");
        moveVertical(quantidade - 1);
    }
}

void moveBistoVertical (int quantidade) {

    quantidade = quantidade * 2;

    if ( quantidade % 2 == 0) {
        printf("Direita h\n");
        moveBistoVertical(quantidade -1);
    }
}

int main() {

    char peca = ' ';
    int movimentosTorre = 4;
    int movimentosBispo = 5;
    int movimentosRainha = 8;
    int maxVertical;
    int maxHorizontal;
    int horizontal;
    int vertical;

    printf("Desafio Xadrez.\n");
    printf("T - Torre.\n");
    printf("B - Bispo.\n");
    printf("R - Rainha.\n");
    printf("C - Cavalo.\n");

    scanf("%c", &peca);

    if(peca == 'T' || peca == 't') {   
        printf("Movendo 5 casas para a direita.\n");
        moveTorre(movimentosTorre);
        printf("\n");
    } else if(peca == 'B' || peca == 'b') {
        printf("Movendo o Bispo 5 casas para a diagonal direita.\n");

        moveBispo(movimentosBispo);
        printf("\n");
    } else if(peca == 'R' || peca == 'r') {
        printf("Movendo a Rainha 8 casas para a esquerda.\n");
      
        moveRainha(movimentosRainha);
        printf("\n");
    } else if(peca == 'C' || peca == 'c') {
        maxVertical = 2;
        maxHorizontal = 1;

        printf("\nMovendo o cavalo 2 casas para baixo.\n");
        for(horizontal = 1; horizontal <= maxHorizontal; horizontal++) {
            for(vertical = 1; vertical <= maxVertical; vertical++) {
                if(vertical < maxVertical) {
                    moveVertical(maxVertical);
                    continue;
                }
                
            }

            if(vertical > maxVertical && horizontal  == maxHorizontal) {
                moveHorizontal(maxHorizontal);
        
            }
        }
    } else {
        printf("Entrada inválida. Tente novamente.\n");
    } 

    return 0;

}