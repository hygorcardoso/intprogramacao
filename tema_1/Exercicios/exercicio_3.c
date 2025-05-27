#include <stdio.h>

int main() {
    int numero = 0;

    printf("Insira um número decimal \n");
    scanf("%i", &numero);

    printf("O número %i em Octadecima; é: %o\n", numero, numero);
    printf("O número %i em Octadecima; é: %x\n", numero, numero);
}