/*Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. Exemplo:
Número lido=123 Número gerado=321*/

#include <stdio.h>

int main () {

    int numero,digito1,digito2,digito3,invertido;

    printf("Digite um numero positivo de tres digitos: ");
    scanf("%d",&numero);

    digito1 = numero % 10;
    digito2 = (numero / 10) %10;
    digito3 = (numero / 100)  %10;

    invertido = digito1 * 100 + digito2 * 10 + digito3;

    if (numero >= 100 && numero < 1000){

    printf("O numero invertido fica: %d", invertido);
    }

    else {
        printf("O numero digitado nao tem 3 digitos ou nao eh postivo!");
    }

    return 0;
}