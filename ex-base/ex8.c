#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", valor, i, valor * i);
    }

    return 0;
}