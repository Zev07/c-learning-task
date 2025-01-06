//Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int vetor[10];
    int v,maior,menor;

    for(v = 0; v < 10; v++){
        printf("Digite o %d numero inteiro: ",v + 1);
        if (scanf("%d",&vetor[v]) != 1) {
             printf("Erro ao ler o valor. Certifique-se de digitar um número inteiro.\n");
            return 1;
        }
    }

    maior = menor = vetor [0];

    for (v = 1; v < 10; v++) {
        if (vetor[v] > maior) {
            maior = vetor [v];
        }
        if (vetor [v] < menor) {
            menor = vetor[v];
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}