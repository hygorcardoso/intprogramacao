#include <stdio.h>

int main() {
    /*
        Neste utilizaremos a estrutura IF. 

        Permite que o programa execute um bloco de código, somente se uma condição for verdadeira.asm
        SE ( Condição ) {
            bloco de código.
        }
    */

    /*
    int valor1 = 0, valor2 = 0;

    printf("Insira 2 valores ");
    scanf("%i %i", &valor1, &valor2);

    if(valor1 > valor2) {
        printf("Valor 1 é maior que valor 2 \n");
    }
    if( valor2 > valor1) {
        printf("Valor 2 é maior que valor 1 \n");
    }  
    if ( valor1 == valor 2) {
        printf("Valor 1 e valor 2 são iguais \n");
    }

    // Comparando idade

    int idade1 = 0, idade2 = 0;

    printf("Qual a idade da primeira pessoa? \n");
    scanf("%i", &idade1);

    printf("Qual a idade da segunda pessoa? \n");
    scanf("%i", &idade2);

    if(idade1 > idade2) {
        printf("A pessoa 1 é mais velha que a pessoa d\n");
    } 
    if( idade < idade2 ) {
        printf("A pessoa 2 é mais velha que a pessoa 1 \n");
    }

    */

    // Verificado se número é par

    int numero = 5;

    if( numero % 2 == 0) {
        printf("o número %i é par \n", numero);
    } 
    if( numero % 2 != 0) {
        printf("O número %i é impar \n", numero);
    }
}