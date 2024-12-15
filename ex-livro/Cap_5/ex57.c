/*Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.*/

#include <stdio.h>

int main() {
    int soma = 0;
    int valor;
    int i;
    const char *sufixos[] = {"primeiro", "segundo", "terceiro", "quarto", "quinto", "sexto", "setimo", "oitavo", "nono", "decimo"};

    for (i = 0; i < 10; i++) {
        printf("Digite o %s valor: ", sufixos[i]);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("A soma dos valores eh: %d\n", soma);

    return 0;
}