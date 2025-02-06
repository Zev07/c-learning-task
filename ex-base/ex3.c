#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor1,valor2;

    printf("Digite um valor: ");
    scanf("%d", &valor1);
    
    printf("Digite outro valor: ");
    scanf("%d", &valor2);

    printf("A soma dos valores é: %d\n", valor1 + valor2);

    return 0;
}