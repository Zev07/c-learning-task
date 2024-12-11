//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

#include <stdio.h>

int main () {

    int numero1,numero2;

    printf("Digite um numero:");
    scanf("%d",&numero1);
    
    printf("Digite outro numero: ");
    scanf("%d",&numero2);

    if (numero1 > numero2){
        printf("O numero %d eh maior que o numero %d", numero1,numero2);
    }
    else if (numero1 < numero2){
        printf("O numero %d eh maior que o numero %d", numero2,numero1);
    }
    else if ( numero1 == numero2){
        printf("Os numeros sao iguais");
    }

    return 0 ;
}