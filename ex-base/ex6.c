#include <stdio.h>
#include <stdlib.h>

int main () {
    double temperatura;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &temperatura);

    temperatura = (temperatura * 9/5) + 32;

    printf("A temperatura em Fahrenheit é: %.2lf\n", temperatura);

    return 0;
}