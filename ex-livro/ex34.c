//Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.

#include <stdio.h>

int main (){
    
    int numero1,numero2;

    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d",&numero1);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d",&numero2);

    int and,or,xor;

    and = numero1 & numero2;
    or = numero1 | numero2;
    xor = numero1 ^ numero2;
    
    printf("Resultado da operacao AND (E bit a bit): %d\n Resultado da operacao OR (OU bit a bit): %d\n Resultado da operacao XOR (OU exclusivo bit a bit): %d\n",and,or,xor);

    return 0;
}