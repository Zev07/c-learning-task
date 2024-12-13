/*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/
#include <stdio.h>

int main() {
    for (int n = 1; n <= 5; n++) {
        printf("%d\n", 3 * n);
    }
    return 0;
}
