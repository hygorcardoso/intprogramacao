#include <stdio.h>
 
int main() {
    int a = 10;
    float b = 3;
    float soma = a + b;
    float diferenca = a - b;

    //Conversão implicita
    float produto = a * b; // A variável A é convertida implicitamente para float. Pode acarretar em problemas, como comportamentos inesperados.

    //Conversão explicita    
    float quociente = (float)a / b; // A conversão é feita de forma explicita. Onde utilizamos casting, ou seja, forçamos a conversão do dado.

    
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);
    return 0;
}