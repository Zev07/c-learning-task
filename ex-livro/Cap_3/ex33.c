//Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo.

#include <stdio.h>

int main () {

    int numero1,numero2,esquerda,direita;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d",&numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d",&numero2);

    esquerda = numero1 << numero2;
    direita = numero1 >> numero2;

    printf("O primeiro numero inteiro %d e o segundo numero inteiro %d deslocados ficam: \n deslocados para esquerda eh %d \n descolado para direita eh %d",numero1,numero2,esquerda,direita);

    return 0;
}