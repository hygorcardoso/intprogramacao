#include <stdio.h>
#include <string.h>

int main() {

    //Variaveis das cartas 1 e 2.
    char estado1[3] = "SP", estado2[3] = "RJ", codigo1[4] = "A01", codigo2[4] = "B02", cidade1[50] = "São Paulo", cidade2[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    unsigned short int pontoTuristico1 = 50, pontoTuristico2 = 30;
    float area1 = 1521.11, area2 = 1200.25, pib1 = 699280000000.00, pib2 = 300500000000.00, pibCapita1 = 0, densidadePop1 = 0, pibCapita2 = 0, densidadePop2 = 0, superpoder1 = 0.00, superpoder2 = 0.00;
    int escolha = 0;

    //Inicio do cadastro da carta 1
    /*
    printf("Insira os dados da primeira carta \n\n");
    
    printf("Insira a sigla do estado: ");
    scanf("%s", estado1);

    printf("Insira o código da cidade: ");
    scanf("%s", codigo1);

    getchar();
    printf("Insira o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Insira a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Insira a área: ");
    scanf("%f", &area1);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turiscos: ");
    scanf("%hd", &pontoTuristico1);


    //Inicio do cadastro da carta 2
    printf("\n"); 
    printf("\nInsira os dados da segunda carta ");

    printf("\n\nInsira a sigla do estado: ");
    scanf("%s", estado2);

    getchar();
    printf("Insira o código da cidade: ");
    scanf("%s", codigo2);

    getchar();
    printf("Insira o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Insira a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Insira a área: ");
    scanf("%f", &area2);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turiscos: ");
    scanf("%hd", &pontoTuristico2);

    */

    //Calculado dados pib per capita, densidade populacional, e superpoder da carta 1
    pibCapita1 = pib1 / (float)populacao1;
    densidadePop1 = (float)populacao1 / area1;
    superpoder1 = ((float)populacao1 + area1 + pib1 + pibCapita1 + (float)pontoTuristico1) + (1 / densidadePop1);

    //Calculado dados pib per capita, densidade populacional, e superpoder da carta 2
    pibCapita2 = pib2 / (float)populacao2;
    densidadePop2 = (float)populacao2 / area2;

    superpoder2 = ((float)populacao2 + area2 + pib2 + (float)pontoTuristico2 + pibCapita2) + (1 / densidadePop2);

    //Inicio da impressão da carta 1

    printf("\n\n Dados da primeira cidade \n\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Númeo de pontos Turísticos: %i \n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePop1);
    printf("PIB per Capita: R$%.2f \n", pibCapita1);
    printf("Super poder: %f \n", superpoder1);

    //Inicio da impressão da carta 2

    printf("\n\n Dados da segunda cidade \n\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Númeo de pontos Turísticos: %i \n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePop2);
    printf("PIB per Capita: R$%.2f \n", pibCapita2);
    printf("Super poder: %f \n", superpoder2);

    //Comparando os atributos das cartas.

    printf("\n\n Comparação de Cartas: \n\n");
    printf("Escolha qual atributo deve ser comparado: \n\n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Poder \n");
    scanf("%i", &escolha);

    printf("\nA escola é %i \n\n", escolha);

    if( escolha == 1) {
        if( populacao1 > populacao2) {
            printf("Carta 1 - %s (%s): %lu \n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu \n", cidade2, estado2, populacao2);
            printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
        } else {
            printf("Carta 1 - %s (%s): %lu \n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu \n", cidade2, estado2, populacao2);
            printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
        }
    } else if( escolha == 2) {
        if( area1 > area2) {
            printf("Carta 1 - %s (%s): %.2f Km² \n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, area1);
            printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
        } else {
            printf("Carta 1 - %s (%s): %.2f Km² \n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f Km² \n", cidade2, estado2, area2);
            printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
        }
    } else if( escolha == 3) {
        if( pib1 > pib2) {
            printf("Carta 1 - %s (%s): R$ %.2f \n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f \n", cidade2, estado2, pib2);
            printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
        } else {
            printf("Carta 1 - %s (%s): R$ %.2f \n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f \n", cidade2, estado2, pib2);
            printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
        }
    } else if ( escolha == 4){
        if( pontoTuristico1 > pontoTuristico2) {
            printf("Carta 1 - %s (%s): %u \n", cidade1, estado1, pontoTuristico1);
            printf("Carta 2 - %s (%s): %u \n", cidade2, estado2, pontoTuristico2);
            printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
        } else {
            printf("Carta 1 - %s (%s): %u \n", cidade1, estado1, pontoTuristico1);
            printf("Carta 2 - %s (%s): %u \n", cidade2, estado2, pontoTuristico2);
            printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
        }
    } else if ( escolha == 5) {
        if( densidadePop1 > densidadePop2) {
            printf("Carta 1 - %s (%s): %.2f hab/Km² \n", cidade1, estado1, densidadePop1);
            printf("Carta 2 - %s (%s): %.2f hab/Km² \n", cidade2, estado2, densidadePop2);
            printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
        } else {
            printf("Carta 1 - %s (%s): %.2f hab/Km²\n", cidade1, estado1, densidadePop1);
            printf("Carta 2 - %s (%s): %.2f hab/Km²\n", cidade2, estado2, densidadePop2);
            printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
        }
    } else if ( escolha == 6) {
        if( pibCapita1 > pibCapita2) {
            printf("Carta 1 - %s (%s): %.2f R$/Hab \n", cidade1, estado1, pibCapita1);
            printf("Carta 2 - %s (%s): %.2f R$/Hab \n", cidade2, estado2, pibCapita2);
            printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
        } else {
            printf("Carta 1 - %s (%s): %.2f R$/Hab \n", cidade1, estado1, pibCapita1);
            printf("Carta 2 - %s (%s): %.2f R$/Hab \n", cidade2, estado2, pibCapita2);
            printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
        }
    } else if( escolha == 7) {
        if( pibCapita1 > pibCapita2) {
            printf("Carta 1 - %s (%s) Superporder: %.2f \n", cidade1, estado1, pibCapita1);
            printf("Carta 2 - %s (%s) Superporder: %.2f \n", cidade2, estado2, pibCapita2);
            printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
        } else {
            printf("Carta 1 - %s (%s) Superporder: %.2f \n", cidade1, estado1, pibCapita1);
            printf("Carta 2 - %s (%s) Superporder: %.2f\n", cidade2, estado2, pibCapita2);
            printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
        }
    }
    return 0;
}
