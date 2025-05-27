#include <stdio.h>

int main() {
    float humidade = 0.00, temperatura = 0.00;
    unsigned int estoque = 0, estoqueMinimo = 100;

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);
    printf("Entre com a humidade: ");
    scanf("%f", &temperatura);
    printf("Entre com o estoque: ");
    scanf("%u", &estoque);

    if( temperatura > 40.00 ) {
        printf("A temperatura está alta \n");
    } else {
        printf("Temperauta está dentro dos parametrôs \n");
    }

    if(humidade < 50.00) {
        printf("Humidade elevada \n");
    } else {
        printf("Humidade dentro do esperado \n");
    }

    if(estoque < estoqueMinimo) {
        printf("O estoque está abaixo do mínimo \n");
    } else {
        printf("Estoque está dentro dos valores esperados \n");
    }
}