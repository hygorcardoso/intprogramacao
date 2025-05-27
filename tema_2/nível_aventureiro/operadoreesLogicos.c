#include <stdio.h>

int main() {
    /*
        Opeadores lógicos
        && = Tem a função de "É" e só vai dar valido, se tiver as 2 variaveis forem verdadeiras

        || = Tem a função de "OU" e só vai dar valido, se uma das variaveis for verdadeira

        ! = Tem a função de "NÃO" e inverte o valor da variavel, se for verdadeiro vira falso e vice-versa

        Ambas os operadores lógicos são utilizados para compara informações booleanas (verdadeiro ou falso).
    */

    //Operador AND &&
     /*
    int a = 10, b = 5;

    if( a > 0 && b > 0) {
        printf("Os dois números são positivos \n");
    } else {
        printf("Pelo menos um dos números é negativo \n");
    }
        
    */

    // Operador OU ||
    int a = 10, b = 0;

    if( a > 0 || b > 0) {
        printf("Um dos valores é positivos \n");
    } else {
        printf("Nenhum dos valores é positivo\n");
    }
    
    // Operador Não ! 

    if( !(a > 0)) {
        printf("Valor é negativa \n");
    } else {
        printf("Valor é positiva \n");
    }

    // Teste com multiplos operadores

    int idade = 20;
    float altura = 1.79;

    if ( idade >= 18 && idade <= 30 && altura > 1.75) {
        printf("A pessoa corresponde aos critérios.\n");
    } else {
        printf("A pessoa não corresponde aos critérios.\n");
    }
}