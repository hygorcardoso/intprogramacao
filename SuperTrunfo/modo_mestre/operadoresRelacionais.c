#include <stdio.h>

int main() {
    /*
        Operadores relacionais são operadores que comparam variaveis, e permite tomar decisões dentro do código.asm
        
        Eles são:
        > (Maior que)
        < (menor que)
        >= (maior ou igual a)
        <= (menor ou igual a)
        == (igual a)
        != (diferente de)
    
    */

    int a = 10;
    int b = 20;

    printf("A > B: %d \n", a > b);
    printf("A < B: %d \n", a < b);
    printf("A == B: %d \n", a == b);
    printf("A != B: %d \n", a != b);

    // Para comparar variaveis diferentes, o compilador faz a conversão de forma implicita

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("X >= Y: %d \n", x >= y);
    printf("X == Y: %d \n", x == y);
    printf("X != Y: %d \n", x != y);  
    
    printf("X >= c: %d \n", x >= c);
    printf("O valor ASCII de %c é %d: \n", c, c);

    //Conversão explicita (casting)

    float numero1 = 10.2;
    int numero2 = 10;

    printf("Número1 > número2: %d \n", (int)numero1 > numero2);
    printf("Número1 == número2: %d \n", (int)numero1 == numero2);
    return 0;
}