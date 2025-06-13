#include <stdio.h>
#define linhas 10
#define colunas 10

int main() {
    int tabuleiro[10][10] = {0}; // 0 = água, 3 = navio
    int tamanhoH = 3;
    int tamanhoV = 3;
    int tamanhoD = 3;
    int contagem = 0;
    int navio1H[1] = {1}, navio1V[1] = {2}; // navio horizontal
    int navio2H[1] = {5}, navio2V[1] = {5}; // navio vertical
    int navio3H[1] = {3}, navio3V[1] = {1}; // Navio diagonal descendente
    int navio4H[1] = {1}, navio4V[1] = {1}; // Navio diagonal ascendente
    int ajuste = 0;

    if(navio1H[0] + tamanhoH > 10 || navio2V[0] + tamanhoV > 10) {
        printf("Navios maiores que o campo de batalha.\n");
        return 0;
    }
    // Posiciona o navio horizontal
    navio1V[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    for(int linha = 0 ; linha < linhas; linha++) {
        for(int coluna = 0; coluna < colunas; coluna++) {
            if(linha == navio1H[0] && coluna == navio1V[0] && contagem < tamanhoH) {
                tabuleiro[linha][coluna] = 3;
                navio1V[0]++;
                contagem++;
            }
        }
    }

    // Posiciona o navio vertical
    contagem = 0;
    navio1H[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    for(int linha = 0 ; linha < linhas; linha++) {
        for(int coluna = 0; coluna < colunas; coluna++) {
            if(linha == navio2H[0] && coluna == navio2V[0] && contagem < tamanhoV) {
                tabuleiro[linha][coluna] = 3;
                navio2H[0]++;
                contagem++; 
            }
        }
    }

    // Posiciona os navios na diagonal descendente.
    contagem = 0;
    navio3H[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    navio3V[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    for(int linha = 0 ; linha < linhas; linha++) {
        for(int coluna = 0; coluna < colunas; coluna++) {
            if(linha == navio3H[0] && coluna == navio3V[0] && contagem < tamanhoD) {
                tabuleiro[linha][coluna] = 3;
                navio3H[0]++;
                navio3V[0]++;
                contagem++; 
            }
        }
    }

    // Posiciona os navios na diagonal ascendente.
    contagem = 0;
    navio4H[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    navio4V[0] -= 1; //Desconta 1, por conta da repetição ser de 0 a 10.
    for(int linha = 0 ; linha < linhas; linha++) {
        for(int coluna = 0; coluna < colunas; coluna++) {
            if(linha == navio4H[0] && coluna == navio4V[0] && contagem < tamanhoD) {
                tabuleiro[linha][9-coluna] = 3;
                navio4H[0]++;
                navio4V[0]++;
                contagem++; 
            }
        }
    }

    // Impressão do tabuleiro
    printf("\n    A B C D E F G H I J\n");
    for (int linha = 0; linha < linhas; linha++) {
        linha < 9 ? printf(" %d ", linha + 1) : printf("%d ", linha + 1);
        for(int coluna = 0; coluna < colunas; coluna++) {
            printf(" %d", tabuleiro[linha][coluna]);
        }
       printf("\n");
    }

    return 0;
}