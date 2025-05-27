#include <stdio.h>

int main() {
    int decimal = 1;
    char ascii;

    printf("Decimal | Hexa | ASCII\n");

    for(decimal = 0; decimal < 256; decimal++) {
        ascii = (char)decimal;
        printf("%i | %x | %c\n", decimal, decimal, ascii);
    }
}