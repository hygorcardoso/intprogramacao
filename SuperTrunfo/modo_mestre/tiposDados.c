#include <stdio.h>

int main() {
    /* 
        Tipos de dados
        int: -2.147.483.648 até 2.147.483.647
        unsigned int 0 a 4,294,967,295 ou seja, só valores positivos
        char -128 a 127
        unsigned char 0 a 255

        Modificadores:
        unsigned: armazena apenas valores possitivos
        signed:
        long: 
        short:
    */

    int numeroSinal = 3000000000;
    unsigned int numeroSemSinalSinal = 3000000000;

    printf("Número com sinal: %u \n", numeroSinal);
    printf("Número sem Sinal: %u \n", numeroSemSinalSinal);

    // long 
    int numeroNormal = 2147483647;
    long long int numeroGrande = 2147483648;

    printf("Número regular (int): %u \n", numeroNormal);
    printf("Número grande (long int): %lld \n", numeroGrande);

    printf("Tamanho de int %zu bytes\n ", sizeof(int));
    printf("Tamanho de long int %zu bytes\n", sizeof(long int));
    printf("Tamanho de long long int %zu bytes\n", sizeof(long long int));
    printf("Tamanho de double %zu bytes\n", sizeof(double));
    printf("Tamanho de long double %zu bytes\n", sizeof(long double));
    //Short

}