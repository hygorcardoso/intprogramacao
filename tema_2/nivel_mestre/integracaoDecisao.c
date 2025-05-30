#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, nota3, nota4, media;

    printf("*** Gerenciamento de Estudanets ***\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            printf("Calcula a Média.\n");
            printf("Entre com a primeia nota: ");
            scanf("%f", &nota1);
            printf("Entre com a segunda nota: ");
            scanf("%f", &nota2);
            printf("Entre com a terceira nota: ");
            scanf("%f", &nota3);
            printf("Entre com a quarta nota: ");
            scanf("%f", &nota4);

            if (nota1 >= 0 && nota1 <= 10 & nota2 >= 0 && nota2 <= 10 & nota3 >= 0 && nota3 <= 10 & nota4 >= 0 && nota4 <= 10){
                media = (nota1 + nota2 + nota3 + nota4) / 4;

                printf("A média do estudante é: %.2f\n", media);
            } else {
                nota1 < 0 || nota1 > 10 ? printf("Nota 1 inválida.\n") :
                nota2 < 0 || nota2 > 10 ? printf("Nota 2 inválida.\n") :
                nota3 < 0 || nota3 > 10 ? printf("Nota 3 inválida.\n") :
                printf("Nota 4 inválida.\n");
            }
        break;

        case 2:
            printf("Determinando Status.\n");
            printf("Insira a média do estudante: ");
            scanf("%f", &media);

            if(media >= 0 && media <= 10) {
                 media >= 7 ? printf("Status: Aprovado\n") : 
                 media >= 5 ? printf("Status: Recuperação!\n") :
                 printf("Status: Reprovado\n");
            } else {
                printf("Média inválida\n");
            }
        break;

        case 3:
            printf("Saindo...\n");
        break;
    
        default:
            printf("Opção inválida.\n");
        break;
    }
}