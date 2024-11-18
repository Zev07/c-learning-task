//Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.

#include <stdio.h>
#include <stdlib.h>

int main (){
    char caracter1,caracter2,caracter3;
    
    printf("Digite o primeiro caracter:\n ");
    scanf(" %c",&caracter1);

    printf("Digite o segundo caracter:\n ");
    scanf(" %c",&caracter2);

    printf("Digite o terceiro caracter:\n ");
    scanf(" %c",&caracter3);

    printf("Os valores digitados:\n %c\n %c\n %c",caracter1,caracter2,caracter3);

    return 0 ;
}