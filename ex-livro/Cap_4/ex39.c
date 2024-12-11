/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main (){

    double numero;

    printf("Digite um numero: \n");
    scanf(" %lf",&numero);

    if (numero > 0){

        double quadrado = pow(numero, 2);
        double raiz = sqrt(numero);

        printf ("O numero digitado ao quadrado eh %.2lf \n",quadrado);
        printf ("A raiz do numero digitado eh %.2lf \n",raiz);

    }
    else {
        printf("O numero nao eh positivo!");
    }
    return 0;
}