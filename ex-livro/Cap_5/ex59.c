/* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>

int num[10];
int maior,menor;

int main (){

    printf("Digite 10 numeros inteiros: \n");

    for (int n = 0; n < 10; n++){
        printf("Numero %d: ",n + 1);
        scanf("%d",&num[n]);
    }

    int maior = num[0];
    int menor = num [0];

    for (int i = 1; i < 10; i++){
        if (num [i] > maior) { 
            maior = num [i];
        }

        if (num [i] < menor) {
            menor = num [i];
        }
    }

    printf ("Maior numero: %d\n",maior);
    printf ("Menor numero: %d\n",menor);
}