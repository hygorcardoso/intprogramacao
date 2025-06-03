#include <stdio.h>

int main() {

    /*
        São necessários para fazer a execução de estruturas repetidas no código. Exemplo, em vez apresentar um printf 100 vezes, indo de o a 99. Pode se fazer uma estrutura de repetição e a cada repetição, irá fazer a apresentação de um valor.

        tipos de estruturas: 

        for: Faz a repetição um determinado número de vezes especificado anteriormente.
        while: Efeuta a repetição de forma automática, até que uma ação seja feita. Exemplo, se S for diferente de 0, ele irá ficar repetindo.
        do-while: É similar ao while, porém primeiro ele executa e após a execução, ele faz a verificação da condição.
    */


    int i;

    while(i != 0) {
        printf("Insira um valor: ");
        scanf("%i", &i);

        /*
            No while é necessário ter bastante atenção, para não efetuar um loop infinto. O loop pode fazer consumir muitos recursos no computador. Causar travamento.
        */

    }
}