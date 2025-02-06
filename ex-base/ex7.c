#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor1,valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 == valor2) {
        printf("Os valores são iguais\n");
    }
    if (valor1 > valor2) {
        printf("O primeiro valor é maior que o segundo\n");
    }
    if (valor1 < valor2) {
        printf("O primeiro valor é menor que o segundo\n");
    }
    else {
        printf("Valor invalido\n");
    }

    return 0;
    
}