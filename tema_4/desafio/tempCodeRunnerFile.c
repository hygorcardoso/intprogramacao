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