#include <stdio.h>

/*
%d: Imprime um inteiro no formato decimal. 
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere. 
%s: Imprime uma cadeia (string) de caracteres.
*/

int main() {
    char nome[50] = " "; 
    float valor = 0; 

    printf("Insira seu nome: \n");
    scanf("%s", nome); // Para ler variavel é necessário & antes da mesma. exceto se for string. Que daí não é necessário.

    printf("Insira um valor:\n");
    scanf("%e", &valor);

    printf("Bem vindo %s \n", nome); 
    printf("Valor inserido: %e \n", valor);
    
}