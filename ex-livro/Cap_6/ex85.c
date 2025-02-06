// Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números em que m é a média desse vetor. Considere n=10. O vetor v deve ser lido do teclado.

#include <stdio.h>
#include <math.h>

int main () {
    int vetor [10];
    int x;
    float soma = 0.0, media, desvioPadrao = 0.0;

    printf ("Digit 10 numeros inteiros: \n");
    for (x = 0; x < 10; x++) {
        printf("Elemento %d: ", x + 1);
        scanf("%d", &vetor [x]);
        soma += vetor [x];
    }

    media = soma / 10;

    for (x = 0; x < 10; x++) {
        desvioPadrao += pow(vetor[x] - media, 2);
    }

    desvioPadrao = sqrt(desvioPadrao / 10);

    printf("Média: %.2f\n", media);
    printf("Desvio-padrão: %.2f\n", desvioPadrao);
    
    return 0;
}