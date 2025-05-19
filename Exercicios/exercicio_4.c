#include <stdio.h>

int main() {
    float temp = 0, conversao = 0;

    printf("Insira a tempratura em fahrenheit: \n");
    scanf("%f", &temp);

    printf("%f", temp);

    conversao = ((temp-32.0) * (5.0/9.0));

    printf("%f ºF é igual a %f Cº \n", temp, conversao);
}