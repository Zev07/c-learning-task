/*Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o valor E, conforme a fórmula a seguir: E 1/1! + 1/2! + 1/3! ... = 1/N!
*/

#include <stdio.h>


// Função para fatoriar o número diigtado.
int fatorial(int numero) {
    int fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}


int main (){

    int Numero;
    double E = 0.0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&Numero);

    if (Numero <= 0) {
        printf("Digite um numero positivo: ");
        return 1;
    }

    for (int i = 1; i <= Numero; i++) {
        E += 1.0 / fatorial(i);
    }

    printf ("O valor de E eh: %.4f \n", E);
    
    return 0;
}