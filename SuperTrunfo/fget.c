#include <stdio.h>

int main() {
    char buff[100];
    printf("Enter a string: ");
  
  	// Taking input using gets()
    gets(buff);
    printf("You entered: %s \n", buff);
    return 0;
}