#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
        São conjutos de dados, do mesmo tipo.
    */

    int numeros[5] = {1,2,3,4,5};

    printf("Valor 1: %d\n", numeros[0]);
    printf("Valor 2: %d\n", numeros[1]);
    printf("Valor 3: %d\n", numeros[2]);
    printf("Valor 4: %d\n", numeros[3]);
    printf("Valor 5: %d\n", numeros[4]);

    char *nome[] = {"Thaísa", "Elisa", "Erick", "Hygor"};

    printf("Nome: %s\n", nome[0]);
    printf("Nome: %s\n", nome[1]);
    printf("Nome: %s\n", nome[2]);
    printf("Nome: %s\n", nome[3]);

}