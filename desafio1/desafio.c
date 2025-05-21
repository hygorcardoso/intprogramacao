#include <stdio.h>
#include <string.h>

int main() {

    //Variaveis das cartas 1 e 2.
    char estado1 = ' ', estado2, codigo1[3] = " ", codigo2[3] = " ", cidade1[50] = " ", cidade2[50] = " ";
    int populacao1 = 0, populacao2 = 0, pontoTuristico1 = 0, pontoTuristico2 = 0;
    float area1 = 0.0, area2 = 0.0, pib1 = 0.0, pib2 = 0.0, pibCapita1 = 0, densidadePop1 = 0, pibCapita2 = 0, densidadePop2 = 0;

    //Inicio do cadastro da carta 1
    printf("Insira os dados da primeira carta \n\n");
    
    printf("Insira a sigla do estado: ");
    scanf("%c", &estado1);

    printf("Insira o código da cidade: ");
    scanf("%s", codigo1);

    getchar();
    printf("Insira o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Insira a população da cidade: ");
    scanf("%i", &populacao1);

    printf("Insira a área: ");
    scanf("%f", &area1);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turiscos: ");
    scanf("%i", &pontoTuristico1);


    //Inicio do cadastro da carta 2
    printf("\n"); 
    printf("\nInsira os dados da segunda carta ");

    printf("\n\nInsira a sigla do estado: ");
    scanf("%c", &estado2);

    getchar();
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

    //Calculado dados pib per capita e densidade populacional da carta 1
    pibCapita1 = pib1 / (float)populacao1;
    densidadePop1 = (float)populacao1 / area1;

    //Calculado dados pib per capita e densidade populacional da carta 2
    pibCapita2 = pib2 / (float)populacao2;
    densidadePop2 = (float)populacao2 / area2;

    //Inicio da impressão da carta 1

    printf("Dados da primeira cidade \n\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i \n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Númeo de pontos Turísticos: %i \n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadePop1);
    printf("PIB per Capita: R$%.2f \n", pibCapita1);

    //Inicio da impressão da carta 2

    printf("Dados da segunda cidade \n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %i \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Númeo de pontos Turísticos: %i \n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadePop2);
    printf("PIB per Capita: R$%.2f \n", pibCapita2);
    
    return 0;
}
