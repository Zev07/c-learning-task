//Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os operadores de deslocamento de bits).

#include <stdio.h>

int main () {

    int numero,multipli,divi;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    multipli = numero << 1;

    divi = numero >> 1;

    printf("A multiplicacao do numero %d eh %d e a divisao eh %d \n",numero,multipli,divi);

    return 0 ;
}