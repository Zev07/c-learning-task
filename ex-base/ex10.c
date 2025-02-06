#include <stdio.h>
#include <stdlib.h>

int main () {
    int N,i, valor, soma = 0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("A quantidade de valores deve ser maior que zero.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("A soma dos valores é: %d\n", soma);

    return 0;
}
