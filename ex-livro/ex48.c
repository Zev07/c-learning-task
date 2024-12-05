// Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.

#include <stdio.h>

int main (){

    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if (numero % 3 == 0 && numero % 5 !=0 ){
        printf("\nO numero eh divisivel por 3!");
    }
    else if (numero % 5 == 0 && numero % 3 !=0){
        printf("\n O numero eh divisivel por 5!");
    } else {
        printf("esse numero nao atende aos requisitos");
    }

return 0;

}