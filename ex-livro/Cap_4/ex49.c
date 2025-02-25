/*Operador %:
É válido somente para tipos inteiros (int ou long).
Quando usado com um número double, você terá um erro ou comportamento inesperado.
∆=b2– 4 * a * c e ax2+bx+c=0 */

#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c, delta, x1, x2;

    printf("Digite os coeficientes a,b e c da equacao (ax^2 + bx + c = 0): \n");
    scanf("%lf %lf %lf",&a, &b, &c);

    if (a == 0){
        printf("Nao eh equacao de segundo grau.\n");
    } else {
        delta = pow(b, 2) - 4 * a * c;
    } if (delta < 0) {
        printf("Nao existe raiz. \n");
    } else if (delta == 0) {
        x1 = - b / (2 * a);
        printf("Raiz unica: %.2lf\n",x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a); 
        printf("Raizes reais: \n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n",x2);
    }
    return 0;
}
