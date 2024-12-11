/* Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F=C * (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main (){

    float celsius;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f",&celsius);

    float fahrenheit = celsius * (9.0/5.0) + 32.0;

    printf("A conversão de graus Celsius para Fahrenheit eh %.2f",fahrenheit);

    return 0 ;
}