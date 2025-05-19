#include <stdio.h>

int main() {
    int idade = 0, matricula = 0;
    float altura;
    char nome[50];

    printf("Insira sua idade: \n");
    scanf("%i", &idade);

    printf("Insira sua altura: \n");
    scanf("%f", &altura);

    printf("Insira seu nome\n");
    scanf("%s", nome);

    printf("Insira sua matricula\n");
    scanf("%d", &matricula);

    printf("Nome: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %i - Altura: %f", idade, altura);

    return 0;

}