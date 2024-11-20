//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

#include <stdio.h>

int main () {
    
    int ano,nascimento;

    printf("Digite o ano atual: ");
    scanf("%d",&ano);
    
    printf("Digite o ano do seu nascimento: ");
    scanf("%d",&nascimento);
    
    int resultado = ano - nascimento;

    printf("A sua idade eh %d",resultado);

    return 0 ;
}