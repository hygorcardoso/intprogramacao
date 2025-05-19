#include <stdio.h>

int main() {
    char estado1[2] = " ", estado2[2] = " ", codigo1[3] = " ", codigo2[3] = " ", cidade1[50] = " ", cidade2[50] = " ";
    int populacao1 = 0, populacao2 = 0, pontoTuristico1 = 0, pontoTuristico2 = 0;
    float area1 = 0, area2 = 0, pib1 = 0, pib2 = 0;

    printf("Insira os dados da primeira carta \n\n");

    printf("Insira a sigla do estado: ");
    scanf("%s", estado1);

    printf("Insira o código da cidade: ");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade: ");
    gets(cidade1);

    // printf("Insira a população da cidade: ");
    // scanf("%i", &populacao1);

    // printf("Insira a área: \n");
    // scanf("%f", &area1);

    // printf("Insira o valor do PIB: \n");
    // scanf("%f", &pib1);

    // printf("Insira o número de pontos turiscos: \n");
    // scanf("%i", &pontoTuristico1);

    //  printf("Insira os dados da segunda carta \n\n");

    // printf("Insira a sigla do estado:");
    // scanf("%s", estado2);

    // printf("Insira o código da cidade: \n");
    // scanf("%s", codigo2);

    // printf("Insira o nome da cidade: \n");
    // scanf("%s", cidade2);

    // printf("Insira a população da cidade: ");
    // scanf("%i", &populacao2);

    // printf("Insira a área: \n");
    // scanf("%f", &area2);

    // printf("Insira o valor do PIB: \n");
    // scanf("%f", &pib2);

    // printf("Insira o número de pontos turiscos: \n");
    // scanf("%i", &pontoTuristico2);

    printf("Dados da primeira cidade \n\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    // printf("População: %i \n", populacao1);
    // printf("Área: %.2f \n", area1);
    // printf("PIB: %.2f \n", pib1);
    // printf("Númeo de pontos Turísticos: %i", pontoTuristico1);

    // printf("Dados da segunda cidade \n\n");
    // printf("Estado: %s \n", estado2);
    // printf("Código: %s \n", codigo2);
    // printf("Cidade: %s \n", cidade2);
    // printf("População: %i \n", populacao2);
    // printf("Área: %.2f \n", area2);
    // printf("PIB: %.2f \n", pib2);
    // printf("Númeo de pontos Turísticos: %i", pontoTuristico2);
    
    return 0;
}