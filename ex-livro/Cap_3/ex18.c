// Faça um programa que leia três valores inteiros e mostre sua soma.

#include <stdio.h>

int main () {
    int numero1,numero2,numero3;

    printf("Digite o primeiro numero inteiro: \n");
    scanf(" %d",&numero1);

    printf("Digite o segundo numero inteiro: \n");
    scanf(" %d",&numero2);

    printf("Digite o terceiro numero inteiro: \n");
    scanf(" %d",&numero3);

    int soma = numero1 + numero2 + numero3;

    printf("A soma dos valores eh %d",soma);

    return 0;
}