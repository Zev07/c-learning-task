//Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo: Entrada=4. Saída=Abril.

#include <stdio.h>

int main (){

    int numero;

    printf("Digite um numero inteiro de 1 a 12: \n");
    scanf("%d",&numero);

    switch (numero)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Numero invalido!");
        return 1 ;
    }

    printf(" %d ",numero);

    return 0;
}