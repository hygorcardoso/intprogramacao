#include <stdio.h>

int main() {
    float nota1 = 0, nota2 = 0, nota3 = 0, media = 0; 

    printf("*-*-* Calculo de média *-*-* \n\n");

    printf("Insira a primeria nota: \n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: \n");
    scanf("%f", &nota3);
    
    media = (float)(nota1 + nota2 + nota3)/3;

    printf("A média é %.2f\n", media);
}