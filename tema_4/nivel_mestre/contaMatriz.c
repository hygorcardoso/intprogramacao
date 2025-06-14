#include <stdio.h>

/*
    Maximiza o controle sobre amtrizer
    Permiter combinar: modificação, contar, substituir e buscar elementos. Com mais eficiencia e versátil.
*/

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] % 2 ==0) {
                evenCount++; //Incrementa o contador de pares
            } else {
                oddCount++; // Implementa o contodor de impares.
            }
        }
    }

    // Impressão dos resultados
    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos impares: %d\n", oddCount);

    return 0;
}
