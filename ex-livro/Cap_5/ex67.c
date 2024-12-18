/*Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja: Hn = 1 + 1/2 + 1/3 + 1/4 ... + 1/n
Apresente um programa que calcule o valor de qualquer Hn.*/

#include <stdio.h>

int main () {
    int n;
    double H = 0.0;

    printf("Digite um número inteiro positivo (n)");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero inteiro positivo maior ou igual a 1. \n");
        return 1;
    }

    for (int i = 1; i <= n; i ++) {
        H += 1.0 / i;
    }

    printf ("O numero harmonico H(%d) eh: %.6lf\n",n, H);

    return 0;
}