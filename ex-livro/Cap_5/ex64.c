/* Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>

int main () {
    int n;

    printf("Digite um numero inteiro maior ou igual a 0: ");
    scanf("%d",&n);

    if ( n < 0){
        printf("Numero invalido! digite um numero maior ou igual a 0.");
        return 1;
    }

    if (n == 0){
        printf("O termo de ordem 0 da sequencia de fibonacci eh: 0 \n");
        return 0;
    }

    if (n == 1){
        printf("O termo de ordem 1 da sequencia de fibonacci eh: 1 \n");
        return 0;
    }

    // Calcula o enésimo termo para n >= 2
    int a = 0; // F(0)
    int b = 1; // F (1)
    int fibonacci;

    for (int i = 2; i <= n; i++){
        fibonacci = a + b;
        a = b;
        b = fibonacci;
    }

    printf("O termo de ordem %d da sequencia de fibonacii eh: %d\n", n, fibonacci);

    return 0;
    
}