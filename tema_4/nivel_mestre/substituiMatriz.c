#include <stdio.h>

/*
    Maximiza o controle sobre amtrizer
    Permiter combinar: modificação, contar, substituir e buscar elementos. Com mais eficiencia e versátil.
*/

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int evenCount = 0, oddCount = 0;
    // Substuição condiciona de elementos.
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] % 3 == 0) {
                matriz[i][j] = -1;
            } else {
                oddCount++; // Implementa o contodor de impares.
            }

            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
