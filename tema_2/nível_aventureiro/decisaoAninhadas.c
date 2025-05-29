#include <stdio.h>

int main() {
    /*  
        Decisão aninhadas ocorre, sempre que houver um if dentro de outro if.
    */

    /*
    int idade;
    int dependentes;
    float renda;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);
    printf("Entre com sua renda mensal: ");
    scanf("%f", &renda);
    printf("Insira o número de dependentes: ");
    scanf("%i", &dependentes);

    if( idade  <= 18 || idade >= 65) {
        if(renda <= 3000.00 ) {
            if(dependentes > 2) {
                printf("Você está qualificado para o desconto especial.\n");
            } else {
                printf("Você não atende aos critérios devido os dependentes\n");
            }
        } else {
            printf("Você não atende aos critérios devido a renda\n");
        }
    } else {
        printf("Você não atende aos critérios devido à idade. \n");
    }

    */

    int numero;

    printf("Insira um número: ");
    scanf("%i", &numero);

    if ( numero > 0) {
        if( numero % 2 == 0) {
            printf("Número é par \n");
        } else {
            printf("Número é impar \n");
        }
    } else if( numero == 0) {
        printf("Número é igual a zero \n");
    } else {
        printf("Número é negativo \n");
    }
} 