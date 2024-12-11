//Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero1,numero2;

    printf("Digite um numero: ");
    scanf("%f",&numero1);

    printf("Digite outro numero: ");
    scanf("%f",&numero2);

    printf("O valores digitados em ordem inversa foi: %.2f,%.2f",numero2,numero1);

    return 0;
}