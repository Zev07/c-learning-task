#include <stdio.h>

int main() {
    double altura, pesoIdeal;
    char sexo;

    printf("Digite sua altura (em metros): ");
    scanf("%lf", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo); 

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal e: %.2lf kg\n", pesoIdeal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e: %.2lf kg\n", pesoIdeal);
    } else {
        printf("Sexo invalido. Use 'M' para masculino ou 'F' para feminino.\n");
    }

    return 0;
}
