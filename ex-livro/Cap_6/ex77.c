// Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int vetores[10];
    int v;
    int contadorPares = 0;

    for(v = 0; v < 10; v++){
        printf("Digite o %d numero inteiro: ",v + 1);
        if (scanf("%d",&vetores[v]) != 1) {
             printf("Erro ao ler o valor. Certifique-se de digitar um número inteiro.\n");
            return 1;
        }
    }

    for (v = 0; v < 10; v++) {
        if (vetores[v] % 2 == 0) { 
            contadorPares++;       
        }
    }

    printf("Quantidade de numeros pares no vetor: %d\n", contadorPares);

    return 0;

}