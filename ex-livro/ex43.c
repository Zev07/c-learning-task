//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

#include <stdio.h>

int main (){

    float altura, peso;
    char classificacao;


    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    if (altura < 1.20){
        if (peso <= 60){
            classificacao = 'A';
        } else if (peso <= 90){
            classificacao = 'D';
        } else {
            classificacao = 'G';
        }
    }
    else if (altura >= 1.20 && altura <= 1.70) {
        if (peso <= 60){
            classificacao = 'B';
        } else if (peso > 60 && peso <= 90){
            classificacao = 'E';
        } else {
            classificacao = 'H';
        }
    }
    else if (altura > 1.70){
        if (peso <= 60){
            classificacao = 'C';
        }
        else if (peso > 60 && peso <= 90){
            classificacao = 'F';
        }
        else {
            classificacao = 'I';
        }
    }

    printf("A classificacao da pessoa eh: %c\n", classificacao);

    return 0;
}
