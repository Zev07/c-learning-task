#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O valor %d é par\n", valor);
    } else {
        printf("O valor %d é ímpar\n", valor);
    }

    return 0;
}