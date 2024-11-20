//Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R=G * π/180, sendo G o ângulo em graus e R em radianos e π=3.141592.

#include <stdio.h>
#include <math.h>

int main () {

    float graus;

    printf("Digite um angulo em graus: ");
    scanf("%f",&graus);

    float radianos = graus * 3.141592 / 180;

    printf("O valor convertido em radianos %.2f ",radianos);

    return 0;
}
