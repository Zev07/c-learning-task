//Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.

#include <stdio.h>

int main() {
    int vetor[10];
    int num, verificador, x, y;

    printf("Digite 10 numeros diferentes:\n");

    // Controlador de numeros do vetor
    for (x = 0; x < 10;) {
        printf("Digite um numero (%d/10): ", x + 1);
        scanf("%d", &num);

        verificador = 0;

        for (y = 0; y < x; y++) {
            if (vetor[y] == num) {
                verificador = 1;
                break;
            }
        }

        if (verificador) {
            printf("Numero repetido! Tente outro.\n");
        } else {
            vetor[x] = num;
            x++;
        }
    }

    printf("Vetor final:\n");
    for (x = 0; x < 10; x++) {
        printf("%d ", vetor[x]);
    }
    printf("\n");

    return 0;
}