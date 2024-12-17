/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>

    int num,i;

int main () {

    printf("Digite um numero positivo: ");
    scanf("%d",&num);

    if (num <= 0) {
        printf("Por favor, digite um número positivo válido.\n");
        return 1;
    }

    printf("Divisores de %d sao: \n",num);

    for (i = 1; i <= num; i++){
        if (num % i == 0){
            printf("%d ",i);
        }
    }

    return 0;

}