//Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int valores [5];
    int v;

    for (v = 0; v < 5; v++) {
        printf("Digite o %dº número, o valor deve ser inteiro: ", v + 1);
        if (scanf("%d",&valores[v]) != 1) {
            printf("Erro ao ler o valor. Certifique-se de digitar um número inteiro.\n");
            return 1;
        }
    }

    printf ("Os valores lidos foram: ");
    for (v = 0; v < 5; v++) {
        printf("%d ", valores[v]);
    }

    double soma = 0;
    
    for (v = 0; v < 5; v++) {
        soma += valores[v];
    }

    double media = soma / 5.0;

    printf ("A media eh %.2lf ",media);

}
