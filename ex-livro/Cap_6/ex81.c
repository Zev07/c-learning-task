//Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[100];
    int v = 0;
    int num = 0;

    while (v < 100) {
        if (num % 7 != 0) {
            vetor[v] = num;
            v++;
        }
        num++;
    }

    printf("Os 100 primeiros numeros naturais que não sao multiplos de 7: \n");
    for (v = 0; v < 100; v++) {
        printf("%d ", vetor[v]);
    }

    return 0;
}