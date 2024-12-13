/*Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

#include <stdio.h>

int main () {

    int contador = 10;
    
    while (contador >= 0) {
        printf("%d\n",contador);
        contador--;
    }
    printf("FIM");
    return 0;
}