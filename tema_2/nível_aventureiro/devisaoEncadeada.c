#include <stdio.h>

int main() {
    // São estruturas de condição, em sequencia. Ou seja, ele teste uma condição, se a primeira for falsa, ela testa a segunda, e assim por sinal.

    int idade = 3;

    /*
    if ( idade < 12) {
        printf("Você é uma criança \n");
    } else if( idade > 12 && idade < 18) {
        printf("Você é adolescente\n");
    } else if (idade > 18 && idade < 60) {
        printf("Você é adulto\n");
    } else {
        printf("Você é idoso.\n");
    }

    */

    if ( idade > 60) {
        printf("Você é idoso.\n");
    } 
    else if (idade > 18 && idade < 60) {
        printf("Você é adulto\n");
    } else if( idade > 12 && idade < 18) {
        printf("Você é adolescente\n");  
    }  else {
        printf("Você é uma criança \n");
    }

    // Desafio 2 Definir a letra da nota de um aluno

    int nota = 19;

    if( nota >= 90) {
        printf("Conceito A!\n");
    } else if(nota >= 80 && nota < 90) {
        printf("Conceito B!\n");
    } else if(nota >= 70 && nota < 80) {
        printf("Conceito C!\n");
    } else if(nota >= 60 && nota < 80) {
        printf("Conceito D!\n");
    } else {
        printf("Conceito F\n");
    }
}