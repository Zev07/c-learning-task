//Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).

#include <stdio.h>
#include <stdlib.h>

int main (){
    int dia,mes,ano;

    printf("Digite um dia \nexemplo (00)\n");
    scanf("%d",&dia);
    printf("Digite um mes \nexemplo (00)\n");
    scanf("%d",&mes);
    printf("Digite um ano: \nexemplo (0000) \n");
    scanf("%d",&ano);

    printf("A data digitada foi %d/%d/%d",dia,mes,ano);

    return 0;
}