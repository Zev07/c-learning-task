// Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.

#include <stdio.h>

int main (){

    char letra;

    printf("Digite uma letra maiuscula: \n");
    scanf("%c",&letra);

    if (letra >= 'A' && letra <= 'Z') {
        
        char letra_minuscula = letra + 32;

        printf("A letra minuscula correspondente eh %c \n",letra_minuscula);
    }

    else {
        printf("Erro: O caractere digitado não é uma letra maiúscula.\n");
    }

    return 0 ;
}