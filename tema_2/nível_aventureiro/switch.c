#include <stdio.h>

int main() {
    /* 
        Funciona como uma forma de menu, onde informamos um valor, e ele verifica e executa uma condição;
    */

    // int variavel;

    // printf("Digite um valor: \n");
    // scanf("%i", &variavel);

    // switch (variavel) {
    //     case 1:
    //         printf("Valor igual a 1 \n");
    //     break;

    //     case 2:
    //         printf("Valor igual a 2 \n");
    //     break;

    //     case 3:
    //         printf("Valor igual a 3 \n");
    //     break;

    //     case 4:
    //         printf("Valor igual a 4 \n");
    //     break;

    //     case 5:
    //         printf("Valor igual a 5 \n");
    //     break;

    //     default:
    //         printf("Valor desconhecido \n");
    //     break;
    // }

    int opcao;
    float saldo = 100.00;
    float valor = 0.00;

    printf("Escolha uma opção: \n");
    printf("1 . Verificar saldo\n");
    printf("2 . Fazer depósito\n");
    printf("3 . Fazer saque\n");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            printf("Saldo é de: R$ %.2f\n", saldo);
        break;

        case 2:
            printf("Qual o valor a ser depositado: ");
            scanf("%f", &valor);

            if( valor != 0 && valor > 0) {

                saldo+=valor;

                printf("Seu saldo atual é de R$ %.2f \n", saldo);
            } else {
                printf("Valor digita é inválido. Deposito não concluído \n");
            }
        break;

        case 3:
            printf("Qual o valor a ser sacado: ");
            scanf("%f", &valor);

            if(valor > 0 && valor != 0) {
                if(saldo >= valor) {
                    saldo-=valor;
                    printf("Saque concluído. Saldo atual: R$ %.2f", saldo);
                } else {
                    printf("Saldo indisponível.");
                }
            } else {
                printf("Valor inválido. Saque não concluído.\n");
            }
        break;

        default:
            printf("Opção inválida. Tente novamente. \n");
        break;
    }


}