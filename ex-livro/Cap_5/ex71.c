/* Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário.*/

#include <stdio.h>

int main() {
    int quantidade, numero, maior, contadorMaior = 0;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade de numeros deve ser positiva.\n");
        return 1;
    }

    printf("Digite o 1º numero: ");
    scanf("%d", &numero);
    maior = numero;
    contadorMaior = 1;

    for (int i = 1; i < quantidade; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
            contadorMaior = 1;
        } else if (numero == maior) {
            contadorMaior++;
        }
    }

    printf("O maior numero eh %d e ele foi lido %d vezes.\n", maior, contadorMaior);

    return 0;
}