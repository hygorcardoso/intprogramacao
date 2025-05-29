#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao = 0, numeroSecreto, palpite;

    printf("Menu Principal.\n\n");
    printf("1 . Iniciar Jogo\n");
    printf("2 . Ver Regras\n");
    printf("3. Sair\n");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;

            printf("Insira um núemero de 0 a 9: \n");
            scanf("%i", &palpite);

            if(numeroSecreto == palpite) {
                printf("Parabéns, você acertou o número.\n");
            } else {
                printf("Perdeu. Número era %i\n", numeroSecreto);
            }
        break;

        case 2:
            printf("Explicação de regras\n");
        break;

        case 3:
            printf("Saindo...\n");
        break;

        default:
            printf("Opção inválida\n");
        break;
    }
}