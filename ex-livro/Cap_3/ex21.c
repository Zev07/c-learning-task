/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M=K/3.6, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>

int main (){
    
    float quilometros;
    
    printf("Digite uma velocidade em KM/h: ");
    scanf("%f",&quilometros);

    float metros = quilometros / 3.6;

    printf("O valor convertido em M/s: %.2f",metros);

    return 0;
}