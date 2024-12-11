//Faça um programa que leia um número real e imprima a quinta parte desse número.

#include <stdio.h>

int main () {
    float numero;

    printf("Digite um numero real: \n");
    scanf("%f", &numero);
    
    float quintaparte = numero / 5; 

    printf("A quinta parte de %.2f e %.2f ",numero,quintaparte);
}