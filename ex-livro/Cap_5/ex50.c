/*  Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.*/

#include <stdio.h>

int main (){

    int n, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);

    for (i = n; i >= 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}