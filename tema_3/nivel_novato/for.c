#include <stdio.h>
#include <stdlib.h>

int main() {
    int ind, numero = 0, soma = 0;

    for(ind=0; ind<10; ind++) {
        printf("Insira um valor: \n");
        scanf("%d", &numero);

        soma+= numero;

        printf("Soma: %d \n", soma);
    }
}