#include <stdio.h>

int main() {
    /* Operador ternario é uma estrutura de decisão escrita em linha de forma simplificado 
    
    condição ? verdade : falso*/

    int idade = 75;
    char *resultado;

    resultado = idade < 13 ? "Você é crianca" : 
    idade > 13 && idade < 18 ? "Você é adolescente" : 
    idade > 18 && idade < 65 ? "Você é adulto" : "Você é idoso";

    // Armazenando resultado em uma variável.


    printf("%s \n", resultado);

    return 0;
}