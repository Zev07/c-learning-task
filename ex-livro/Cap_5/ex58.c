/* Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main() {
    int num[10];
    int soma = 0;
    float media;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }

    media = soma / 10.0;
    printf("A media dos numeros eh: %.2f\n", media);

    return 0;
}