#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor1,valor2;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    media = (valor1 + valor2) / 2.0;

    printf("A média dos valores é: %.2lf\n", media);

    return 0;
}