#include <stdio.h>

int main() {
    int numero1 = 10, numero2 = 5;
    int soma = 0, subtracao = 0, mutiplicacao = 0, divisao = 0;
    // São operadores matematicos fundamentais para calculos

    /*
        printf("Insira 2 números inteiros: \n");
        scanf("%i", &numero1);
        scanf("%i", &numero2);
    */
    /*
        Adição
        Operador +
    */

    soma = numero1 + numero2;

    printf("%i + %i = %i \n", numero1, numero2, soma);

    /*
        Subtração
        Operador -
    */

    subtracao = numero1 - numero2;
    printf("%i - %i = %i \n", numero1, numero2, subtracao);

    /*
        Multiplicação
        Operador *
    */

    mutiplicacao = numero1 * numero2;
    printf("%i x %i = %i \n", numero1, numero2, mutiplicacao);

    /*
        Divisão
        Operador /
    */

    divisao = numero1 / numero2;
    printf("%i ÷ %i = %i \n", numero1, numero2, divisao);

    /*
    
        Operadores de incremento
        Serve para incrementar e atribuir um valor a uma variavel.

        Atribuição =
        Neste é informado para a variavel que o valor é o informado após o igual.
    
    */

    int resultado = 0;

    //Soma simplificado

    resultado = 10;
    printf("Resultado = %d\n", resultado);
    resultado+= 20; // é igual a fazer resultado = resultado + 20
    printf("Incremento Resultado = %d\n", resultado);

    //Subtração simplificado

    printf("Resultado = %d\n", resultado);
    resultado-= 20; // é igual a fazer resultado = resultado - 20
    printf("Decremento Resultado = %d\n", resultado);

    //Multiplicação simplificado

    printf("Resultado = %d\n", resultado);
    resultado*= 20; // é igual a fazer resultado = resultado * 20
    printf("Multiplicação Resultado = %d\n", resultado);

    //Multiplicação simplificado 

    printf("Resultado = %d\n", resultado);
    resultado*= 20; // é igual a fazer resultado = resultado * 20
    printf("Multiplicação Resultado = %d\n", resultado);

    //Multiplicação simplificado

    printf("Resultado = %d\n", resultado);
    resultado/= 20; // é igual a fazer resultado = resultado / 20
    printf("Divisão Resultado = %d\n", resultado);

    // Pós Incremental 

    int valor = 1;

    printf("Antes incremento: %i\n", valor);
    valor++; //Primeiro atribui a variavel e depois incrementa o valor dela
    printf("Após incremento: %i\n", valor);

    //Pré Incremento

    printf("Antes incremento: %i\n", valor);
    ++valor; //Primeiro incrementa o valor, e depois atribui a variável.
    printf("Após incremento: %i\n", valor);

    // Pós Decremento

    printf("Antes incremento: %i\n", valor);
    valor--; //Primeiro atribui a variavel e depois decrementa o valor dela
    printf("Após incremento: %i\n", valor); 

    // Pré decremento
    
    printf("Antes incremento: %i\n", valor);
    valor--; //Primeiro decrementa o valor, e depois atribui a variável.
    printf("Após incremento: %i\n", valor); 

}