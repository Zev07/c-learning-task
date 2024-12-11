/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:

i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores. */

#include <stdio.h>

int main () {
    
    const double premio = 780.000;

    const double primeiro_ganhador = (46 * premio) / 100;

    const double segundo_ganhador = (32 * premio) / 100;

    const double terceiro_ganhador = premio - (primeiro_ganhador + segundo_ganhador);

    printf("Resultado do concurso com o premio de R$ %.3f\n Primeiro lugar: R$ %.3f\n Segundo lugar: R$ %.3f\n Terceiro lugar: R$ %.3f",premio,primeiro_ganhador,segundo_ganhador,terceiro_ganhador );
    
    return 0;
}