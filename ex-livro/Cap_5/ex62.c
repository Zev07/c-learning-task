/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1+2+3+6+11+22+33=78.*/

#include <stdio.h>
#include <math.h>

int main () {

    int n, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int d = 1; d <= n / 2; d++) {
        if (n % d == 0) {
            soma += d;
        }
    }

    printf("A soma dos divisores de %d eh %d.\n", n, soma);

    return 0;
}