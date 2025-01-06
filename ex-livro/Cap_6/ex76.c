//Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int vetor[8];
    int v,X,Y;

    for (v = 0; v < 8; v++) {
        printf("Digite o %dº número, o valor deve ser inteiro: ", v + 1);
        if (scanf("%d",&vetor[v]) != 1) {
            printf("Erro ao ler o valor. Certifique-se de digitar um número inteiro.\n");
            return 1;
        }
    }

    printf("Digite a posição X (entre 0 e 7): ");
    scanf("%d", &X);
    printf("Digite a posição Y (entre 0 e 7): ");
    scanf("%d", &Y);

    if (X < 0 || X > 7 || Y < 0 || Y > 7) {
        printf("Erro: as posições devem estar entre 0 e 7.\n");
        return 1;
    }

    int somaXY = vetor[X] + vetor[Y];

    printf("A soma dos valores nas posições %d e %d é: %d\n", X, Y, somaXY);

    return 0;

}

