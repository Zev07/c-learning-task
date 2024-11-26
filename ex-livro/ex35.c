//Faça um programa que leia dois números e mostre qual deles é o maior,imprima a mensagem “Números iguais”.

#include <stdio.h>

int main () {

    double numero1,numero2;

    printf("Digite um numero: \n");
    scanf("%lf",&numero1);

    printf("Digite outro numero: \n");
    scanf("%lf",&numero2);

    if (numero1 > numero2){
        printf("O numero %.2lf eh maior que o segundo.",numero1);
    }
    else if (numero1 < numero2){
        printf("O numero %.2lf eh maior que o primeiro",numero2);
    }

    else {
        printf("Os numeros sao iguais.");
    }
    return 0;

}