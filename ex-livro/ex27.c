//Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio2 * altura

#include <stdio.h>
#include <math.h>

int main (){

    const double pi = 3.141592;
    double altura;
    double raio;

    printf("Digite altura de um cilindro circular:\n ");
    scanf("%lf",&altura);

    printf("Digite o raio de um cilindro circular:\n");
    scanf("%lf",&raio);

    double volume = pi * pow(raio,2) * altura;

    printf("O volume do clindro circular eh: %.2lf \n",volume);

    return 0 ;
}