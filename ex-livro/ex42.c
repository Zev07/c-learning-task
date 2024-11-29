//Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

#include <stdio.h>

int main (){

    int idade;
    
    printf("Qual a sua idade? ");
    scanf("%d",&idade);

    if (idade <= 5 && idade <=7){
        
        printf("Sua categoria eh a infantil A");
    }
    else if (idade >= 8 && idade <=10){
        printf("Sua categoria eh a infantil B");
    }
    else if (idade >= 11 && idade <=13){
        printf("Sua categoria eh a juvenil A");
    }
    else if (idade >= 14 && idade <=17){
        printf("Sua categoria eh a juvenil B");
    }
    else if (idade >= 18){
        printf("Sua categoria eh a senior");
    }
    else {
        printf("Sem classificacao");
    }

    return 0;
}