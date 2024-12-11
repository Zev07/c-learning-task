//Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante.

#include <stdio.h>

int main () {

    int escolha;

    printf("Escolha um numero inteiro de 1 a 7: \n");
    scanf("%d",&escolha);

    switch (escolha)
    {
    case 1:
        printf("Segunda-Feira");
        break;
    case 2:
        printf("Terca-Feira");
        break;
    case 3:
        printf("Quarta-Feira");
        break;
    case 4:
        printf("Quinta-Feira");
        break;
    case 5:
        printf("Sexta-Feira");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Numero Invalido!");
        return 1 ;
    }

    printf (" %d ",escolha);

    return 0 ;
}
