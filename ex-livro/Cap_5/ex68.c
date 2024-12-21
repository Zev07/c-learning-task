#include <stdio.h>
#include <math.h>

int main () {
    int numero;

    do {
        printf("Digite um numero inteiro positivo maior que 1: ");
        scanf("%d", &numero);

        if (numero <= 1) {
            printf("O numero fornecido eh invalido. Tente novamente.\n");
        }
    } while (numero <= 1);

    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            printf("O numero nao eh primo\n");
            return 0;
        }
    }

    printf("O numero eh primo\n");
    return 0;
}