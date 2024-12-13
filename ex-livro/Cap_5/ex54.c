/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

#include <stdio.h>

int main (){

int soma = 0, contador = 0, num = 2;

while (contador < 50) {
    if ( num % 2 == 0){
        soma += num;
        contador ++;
    }
    num++;
}

printf("A soma dos 50 primeiros números pares é: %d\n", soma);

return 0;

}