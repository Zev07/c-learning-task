//Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.

#include <stdio.h>

int main () {

    float reais,dolar;

    printf("Digite um valor em reais: ");
    scanf("%f",&reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f",&dolar);

    float conversao = reais / dolar;

    printf("Valor convertido em dolar %.2f",conversao);

    return 0;
}