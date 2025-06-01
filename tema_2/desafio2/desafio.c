#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>

void pausa() {
    /* 
        Este código irá verificar se está sendo utilizando sistema Windows, ou Linux/Mac. Assim alterando a forma de pausar o programa.
    */
    printf("\n\n\033[1mPressione espaço para proseguir\033[0m\n");
    #ifdef _WIN32
        system("pause");
    #else
        system("read -n 1 -s");
    #endif
}

void limpaTela() {
    /* 
        Este código irá verificar se está sendo utilizando sistema Windows, ou Linux/Mac. Assim alterando a forma de limpar o terminal.
    */
     #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

float pibperCapita(int populacao, float pib) {
    return pib / (float)populacao;
}

float densidadePop(int populacao, float area) {
    return (float)populacao / area;
}

float superPoder(int populacao, float area, float pib, int pontoTuristico, float pibCapita, float densidadePop) {
    return ((float)populacao + area + pib + (float)pontoTuristico + pibCapita) + (1 / densidadePop);
}

void definiVencedor(char cidade1[50], char cidade2[50], float atributo1, float atributo2) {
    atributo1 > atributo2 ? printf("Resultado: Carta 1 (%s) venceu! \n", cidade1) :
    atributo1 < atributo2 ? printf("Resultado: Carta 2 (%s) venceu! \n", cidade2) : printf("Resultado: Empate! \n"); 
}

int main() {

    //Variaveis das cartas 1 e 2.
    char estado1[3] = "SP", estado2[3] = "RJ", codigo1[4] = "A01", codigo2[4] = "B02", cidade1[50] = "São Paulo", cidade2[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    unsigned short int pontoTuristico1 = 50, pontoTuristico2 = 30;
    float area1 = 1521.11, area2 = 1200.25, pib1 = 699280000000.00, pib2 = 300500000000.00, pibCapita1 = 0, densidadePop1 = 0, pibCapita2 = 0, densidadePop2 = 0, superpoder1 = 0.00, superpoder2 = 0.00, totalAtributo1 = 0.00, totalAtributo2 = 0.00;
    int escolha = 0, atributo1 = 0, atributo2 = 0;
    char *resultado = " ";

    //Inicia o calcula de densidade populacional, pipPercapita e Super Poder da carta 1
    densidadePop1 = densidadePop(populacao1, area1);
    pibCapita1 = pibperCapita(populacao1, pib1);
    superpoder1 = superPoder(populacao1, area1, pib1, pibCapita1, pontoTuristico1, densidadePop1);

    //Calculado dados pib per capita, densidade populacional, e superpoder da carta 2
    pibCapita2 = pib2 / (float)populacao2;
    densidadePop2 = densidadePop(populacao2, area2);
    superpoder2 = superPoder(populacao2, area2, pib2, pibCapita2, pontoTuristico2, densidadePop2);


    printf("*** Bem vindo ao Supertrunfo de Cidade ***\n\n");
    printf("1. Cadastrar cartas\n");
    printf("2. Inspecionar cartas.\n");
    printf("3. Comparar simples de cartas.\n");
    printf("4. Comparar dupla de cartas.\n");
    printf("5. Regras.\n");
    printf("6. Sair.\n");
    scanf("%i", &escolha);

    switch(escolha){
        case 1:
            limpaTela();
            //Inicio do cadastro da carta 1

            printf("Insira os dados da primeira carta \n\n");
            
            printf("Insira a sigla do estado: ");
            scanf("%2s", estado1);

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

            printf("Insira o número de pontos turíscos: ");
            scanf("%hd", &pontoTuristico1);

            system("clear");

            //Inicio do cadastro da carta 2
            printf("\n"); 
            printf("\nInsira os dados da segunda carta ");

            printf("\n\nInsira a sigla do estado: ");
            scanf("%2s", estado2);

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

            printf("Insira o número de pontos turíscos: ");
            scanf("%hd", &pontoTuristico2);

            pausa();
            limpaTela();
            main();

        break;

        case 2:
            limpaTela();
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

            pausa();
            limpaTela();
            main();

        break;

        case 3:
            limpaTela();
            //Comparando os atributos de forma simples das cartas.

            printf("\n\nComparação de Cartas: \n\n");
            printf("Escolha qual atributo deve ser comparado: \n\n");
            printf("1 - População \n");
            printf("2 - Área \n");
            printf("3 - PIB \n");
            printf("4 - Pontos Turisticos \n");
            printf("5 - Densidade Populacional \n");
            printf("6 - PIB per Capita \n");
            printf("7 - Super Poder \n");
            scanf("%i", &escolha);

            limpaTela();

            switch (escolha) {
                case 1:
                    printf("População \n\n");
                    printf("Carta 1 - %s (%s): %lu habitantes \n", cidade1, estado1, populacao1);
                    printf("Carta 2 - %s (%s): %lu habitantes \n", cidade2, estado2, populacao2);
                    definiVencedor(cidade1, cidade2, populacao1, populacao2);
                break;

                case 2:
                    printf("Área \n\n");
                    printf("Carta 1 - %s (%s) Área: %.2f Km² \n", cidade1, estado1, area1);
                    printf("Carta 2 - %s (%s) Área: %.2f Km²\n", cidade2, estado2, area2);

                    definiVencedor(cidade1, cidade2, area1, area2);
                break;

                case 3:
                    printf("PIB \n\n");
                    printf("Carta 1 - %s (%s): R$ %.2f \n", cidade1, estado1, pib1);
                    printf("Carta 2 - %s (%s): R$ %.2f \n", cidade2, estado2, pib2);

                    definiVencedor(cidade1, cidade2, pib1, pib2);
                break;

                case 4:
                    printf("Pontos Turisticos \n\n");
                    printf("Carta 1 - %s (%s): %u \n", cidade1, estado1, pontoTuristico1);
                    printf("Carta 2 - %s (%s): %u \n", cidade2, estado2, pontoTuristico2);

                    definiVencedor(cidade1, cidade2, pontoTuristico1, pontoTuristico2);
                break;

                case 5:
                    printf("Densidade Populacional\n\n");
                    printf("Carta 1 - %s (%s): %.2f hab/Km² \n", cidade1, estado1, densidadePop1);
                    printf("Carta 2 - %s (%s): %.2f hab/Km² \n", cidade2, estado2, densidadePop2);

                    definiVencedor(cidade1, cidade2, densidadePop1, densidadePop2);
                break;
                
                case 6:
                    printf("PIB per Capita\n\n");
                    printf("Carta 1 - %s (%s): %.2f R$/Hab \n", cidade1, estado1, pibCapita1);
                    printf("Carta 2 - %s (%s): %.2f R$/Hab \n", cidade2, estado2, pibCapita2);

                    definiVencedor(cidade1, cidade2, pibCapita1, pibCapita2);
                break;

                case 7:
                    printf("Super Poder\n\n");
                    printf("Carta 1 - %s (%s) Superporder: %f \n", cidade1, estado1, superpoder1);
                    printf("Carta 2 - %s (%s) Superporder: %f \n", cidade2, estado2, superpoder2);
                    
                    definiVencedor(cidade1, cidade2, superpoder1, superpoder2);
                break;

                default:
                    printf("Atributo inexistente. Tente novamente.\n");
                break;
            }

            //Passa para o void pausa, que define o SO do usuário, e defini a pause.
            pausa();
            //Passa para o void, que define o SO  do usuário, e defini a limpeza de tela.
            limpaTela();
            main();
            
        break;

    case 4:
            limpaTela();
            printf("*** Comparação dupla ***\n\n");
            printf("Escolha qual atributo deve ser comparado: \n\n");
            printf("1 - População \n");
            printf("2 - Área \n");
            printf("3 - PIB \n");
            printf("4 - Pontos Turisticos \n");
            printf("5 - Densidade Populacional \n");
            printf("6 - PIB per Capita \n");
            printf("7 - Super Poder \n");
            printf("Escolha o primeiro atributo: ");
            scanf("%i", &atributo1);
            printf("Escolha o segundo atributo: ");
            scanf("%i", &atributo2);

            if(atributo1 != atributo2){
                limpaTela();
                switch (atributo1) {
                    case 1: 
                        printf("Atributo 1: População: \n");
                        printf("Carta 1 - %s (%s): %lu Hab.\n", cidade1, estado1, populacao1);
                        printf("Carta 2 - %s (%s): %lu Hab.\n", cidade2, estado2, populacao2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, populacao1, populacao2);

                        totalAtributo1+= (float)populacao1;
                        totalAtributo2+= (float)populacao2;
                    break;

                    case 2:
                        printf("Atributo 1: Área: \n");
                        printf("Carta 1 - %s (%s): %.2f Km².\n", cidade1, estado1, area1);
                        printf("Carta 2 - %s (%s): %.2f Km².\n", cidade2, estado2, area2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, area1, area2);

                        totalAtributo1+= area1;
                        totalAtributo2+= area2;
                    break;

                    case 3:
                        printf("Atributo 1: PIB: \n");
                        printf("Carta 1 - %s (%s): R$ %.2f.\n", cidade1, estado1, pib1);
                        printf("Carta 2 - %s (%s): R$ %.2f.\n", cidade2, estado2, pib2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, pib1, pib2);

                        totalAtributo1+= pib1;
                        totalAtributo2= pib2;
                    break;

                    case 4:
                        printf("Atributo 1: Pontos Turísticos: \n");
                        printf("Carta 1 - %s (%s): %i.\n", cidade1, estado1, pontoTuristico1);
                        printf("Carta 2 - %s (%s): %i.\n", cidade2, estado2, pontoTuristico2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, pontoTuristico1, pontoTuristico2);

                        totalAtributo1+= (float)pontoTuristico1;
                        totalAtributo2+= (float)pontoTuristico2;
                    break;

                    case 5:
                        printf("Atributo 1: Densidade Populacional: \n");
                        printf("Carta 1 - %s (%s): %.2f Hab/Km².\n", cidade1, estado1, densidadePop1);
                        printf("Carta 2 - %s (%s): %.2f Hab/Km².\n", cidade2, estado2, densidadePop2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, densidadePop1, densidadePop2);

                        totalAtributo1+= densidadePop1;
                        totalAtributo2+= densidadePop2;
                    break;

                    case 6:
                        printf("Atributo 1: PIB per Capita: \n");
                        printf("Carta 1 - %s (%s): %.2f.\n R$/Hab", cidade1, estado1, pibCapita1);
                        printf("Carta 2 - %s (%s): %.2f.\n R$/Hab", cidade2, estado2, pibCapita2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, pib1, pib2);

                        totalAtributo1+= pibCapita1;
                        totalAtributo2+= pibCapita2;
                    break;

                    case 7:
                        printf("Atributo 1: Super Poder: \n");
                        printf("Carta 1 - %s (%s): %.2f.\n", cidade1, estado1, superpoder1);
                        printf("Carta 2 - %s (%s): %.2f.\n", cidade2, estado2, superpoder2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, superpoder1, superpoder2);
                    break;

                    default: 
                        printf("Atributo inexistente. Tente novamente\n");
                    break;
                }
                printf("\n\n");
                switch (atributo2) {
                    case 1: 
                        printf("Atributo 2: População: \n");
                        printf("Carta 1 - %s (%s): %lu Hab.\n", cidade1, estado1, populacao1);
                        printf("Carta 2 - %s (%s): %lu Hab.\n", cidade2, estado2, populacao2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, populacao1, populacao2);

                        totalAtributo1+= (float)populacao1;
                        totalAtributo2+= (float)populacao2;
                    break;

                    case 2:
                        printf("Atributo 2: Área: \n");
                        printf("Carta 1 - %s (%s): %.2f Km².\n", cidade1, estado1, area1);
                        printf("Carta 2 - %s (%s): %.2f Km².\n", cidade2, estado2, area2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, area1, area2);
;
                        totalAtributo1+= area1;
                        totalAtributo2+= area2;
                    break;

                    case 3:
                        printf("Atributo 2: PIB: \n");
                        printf("Carta 1 - %s (%s): R$ %.2f.\n", cidade1, estado1, pib1);
                        printf("Carta 2 - %s (%s): R$ %.2f.\n", cidade2, estado2, pib2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, pib1, pib2);

                        totalAtributo1+= (float)pib1;
                        totalAtributo2+= (float)pib2;
                    break;

                    case 4:
                        printf("Atributo 2: Pontos Turísticos: \n");
                        printf("Carta 1 - %s (%s): %i.\n", cidade1, estado1, pontoTuristico1);
                        printf("Carta 2 - %s (%s): %i.\n", cidade2, estado2, pontoTuristico2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, pontoTuristico1, pontoTuristico2);

                        totalAtributo1+= (float)pontoTuristico1;
                        totalAtributo2+= (float)pontoTuristico2;
                    break;

                    case 5:
                        printf("Atributo 2: Densidade Populacional: \n");
                        printf("Carta 1 - %s (%s): %.2f Hab/Km².\n", cidade1, estado1, densidadePop1);
                        printf("Carta 2 - %s (%s): %.2f Hab/Km².\n", cidade2, estado2, densidadePop2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, densidadePop1, densidadePop2);

                        totalAtributo1+= (float)densidadePop1;
                        totalAtributo2+= (float)densidadePop2;
                    break;

                    case 6:
                        printf("Atributo 2: PIB per Capita: \n");
                        printf("Carta 1 - %s (%s): %.2f R$/Hab.\n", cidade1, estado1, pibCapita1);
                        printf("Carta 2 - %s (%s): %.2f R$/Hab.\n", cidade2, estado2, pibCapita2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, pib1, pib2);

                        totalAtributo1+= (float)pibCapita1;
                        totalAtributo2+= (float)pibCapita2;
                    break;

                    case 7:
                        printf("Atributo 2: Super Poder: \n");
                        printf("Carta 1 - %s (%s): %.2f.\n", cidade1, estado1, superpoder1);
                        printf("Carta 2 - %s (%s): %.2f.\n", cidade2, estado2, superpoder2);
                        //Compara atributo 1
                        definiVencedor(cidade1, cidade2, superpoder1, superpoder2);

                        totalAtributo1+= (float)superpoder1;
                        totalAtributo2+= (float)superpoder2;
                    break;

                    default: 
                        printf("Atributo inexistente. Tente novamente\n");
                    break;
                }

                printf("\n=== Comparando soma de atributos \n\n");
                printf("Carta 1 - %s (%s): %f.\n", cidade1, estado1, totalAtributo1);
                printf("Carta 2 - %s (%s): %f.\n", cidade2, estado2, totalAtributo2);
            } else {
                limpaTela();
                printf("Selecionado 2 vezes o mesmo valor. Refaça a operação.\n");
                pausa();
                limpaTela();
            }

            pausa();
            limpaTela();
            main();

        break;

        case 5:
            //Apresenta regras do jogo.
            limpaTela();
            printf("*** Regras ***\n\n");
            printf("1. Cada jogador deve cadastrar 1 carta, com os seguintes dados da cidade escolhida: \nCódigo da carta, estado, nome da cidade, população, área da cidade, PIB da cidade (valor inteiro), total de pontos turisticos.\n");
            printf("2. Comparação simples: \nApós o cadastro é necessário escolher 1 atributo para ser comparado. Neste, não está incluso Código da carta, estado e nome. \nO jogo irá comparar o atributo escolhido de ambas as cartas, e informa qual carta tem o valor maior, e imprimi qual carta ganhou.\n");
            printf("3. Comparação composta: \nApós o cadastro é necessário escolher 2 atributos para ser comparado, onde cada atributo só pode ser escolhido apenas 1 vez. Neste, não está incluso Código da carta, estado e nome. \nO jogo irá comparar o atributo escolhido de ambas as cartas, e informa qual carta tem o valor maior, e imprimi qual carta ganhou.\n");
            // Da um pause no programa, e só retorna para a main, após usuário clicarl algum botão.
            system("read -n 1 -s");

            limpaTela();
            main();
        break;

        case 6:
            printf("Até breve.\n");
        break;

        default:
            printf("Opção inválida.\n");
            pausa();
            limpaTela();
            main();
        break; 
    }

    return 0;
}
