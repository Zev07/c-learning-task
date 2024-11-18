//Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;

    printf("digite um numero:\n");
    scanf("%d",&numero1);
    
    printf("digite outro numero: \n");
    scanf("%d",&numero2);

    printf("a ordem inversa dos numeros digitados: %d,%d",numero2,numero1);

    return 0;
}