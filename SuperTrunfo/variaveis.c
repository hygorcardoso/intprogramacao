#include <stdio.h>

int main() {
    /* Tipos de variaveis
    int = Valores inteiros
    float = valores com ponto flutuante
    double = valores com ponto flutuante de dupla precisão
    char = caractere
    char nome[100] = defini um char, porém os [] defini o tamanho, fazendo com que um char vire uma array
    */

    int idade = 25; 
    int Idade; //Por mais que tenham o mesmo nome, são coisas diferentes
    float altura = 1.65;
    double peso = 76.1;
    char letra = 'H';
    char nome[50] = "Hygor";

    /*
        Outra coisa, não podemos usar nomes com palavras reservadas. Exemplos:
        int int; Irá dar erro, por int é uma palavra reservada para o sistema.

    */

    printf("Bem vindo %s, seu nome começa com a letra %c, você tem %i anos, tem %.2f m de altura, e peso de %.2f Kg. \n", nome, letra, idade, altura, peso);
}
