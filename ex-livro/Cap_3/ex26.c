//Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A=π* raio2, sendo π=3.141592.

#include <stdio.h>
#include <math.h>

int main (){
    
    double raio;

    printf("Digite o raio de um circulo: ");
    scanf("%lf",&raio);

    double area = 3.141592 * pow(raio,2);

    printf("Area do circulo %.2f",area);

    return 0;
}