#include <stdio.h>

int main() {

    /*
        São necessários para resolver problemas mais complexos. Por conta da usa estrutura hierarquica, é possível fazer essa resolução de problemas mais complexas.asm
        Requere organização de código, e garantir que não tenha loops infinitos. 

        Antes de utilizar, é necessário analisar com calma, se é melhor usar um loop aninhado ou alguma outra opção. Pois os loops aninhados, pdoe causar lentidão, por conta da sua complexidade.

        São muito utilizados em algoritmos de força bruta. Matrizes, criptografia e segurança.asm
    */

    int i = 0, j = 0;
    
    printf("Imprimindo tabuadas de 0 a 10 utilizando FOR.\n\n");

    // for(i = 0; i <= 10; i++) {
    //     printf("\n\nTabuada do %d.\n", i);
    //     for(j = 0; j <=10; j++) {
    //         printf("%d X %d = %d\n", i, j, i * j);
    //     }
    // }

    // i = 0;
    // j = 0;

    // printf("Imprimindo tabuadas de 0 a 10 utilizando while.\n\n");

    // while( i < 11){
    //     printf("\n\nTabuada do %d.\n", i);
    //     while( j < 11) {
    //         printf("%d X %d = %d\n", i, j, i * j);
    //         j++;
    //     }
    //     j = 0;
    //     i++;
    // }

    // printf("Imprimindo tabuadas de 0 a 10 utilizando while.\n\n");

    // while( i < 11){
    //     printf("\n\nTabuada do %d.\n", i);
    //     while( j < 11) {
    //         printf("%d X %d = %d\n", i, j, i * j);
    //         j++;
    //     }
    //     j = 0;
    //     i++;
    // }

    i = 0;
    j = 0;

    printf("Imprimindo tabuadas de 0 a 10 utilizando Do While.\n\n");
    do{

        printf("\nImprimindo tabuada do %d.\n", i);
        do{
                printf("%d x %d = %d \n", i, j, i * j);
                j++;
        } while( j < 11);
        j = 0;
        i++;
    } while(i < 11);

}