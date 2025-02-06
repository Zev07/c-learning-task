#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor == 0) {
        printf("O valor é zero.\n");
    } else if (valor > 0) {
        printf("O valor é positivo.\n");
    } else {
        printf("O valor é negativo.\n");
    }

    return 0;
}