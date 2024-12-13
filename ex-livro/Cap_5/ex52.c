/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/

#include <stdio.h>

int n, contador = 0, num = 1;

#define LIMITE 10

int main () {

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("não é inteiro positivo\n");
        return 1;
    }

    while (contador < n && contador < LIMITE) {
        printf("%d\n", num);
        num += 2;
        contador++;
    }

    return 0;
}