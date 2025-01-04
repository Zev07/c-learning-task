/*Faça um programa que calcule e escreva o valor de S: 1/1  + 3/2 + 5/3 + 7/4 ... + 99/55
*/

#include <stdio.h>

int main () {
    float S = 0.0;
    int numerador = 1;
    int denominador =1;

    while (numerador <= 99 && denominador <= 55) {
        S += (float)numerador / denominador;
        numerador += 2;
        denominador += 1;
    }

    printf("O valor de S eh: %.2f \n", S);

    return 0;
}