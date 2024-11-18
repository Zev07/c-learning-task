//Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("digite um numero: ");
    scanf("%f",&numero);
    printf("%f",numero);
    return 0;
}

// resposta: O número dado foi uma sequência de ponto flutuante de 0