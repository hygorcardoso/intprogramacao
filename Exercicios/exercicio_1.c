#include <stdio.h>

int main() {
    float metros = 0;

    printf("Por favor, insira um valor em metros. \n");
    scanf("%f", &metros);

    printf("Valor em metros %.2f \n", metros);
    printf("Valor em decimetros %.2f \n", metros*10);
    printf("Valor em centimetros %.2f \n", metros*100);
    printf("Valor em milimetros %.2f \n", metros*1000);
}