/*Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h= raiz a2 + b2
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.*/

#include <stdio.h>
#include <math.h>

int main (){

    double catetoA,catetoB;

    printf("Digite o valor do primeiro cateto: \n");
    scanf("%lf",&catetoA);

    printf("Digite o valor do segundo cateto: \n");
    scanf("%lf",&catetoB);

    double hipotenusa = sqrt(pow(catetoA,2) + pow(catetoB,2));

    printf("O valor da hipotenusa eh %.2lf",hipotenusa);

    return 0;
}

