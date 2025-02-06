//Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.

#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais no vetor:\n");
    int encontrou = 0;
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d ", vetor[i]);
                encontrou = 1;
                break; 
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum valor igual encontrado.\n");
    }

    return 0;
}