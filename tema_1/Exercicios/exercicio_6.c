#include <stdio.h>

int main() {
    int num1, num2, i;

    printf("Insira 2 valores diferentes. \n");
    scanf("%i %i", &num1, &num2);
    
    if( num1 < num2) {
        i = num1 - 1;
        while(i < num2) {
            i++;
            printf("%i ", i);
        }
        printf("\n");
    } 
    if(num1 > num2) {
        i = num1 + 1;
        while(i > num2) {
            i = i - 1;
            printf("%i ", i);
        }
        printf("\n");
    }  
    if (num1 == num2) {
        printf("Os valores são iguais.\n");
    }
}