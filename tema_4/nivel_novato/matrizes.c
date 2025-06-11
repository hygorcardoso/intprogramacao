#include <stdio.h>

int main() {
    /*
        Matriz são vetores(arrays), em formato bidimencional/multi-dimencional. Utilizado para resolver problemas matemáticos. Tem colunas e linhas.
    */

    int numero[3][3]; //Declaração de matriz é parecida com o array, porém utilizando 2 vetores.

    numero[0][0] = 0;
    numero[0][1] = 1;
    numero[0][2] = 2;
    numero[1][0] = 3;
    numero[1][1] = 4;
    numero[1][2] = 5;
    numero[2][0] = 6;
    numero[2][1] = 7;
    numero[2][2] = 8;

    printf("%d ", numero[0][0]);
    printf("%d ", numero[0][1]);
    printf("%d ", numero[0][2]);
    printf("\n");

    printf("%d ", numero[1][0]);
    printf("%d ", numero[1][1]);
    printf("%d ", numero[1][2]);
    printf("\n");

    printf("%d ", numero[2][0]);
    printf("%d ", numero[2][1]);
    printf("%d ", numero[2][2]);
    printf("\n");

}