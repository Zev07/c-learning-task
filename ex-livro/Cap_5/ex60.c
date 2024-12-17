/* Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

#include <stdio.h>

int main () {

    int num;
    int sum = 0;
    int cont = 0;

    while (cont < 10){
        

        printf("Digite o %d numero: \n", cont + 1);
        scanf("%d", &num);

        if (num > 0) {
            sum += num;
            cont ++;
        } else {
            printf("Numeros nao positivos sao ignorados\n");
        }
    }

    int media = (int)sum / cont;
    printf("A media dos numeros positivos eh: %.2d \n",media);

    return 0;

}