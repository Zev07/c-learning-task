// Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.

#include <stdio.h>


int main (){

    int numero,complemento;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&numero);

    complemento = ~numero;

    printf("O numero %d possui o complemento bit a bit de %d",numero,complemento);

    return 0;
}