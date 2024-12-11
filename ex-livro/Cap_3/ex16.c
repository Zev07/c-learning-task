// Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.

#include <stdio.h>

int main(){
    
    int numero;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("O numero digitado foi: %d\n", numero);
    printf("Antecessor: %d\n",antecessor);
    printf("Sucessor: %d\n",sucessor);

   
}