/*Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.*/

#include <stdio.h>

int main() {

    int soma = 0;

    for (int n = 0; n < 1000; n++) {
        if (n % 3 == 0 || n % 5 == 0){
            soma += n;
        }
    }

    printf("A soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 sao: %d", soma);

    return 0;
}
