/*
 Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.
 */
#include <stdio.h>

int main() {
    char caractere;
    int inteiro;
    float flutuante;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número de ponto flutuante: ");
    scanf("%f", &flutuante);
    
    printf("\n1. Separadas por espaços: %c %d %.2f\n", caractere, inteiro, flutuante);

    printf("2. Separadas por tabulação: %c\t%d\t%.2f\n", caractere, inteiro, flutuante);

    printf("3. Uma em cada linha:\n%c\n%d\n%.2f\n", caractere, inteiro, flutuante);

    return 0;
}
