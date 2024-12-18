/* Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido.*/

#include <stdio.h>

int main (){
    int numero,menor,maior;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    if (numero < 0){
        printf("Nenhum numero foi lido \n");
        return 0;
    }

    maior = numero;
    menor = numero;

    while (1) {
        printf("Digite outro numero (ou um numero negativo para encerrar): ");
        scanf("%d",&numero);

        if (numero < 0){
            break;
        }

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);

    return 0;
}