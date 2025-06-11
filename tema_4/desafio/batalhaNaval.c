#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // 0 = água, 3 = navio
    int tamanhoH = 1;
    int tamanhoV = 3;
    int contagem = 0;
    int navio1H[1] = {1}, navio1V[1] = {2}; // navio horizontal
    int navio2H[1] = {5}, navio2V[1] = {5}; // navio vertical
    int ajuste = 0;

    if(navio1H + tamanhoH > 10 || navio2V + tamanhoV > 10) {
        printf("Navios maiores que o campo de batalha.\n");
        return 0;
    }
    //Posiciona o navio horizontal
    navio1V[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    for(int linha = 0 ; linha < 10; linha++) {
        for(int coluna = 0; coluna < 10; coluna++) {
            if(linha == navio1H && coluna == navio1V && contagem < tamanhoH) {
                tabuleiro[linha][coluna] = 3;
                navio1V[0]++;
                contagem++;
            }
        }
    }

    //Posiciona o navio vertical
    contagem = 0;
    navio1H[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    for(int linha = 0 ; linha < 10; linha++) {
        for(int coluna = 0; coluna < 10; coluna++) {
            if(linha == navio2H && coluna == navio2V && contagem < tamanhoH) {
                tabuleiro[linha][coluna] = 3;
                navio2H[0]++;
                contagem++;
            }
        }
    }

    // Impressão do tabuleiro
    printf("\n    A B C D E F G H I J\n");
    for (int linha = 0; linha < 10; linha++) {
        linha < 9 ? printf(" %d ", linha + 1) : printf("%d ", linha + 1);
        for(int coluna = 0; coluna < 10; coluna++) {
            printf(" %d", tabuleiro[linha][coluna]);
        }
       printf("\n");
    }

    return 0;
}