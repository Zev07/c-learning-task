//Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.

#include <stdio.h>

int main() {
    float numeros[10];
    int v;
    int quantidade_negativos = 0;
    float soma_positivos = 0.0;


    for (v = 0; v < 10; v++) {
        printf("Digite o %dº número real: ", v + 1);
        scanf("%f", &numeros[v]);
    }


    for (v = 0; v < 10; v++) {
        if (numeros[v] < 0) {
            quantidade_negativos++;
        } else {
            soma_positivos += numeros[v];
        }
    }

    printf("Quantidade de números negativos: %d\n", quantidade_negativos);
    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}