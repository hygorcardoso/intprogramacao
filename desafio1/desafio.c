#include <stdio.h>
#include <string.h>

int main() {

    //Variaveis das cartas 1 e 2.
    char estado1[2] = " ", estado2[2] = " ", codigo1[3] = " ", codigo2[3] = " ", cidade1[50] = " ", cidade2[50] = " ";
    int populacao1 = 0, populacao2 = 0, pontoTuristico1 = 0, pontoTuristico2 = 0;
    float area1 = 0.0, area2 = 0.0, pib1 = 0.0, pib2 = 0.0;

    //Inicio do cadastro da carta 1
    printf("Insira os dados da primeira carta \n\n");

    printf("Insira a sigla do estado: ");
    scanf("%s", estado1);

    printf("Insira o código da cidade: ");
    scanf("%s",codigo1);

    getchar();
    printf("Insira o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Insira a população da cidade: ");
    scanf("%i", &populacao1);

    printf("Insira a área: \n");
    scanf("%f", &area1);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turiscos: ");
    scanf("%i", &pontoTuristico1);

    //Inicio do cadastro da carta 2

    printf("Insira os dados da segunda carta \n\n");

    printf("Insira a sigla do estado:");
    scanf("%s", estado2);

    printf("Insira o código da cidade: ");
    scanf("%s", codigo2);

    getchar();
    printf("Insira o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Insira a população da cidade: ");
    scanf("%i", &populacao2);

    printf("Insira a área: ");
    scanf("%f", &area2);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turiscos: ");
    scanf("%i", &pontoTuristico2);

    //Inicio da impressão da carta 1

    printf("Dados da primeira cidade \n\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %i \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Númeo de pontos Turísticos: %i", pontoTuristico1);

    //Inicio da impressão da carta 2

    printf("Dados da segunda cidade \n\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %i \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Númeo de pontos Turísticos: %i \n", pontoTuristico2);
    
    return 0;
}
