#include <stdio.h>

int main() {
    /*
        No loop avançado, é criado uma estrutura com multiplas variavels. Exemplo do for: 

        for( int i = 0, j = 10; i < j; i++, j-- ) {
            printf("i - %d, j - %d\n", i, j);
        }

        for( int i = 0, j = 10; i < 5  && j > 5; i++, j-- ) {
            printf("i - %d, j - %d\n", i, j);
        }

        for( int i = 0;
            i < 100; 
            
            i+= (i % 2 == 0) ? 1 : 2) {
            printf("%d \n", i);
        }
    */

    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
           
}