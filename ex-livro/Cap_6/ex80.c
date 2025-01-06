//Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A – B. Mostre na tela os dados do array C.

#include <stdio.h>
int main() {
    int A[10], B[10], C[10];
    int v;

    printf("Digite 10 números inteiros para o array A:\n");
    for (v = 0; v < 10; v++) {
        printf("A[%d]: ", v);
        scanf("%d", &A[v]);
    }

    printf("Digite 10 números inteiros para o array B:\n");
    for (v = 0; v < 10; v++) {
        printf("B[%d]: ", v);
        scanf("%d", &B[v]);
    }

    for (v = 0; v < 10; v++) {
        C[v] = A[v] - B[v];
    }

    printf("Os valores do array C (C = A - B) são:\n");
    for (v = 0; v < 10; v++) {
        printf("C[%d] = %d\n", v, C[v]);
    }

    return 0;
}