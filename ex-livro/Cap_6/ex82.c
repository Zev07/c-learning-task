// Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float numeros_reais[20];
    float quadrado[20];
    int x, y;

    printf("Digite o número de elementos (máximo 20): ");
    scanf("%d", &x);

    if (x > 20) {
        printf("Número de elementos excede o máximo permitido de 20.\n");
        return 1;
    }

    for (y = 0; y < x; y++) {
        printf("Digite o %dº número real: ", y + 1);
        scanf("%f", &numeros_reais[y]);
    }

    for (y = 0; y < x; y++) {
        quadrado[y] = numeros_reais[y] * numeros_reais[y];
    }

    printf("Números reais:\n");
    for (y = 0; y < x; y++) {
        printf("%.2f ", numeros_reais[y]);
    }
    printf("\n");

    printf("Quadrado dos números reais:\n");
    for (y = 0; y < x; y++) {
        printf("%.2f ", quadrado[y]);
    }
    printf("\n");

    return 0;
}