#include <stdio.h>

int main() {
    int i = 0;
    int numero;
    int resultado;

    // while (i <= 10 ){
    //     if(i % 2 == 0){
    //         printf("Par: %d \n", i);
    //     }
        
    //     i++;
    // }

    // do{
    //     printf("Insira um número para para sair...\n");
    //     scanf("%d", &numero);

    //     if(numero % 2 == 0 ) {
    //         printf("%d é par\n", numero);
    //         printf("Você saiu do programa.\n");
    //     } else {
    //         printf("%d é ímpar\n", numero);
    //     }
    // } while(numero %2 != 0);


    for(i = 0; i <= 10; i++) {
        numero = 2;

        resultado = numero * i;

        printf("%d X %d = %d\n", numero, i, resultado);

    }

    return 0;
}