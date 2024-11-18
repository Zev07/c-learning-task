//Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char caracter;
    printf("digite um caracter: ");
    scanf("%c",&caracter);
    printf("O caracter %c em sua forma inteira e %d",caracter,caracter);
    return 0;
}