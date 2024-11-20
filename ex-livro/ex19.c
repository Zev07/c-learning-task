//Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.

#include <stdio.h>

int main (){

    float valor1,valor2,valor3,valor4;

    printf("Digite o primeiro valor com ponto flutuante: \n");
    scanf("%f",&valor1);

    printf("Digite o segundo valor com ponto flutuante: \n");
    scanf("%f",&valor2);

    printf("Digire o terceiro valor com ponto flutuante: \n");
    scanf("%f",&valor3);

    printf("digite o quarto valor com ponto flutuante: \n");
    scanf("%f",&valor4);

    float media = (valor1 + valor2 + valor3 + valor4) / 4;

    printf("A media aritmetica desses valores eh %.2f",media);

    return 0 ;
}