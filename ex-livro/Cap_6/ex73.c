//Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int valores [6];
    int v;

    for (v = 0; v < 6; v++) {
        printf("Digite o %dº numero, o valor deve ser inteiro: ", v + 1);
        if (scanf("%d", &valores[v]) != 1) {
            printf("Erro ao ler o valor, certifique-se de digitar um número inteiro.\n");
            return 1;
        }
    }

    printf("Os valores lidos são: ");
    for (v = 5; v >= 0; v--) {
        printf("%d", valores [v]);
    }
    printf("\n");

    return 0;
}