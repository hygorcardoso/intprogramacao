#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 0, num2 = 0, soma = 0, produto = 0, quadrado = 0, raiz = 0, modulo = 0;
    double seno = 0;

    printf("Insira 2 números\n");
    scanf("%lf %lf", &num1, &num2);

    soma = (num1 + num2);
    produto = num1 * (num2 * num2);
    quadrado = num1 * num1;
    seno = (sin(num1) * cos(num2)) - (sin(num2) * cos(num1));
    modulo = abs(num1);

    printf("%f + %f = %f \n", num1, num2, soma);
    printf("%f + (%f x %f) = %f \n", num1, num2, num2, produto);
    printf("%f x %f = %f \n", num1, num1, quadrado);
    printf("Seno(%.0lf - %.0lf): %lf \n", num1, num2, seno);
    printf("Módulo de %lf: %lf \n", num1, modulo);
}
