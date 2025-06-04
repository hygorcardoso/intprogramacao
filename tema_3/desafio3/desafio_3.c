#include <stdio.h>

// Movimento da Torre - recursivo
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreBaixo(int casas) {
    if (casas == 0) return;
    printf("Baixo\n");
    moverTorreBaixo(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

void moverTorreEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverTorreEsquerda(casas - 1);
}

// Movimento do Bispo - recursivo + loops aninhados
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0 || casasHorizontais == 0) return;

    for (int i = 0; i < casasVerticais; i++) { // Movimento vertical
        for (int j = 0; j < casasHorizontais; j++) { // Movimento horizontal
            printf("Diagonal: Cima e Direita\n");
        }
    }
    
    // Recursão para ir diminuindo o movimento
    moverBispo(casasVerticais - 1, casasHorizontais - 1);
}

// Movimento da Rainha - recursivo
void moverRainhaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainhaCima(casas - 1);
}

void moverRainhaDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverRainhaDireita(casas - 1);
}

void moverRainhaDiagonal(int casas) {
    if (casas == 0) return;
    printf("Diagonal: Cima e Direita\n");
    moverRainhaDiagonal(casas - 1);
}

// Movimento do Cavalo - loops aninhados com múltiplas variáveis e condições
void moverCavalo(int movimentos) {
    int maxVertical = 2;  // movimento fixo: 2 para cima
    int maxHorizontal = 1; // movimento fixo: 1 para direita

    for (int i = 0; i < movimentos; i++) {
        for (int v = 0; v <= maxVertical; v++) {
            for (int h = 0; h <= maxHorizontal; h++) {
                if (v == 2 && h == 1) {
                    printf("Movimento em L: Cima (2) e Direita (1)\n");
                    continue; // vai para o próximo movimento
                }
                if (v > 2 || h > 1) {
                    break; // não executa movimentos inválidos
                }
            }
        }
    }
}

int main() {
    // Definição das quantidades de movimentos diretamente no código
    int casasTorre = 3;
    int casasBispoVertical = 2;
    int casasBispoHorizontal = 2;
    int casasRainha = 3;
    int movimentosCavalo = 2;

    // -------------------------------
    printf("Movimentos da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreBaixo(casasTorre);
    moverTorreDireita(casasTorre);
    moverTorreEsquerda(casasTorre);

    printf("\n");

    // -------------------------------
    printf("Movimentos do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    printf("\n");

    // -------------------------------
    printf("Movimentos da Rainha:\n");
    moverRainhaCima(casasRainha);
    moverRainhaDireita(casasRainha);
    moverRainhaDiagonal(casasRainha);

    printf("\n");

    // -------------------------------
    printf("Movimentos do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    printf("\n");

    return 0;
}
